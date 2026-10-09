#define _POSIX_C_SOURCE 200112L
#include "jaec.h"
#include "dsp_internal.h"
#include "vendor/pffft/pffft.h"
#include <stdlib.h>
#include <string.h>

typedef struct {
    JaecModel *model;
    JaecTde *tde;
    JaecLp *lp;
    PFFFT_Setup *fft;
    float window[512], normalization[160];
    _Alignas(32) float fft_input[512];
    _Alignas(32) float fft_output[512];
    _Alignas(32) float fft_work[512];
    float mic_ring[1024], ref_ring[1024], overlap[512];
    float ref_spectrum[514], mic_spectrum[514], aligned_ref[514], result[514];
    float ref_history[100][514], probability[100];
    int input_pos, output_pos, history_pos;
    int primed, far_active, silent_frames;
} JaecFrontend;

static _Thread_local char last_error[128];

const char *jaec_frontend_last_error(void) { return last_error; }

static void fail(const char *s)
{
    size_t n = strlen(s);
    if (n >= sizeof(last_error)) n = sizeof(last_error)-1;
    memcpy(last_error, s, n);
    last_error[n] = 0;
}

void jaec_frontend_destroy(void *state)
{
    JaecFrontend *s = state;
    if (!s) return;
    if (s->fft) pffft_destroy_setup(s->fft);
    free(s->tde);
    free(s->lp);
    jaec_model_free(s->model);
    free(s);
}

void *jaec_frontend_create(const char *model_path)
{
    last_error[0] = 0;
    if (!model_path || !model_path[0]) {
        fail("model_path is required");
        return NULL;
    }
    JaecFrontend *s = NULL;
    if (posix_memalign((void **)&s, 32, sizeof(*s)) || !s) {
        fail("initialization failed");
        return NULL;
    }
    memset(s, 0, sizeof(*s));
    s->model = jaec_model_load(model_path);
    if (s->model) {
        s->tde = jaec_tde_create(s->model);
        s->lp = jaec_lp_create(s->model);
        s->fft = pffft_new_setup(512, PFFFT_REAL);
    }
    if (!s->model || !s->tde || !s->lp || !s->fft) {
        fail("initialization failed");
        jaec_frontend_destroy(s);
        return NULL;
    }
    for (int i = 0; i < 512; ++i)
        s->window[i] = sqrtf((1.0f - cosf((float)i * 6.2831855f / 512.0f))*0.5f);
    for (int i = 0; i < 160; ++i) {
        float sum = 0.0f;
        for (int j = i; j < 512; j += 160) sum += s->window[j]*s->window[j];
        s->normalization[i] = sum > 0.0f ? 1.0f/(512.0f*sum) : 0.0f;
    }
    return s;
}

void jaec_frontend_reset(void *state)
{
    JaecFrontend *s = state;
    if (!s) return;
    jaec_tde_reset(s->tde);
    jaec_lp_reset(s->lp);
    memset(s->mic_ring, 0, sizeof(s->mic_ring));
    memset(s->ref_ring, 0, sizeof(s->ref_ring));
    memset(s->overlap, 0, sizeof(s->overlap));
    memset(s->ref_history, 0, sizeof(s->ref_history));
    memset(s->probability, 0, sizeof(s->probability));
    s->input_pos = s->output_pos = s->history_pos = 0;
    s->primed = s->far_active = s->silent_frames = 0;
}

static void append_pcm(float *ring, int pos, const int16_t *pcm)
{
    for (int i = 0; i < 160; ++i) {
        int at = (pos+i) & 511;
        ring[at] = ring[at+512] = (float)pcm[i] * (1.0f/32768.0f);
    }
}

static void analyze(JaecFrontend *s, const float *signal, float *spectrum)
{
    for (int i = 0; i < 512; ++i) s->fft_input[i] = signal[i]*s->window[i];
    pffft_transform_ordered(s->fft, s->fft_input, s->fft_output,
                            s->fft_work, PFFFT_FORWARD);
    spectrum[0] = s->fft_output[0];
    spectrum[1] = 0.0f;
    memcpy(spectrum+2, s->fft_output+2, 510*sizeof(float));
    spectrum[512] = s->fft_output[1];
    spectrum[513] = 0.0f;
}

static void synthesize(JaecFrontend *s, const float *spectrum, int16_t *pcm)
{
    s->fft_input[0] = spectrum[0];
    s->fft_input[1] = spectrum[512];
    memcpy(s->fft_input+2, spectrum+2, 510*sizeof(float));
    pffft_transform_ordered(s->fft, s->fft_input, s->fft_output,
                            s->fft_work, PFFFT_BACKWARD);
    for (int i = 0; i < 512; ++i)
        s->overlap[(s->output_pos+i)&511] += s->fft_output[i]*s->window[i];
    for (int i = 0; i < 160; ++i) {
        int at = (s->output_pos+i)&511;
        float value = s->overlap[at]*s->normalization[i];
        if (isnan(value)) {
            pcm[i] = 0;
        } else {
            value *= 32768.0f;
            if (value >= 32767.0f) pcm[i] = 32767;
            else if (value <= -32768.0f) pcm[i] = -32768;
            else pcm[i] = (int16_t)lrintf(value);
        }
        s->overlap[at] = 0.0f;
    }
    s->output_pos = (s->output_pos+160)&511;
}

int jaec_frontend_process(void *state, const int16_t *mic, const int16_t *ref,
                          int sample_count, int16_t *output)
{
    JaecFrontend *s = state;
    if (!s || !mic || !ref || !output || sample_count < 1 ||
        sample_count % 160 != 0) {
        fail("invalid process arguments");
        return -1;
    }
    for (int frame = 0; frame < sample_count; frame += 160) {
        int active = 0;
        for (int i = 0; i < 160; ++i) active |= ref[frame+i] != 0;
        if (active) {
            s->far_active = 1;
            s->silent_frames = 0;
        } else if (s->far_active) {
            if (s->silent_frames < 300) ++s->silent_frames;
            else s->far_active = 0;
        }
        append_pcm(s->mic_ring, s->input_pos, mic+frame);
        append_pcm(s->ref_ring, s->input_pos, ref+frame);
        s->input_pos = (s->input_pos+160)&511;
        if (!s->primed) {
            memset(output+frame, 0, 160*sizeof(*output));
            s->primed = 1;
            continue;
        }
        analyze(s, s->mic_ring+s->input_pos, s->mic_spectrum);
        if (s->far_active) {
            analyze(s, s->ref_ring+s->input_pos, s->ref_spectrum);
            jaec_tde_step(s->tde, s->ref_spectrum, s->mic_spectrum, s->probability);
            memcpy(s->ref_history[s->history_pos], s->ref_spectrum,
                   sizeof(s->ref_spectrum));
            s->history_pos = (s->history_pos+1)%100;
            jaec_delay_align(&s->ref_history[0][0], s->history_pos,
                              s->probability, s->aligned_ref);
            jaec_lp_step(s->lp, s->aligned_ref, s->mic_spectrum, s->result);
            synthesize(s, s->result, output+frame);
        } else {
            synthesize(s, s->mic_spectrum, output+frame);
        }
    }
    return 0;
}

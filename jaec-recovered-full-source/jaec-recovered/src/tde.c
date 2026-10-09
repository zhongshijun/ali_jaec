/* Reconstructed from jaec_x86.so RVAs 0x51b0--0x7050 and 0x8920.
 * Portable, scalar implementation. Original model offsets are retained. */
#include "dsp_internal.h"
#include <limits.h>
#include <stdlib.h>
#include <string.h>

#ifndef JAEC_TDE_SKIP
#define JAEC_TDE_SKIP 1
#endif

JaecTde *jaec_tde_create(const JaecModel *model)
{
    static const int bins[16] = {
        13,26,38,51,64,77,90,102,115,128,141,154,166,179,192,205
    };
    JaecTde *s = calloc(1, sizeof(*s));
    if (s) {
        s->model = model;
        memcpy(s->bins, bins, sizeof(bins));
    }
    return s;
}

void jaec_tde_reset(JaecTde *s)
{
    if (!s) return;
    memset(s->mean_ref, 0, sizeof(*s) - offsetof(JaecTde, mean_ref));
    s->peak = -1;
}

/* Correlate centered spectral magnitudes across 100 candidate frame delays.
 * History is traversed oldest first, matching the probability vector order. */
static void correlation_features(JaecTde *s, const float *ref, const float *mic,
                                 float level[2])
{
    const float alpha = 0.975f, beta = 1.0f - alpha, eps = 1e-8f;
    const float *signals[2] = {ref, mic};
    for (int k = 0; k < 2; ++k) {
        float power = 0.0f;
        for (int j = 0; j < 512; ++j)
            power += signals[k][j] * signals[k][j];
        power = (signals[k][513] * signals[k][513] +
                 signals[k][512] * signals[k][512] + power) / 257.0f;
        float rms = sqrtf(fmaxf(power, eps));
        level[k] = jaec_clip((20.0f * log10f(fmaxf(rms, eps)) + 80.0f) /
                            80.0f, 0.0f, 1.0f);
    }
    int next = (s->ring + 1) % 100;
    for (int c = 0; c < 16; ++c) {
        int bin = s->bins[c];
        float r = sqrtf(ref[2*bin] * ref[2*bin] +
                        ref[2*bin+1] * ref[2*bin+1] + eps);
        float m = sqrtf(mic[2*bin] * mic[2*bin] +
                        mic[2*bin+1] * mic[2*bin+1] + eps);
        s->mean_ref[c] += (r - s->mean_ref[c]) * beta;
        s->mean_mic[c] += (m - s->mean_mic[c]) * beta;
        r -= s->mean_ref[c];
        m -= s->mean_mic[c];
        s->var_ref[c] += (r*r - s->var_ref[c]) * beta;
        s->var_mic[c] += (m*m - s->var_mic[c]) * beta;
        float inv_m = 1.0f / sqrtf(fmaxf(s->var_mic[c], eps));
        s->ref_history[c][s->ring] = r;
        s->ref_inv_std[c][s->ring] =
            1.0f / sqrtf(fmaxf(s->var_ref[c], eps));
        for (int d = 0; d < 100; ++d) {
            int h = (next + d) % 100;
            float corr = s->ref_history[c][h] * (m * beta) +
                         s->correlation[c][d] * alpha;
            s->correlation[c][d] = corr;
            s->features[c][d+2] =
                jaec_clip(corr * inv_m * s->ref_inv_std[c][h], -1.0f, 1.0f);
        }
    }
    s->ring = next;
}

void jaec_tde_conv(float slope, const float *input, int in_channels,
                   const float *weight, const float *bias, int out_channels,
                   float *output)
{
    for (int o = 0; o < out_channels; ++o) {
        for (int d = 0; d < 100; ++d) {
            float v = bias[o];
            for (int c = 0; c < in_channels; ++c) {
                const float *w = weight + (o * in_channels + c) * 5;
                const float *x = input + c * 104 + d;
                for (int k = 0; k < 5; ++k) v += w[k] * x[k];
            }
            output[o*104+d+2] = v < 0.0f ? v*slope : v;
        }
    }
}

static void smooth_probabilities(JaecTde *s, const float level[2], float *out)
{
    const JaecModel *m = s->model;
    memcpy(s->gru_input, s->pooled, sizeof(s->pooled));
    s->gru_input[24] = level[0];
    s->gru_input[25] = level[1];
    const float *wi = jaec_weights(m, 0x13ae0);
    const float *wh = jaec_weights(m, 0x12ee0);
    const float *bi = jaec_weights(m, 0x12e20);
    const float *bh = jaec_weights(m, 0x12d60);
    for (int g = 0; g < 48; ++g) {
        float xi = 0.0f, hh = 0.0f;
        for (int j = 0; j < 26; ++j) xi += wi[g*26+j] * s->gru_input[j];
        for (int j = 0; j < 16; ++j) hh += wh[g*16+j] * s->hidden[j];
        s->input_gates[g] = xi + bi[g];
        s->hidden_gates[g] = hh + bh[g];
    }
    for (int j = 0; j < 16; ++j) {
        float r = jaec_sigmoid(s->input_gates[j] + s->hidden_gates[j]);
        float z = jaec_sigmoid(s->input_gates[j+16] + s->hidden_gates[j+16]);
        float n = tanhf(r * s->hidden_gates[j+32] + s->input_gates[j+32]);
        s->hidden[j] = z * (s->hidden[j] - n) + n;
    }
    float v = 0.0f;
    const float *w = jaec_weights(m, 0x12d20);
    for (int j = 0; j < 16; ++j) v += s->hidden[j] * w[j];
    float gate = jaec_sigmoid(v + *jaec_weights(m, 0x12d00));
    if (!s->ready) {
        memcpy(out, s->probabilities, sizeof(s->probabilities));
        s->ready = 1;
    } else {
        float sum = 0.0f;
        for (int d = 0; d < 100; ++d) {
            out[d] = s->previous[d] * (1.0f - gate) + s->probabilities[d] * gate;
            sum += out[d];
        }
        float inv = 1.0f / (sum + 1e-8f);
        for (int d = 0; d < 100; ++d) out[d] *= inv;
    }
    memcpy(s->previous, out, sizeof(s->previous));
}

void jaec_tde_step(JaecTde *s, const float *ref, const float *mic, float *out)
{
    float level[2];
    if (!s || !ref || !mic || !out) return;
    correlation_features(s, ref, mic, level);
    if (JAEC_TDE_SKIP && s->ready) {
        int interval = 1;
        if (s->confidence >= 0.9999999f) {
            int n = s->stable_frames;
            interval = n >= 256 ? 128 : n >= 96 ? 4 : n >= 64 ? 3 :
                       n >= 16 ? 2 : 1;
        }
        if (s->confidence >= 0.999f && s->skipped < interval) {
            ++s->skipped;
            memcpy(out, s->previous, sizeof(s->previous));
            return;
        }
    }
    s->skipped = 0;
    const JaecModel *m = s->model;
    jaec_tde_conv(*jaec_weights(m, 0x16cc0), &s->features[0][0], 16,
                  jaec_weights(m, 0x14ec0), jaec_weights(m, 0x14e60), 24,
                  &s->conv1[0][0]);
    jaec_tde_conv(*jaec_weights(m, 0x19a40), &s->conv1[0][0], 24,
                  jaec_weights(m, 0x16d40), jaec_weights(m, 0x16ce0), 24,
                  &s->conv2[0][0]);
    const float *w = jaec_weights(m, 0x19a80);
    float bias = *jaec_weights(m, 0x19a60);
    for (int d = 0; d < 100; ++d) s->logits[d] = bias;
    for (int c = 0; c < 24; ++c) {
        float sum = 0.0f;
        for (int d = 0; d < 100; ++d) {
            float v = s->conv2[c][d+2];
            s->logits[d] += v*w[c];
            sum += v;
        }
        s->pooled[c] = sum * 0.01f;
    }
    float largest = -INFINITY;
    for (int d = 0; d < 100; ++d) {
        s->logits[d] *= 8.0f;
        if (s->logits[d] > largest) largest = s->logits[d];
    }
    float sum = 0.0f;
    for (int d = 0; d < 100; ++d) {
        s->probabilities[d] = expf(s->logits[d] - largest);
        sum += s->probabilities[d];
    }
    float inv = 1.0f / (sum + 1e-20f);
    for (int d = 0; d < 100; ++d) s->probabilities[d] *= inv;
    smooth_probabilities(s, level, out);
    int peak = 0;
    for (int d = 1; d < 100; ++d) if (out[d] > out[peak]) peak = d;
    s->confidence = out[peak];
    if (s->stable_frames < 1 || peak != s->peak) {
        s->stable_frames = 1;
        s->peak = peak;
    } else if (s->stable_frames != INT_MAX) {
        ++s->stable_frames;
    }
}

void jaec_delay_align(const float *history, int oldest, const float *prob,
                      float *out)
{
    memset(out, 0, 514 * sizeof(*out));
    for (int d = 0; d < 100; ++d) {
        const float *frame = history + ((oldest+d) % 100) * 514;
        for (int k = 0; k < 514; ++k) out[k] += frame[k] * prob[d];
    }
}

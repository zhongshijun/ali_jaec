#ifndef JAEC_DSP_INTERNAL_H
#define JAEC_DSP_INTERNAL_H

#include "model_loader.h"
#include <math.h>
#include <stddef.h>
#include <stdint.h>

enum { JAEC_FFT = 512, JAEC_HOP = 160, JAEC_BINS = 257,
       JAEC_DELAYS = 100, JAEC_TDE_BINS = 16, JAEC_TDE_STRIDE = 104 };

static inline const float *jaec_weights(const JaecModel *m, size_t offset)
{
    return (const float *)(m->bytes + offset);
}

static inline float jaec_sigmoid(float x)
{
    if (x >= 0.0f) return 1.0f / (1.0f + expf(-x));
    float e = expf(x);
    return e / (e + 1.0f);
}

static inline float jaec_clip(float x, float lo, float hi)
{
    return x < lo ? lo : (x > hi ? hi : x);
}

/* Preserve the observed TDE layout so that intermediate states can be
 * compared directly against the reference binary. All offsets are bytes. */
typedef struct {
    const JaecModel *model;             /* 0x0000 */
    void *reserved;                     /* 0x0008: optional packed kernel */
    int bins[16];                       /* 0x0010 */
    float mean_ref[16];                 /* 0x0050 */
    float mean_mic[16];                 /* 0x0090 */
    float var_ref[16];                  /* 0x00d0 */
    float var_mic[16];                  /* 0x0110 */
    float ref_history[16][100];         /* 0x0150 */
    float ref_inv_std[16][100];         /* 0x1a50 */
    float correlation[16][100];         /* 0x3350 */
    float previous[100];                /* 0x4c50 */
    float hidden[16];                   /* 0x4de0 */
    int ready, skipped;                 /* 0x4e20 */
    float confidence;                  /* 0x4e28 */
    int stable_frames, peak, ring;      /* 0x4e2c */
    float features[16][104];            /* 0x4e38: two zero pads per side */
    float conv1[24][104];               /* 0x6838 */
    float conv2[24][104];               /* 0x8f38 */
    float logits[100];                  /* 0xb638 */
    float probabilities[100];           /* 0xb7c8 */
    float pooled[24];                   /* 0xb958 */
    float gru_input[26];                /* 0xb9b8 */
    float input_gates[48];              /* 0xba20 */
    float hidden_gates[48];             /* 0xbae0 */
} JaecTde;

_Static_assert(offsetof(JaecTde, features) == 0x4e38, "TDE feature layout");
_Static_assert(offsetof(JaecTde, logits) == 0xb638, "TDE output layout");
_Static_assert(sizeof(JaecTde) == 0xbba0, "TDE state layout");

JaecTde *jaec_tde_create(const JaecModel *model);
void jaec_tde_reset(JaecTde *s);
void jaec_tde_step(JaecTde *s, const float *ref, const float *mic, float *out);
void jaec_delay_align(const float *history, int oldest, const float *prob,
                      float *out);
void jaec_tde_conv(float slope, const float *input, int in_channels,
                   const float *weight, const float *bias, int out_channels,
                   float *output);

typedef struct {
    const JaecModel *model;
    float hidden[64][32];
    float filter_re[4][264], filter_im[4][264];
    float ref_re[4][264], ref_im[4][264];
    float error_re[264], error_im[264], ref_power[264];
    float features[6][257];
    float conv[6][64];
    float step_size[264], decay[264];
    float decoder1[32][128], decoder2[32][257];
    int ring;
} JaecLp;

JaecLp *jaec_lp_create(const JaecModel *model);
void jaec_lp_reset(JaecLp *s);
void jaec_lp_step(JaecLp *s, const float *ref, const float *mic, float *out);

/* Named stages are also useful to inspect and validate the recovered graph. */
void jaec_lp_features(JaecLp *s, const float *ref, const float *mic);
void jaec_lp_encode(JaecLp *s);
void jaec_lp_recurrent(JaecLp *s);
void jaec_lp_decode(JaecLp *s);
void jaec_lp_update(JaecLp *s, const float *mic, float *out);
float jaec_lp_sigmoid(float x);
float jaec_lp_tanh(float x);

#endif

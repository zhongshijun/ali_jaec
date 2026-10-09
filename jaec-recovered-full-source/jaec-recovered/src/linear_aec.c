/* Reconstructed scalar LP graph from RVAs 0x8540--0xa920.
 *
 * Six spectral features -> stride-4 convolution -> shared 6-to-32 projection
 * -> 64 independent GRU states -> two subpixel convolution stages -> two
 * sigmoid heads. The heads control normalized complex LMS updates.
 *
 * The AVX2 binary algebraically fuses the linear decoder. Here the unfused
 * scalar graph is explicit, using the exact same supplied model weights. */
#include "dsp_internal.h"
#include <stdlib.h>
#include <string.h>

JaecLp *jaec_lp_create(const JaecModel *model)
{
    JaecLp *s = calloc(1, sizeof(*s));
    if (s) s->model = model;
    return s;
}

void jaec_lp_reset(JaecLp *s)
{
    if (!s) return;
    const JaecModel *m = s->model;
    memset(s, 0, sizeof(*s));
    s->model = m;
}

void jaec_lp_features(JaecLp *s, const float *ref, const float *mic)
{
    const float eps = 1e-6f;
    for (int f = 0; f < 257; ++f) {
        float rr = ref[2*f], ri = ref[2*f+1];
        float mr = mic[2*f], mi = mic[2*f+1];
        s->ref_re[s->ring][f] = rr;
        s->ref_im[s->ring][f] = ri;
        float er = 0.0f, ei = 0.0f, power = 0.0f;
        for (int t = 0; t < 4; ++t) {
            int i = (s->ring + t + 1) & 3;
            float xr = s->ref_re[i][f], xi = s->ref_im[i][f];
            float hr = s->filter_re[t][f], hi = s->filter_im[t][f];
            er += hr*xr - hi*xi;
            ei += hr*xi + hi*xr;
            power += xr*xr + xi*xi;
        }
        float dr = mr-er, di = mi-ei;
        s->error_re[f] = dr;
        s->error_im[f] = di;
        s->ref_power[f] = power;
        float mic_power = mr*mr + mi*mi;
        float denominator = sqrtf((rr*rr + ri*ri) * mic_power + eps);
        denominator = fmaxf(denominator, eps);
        s->features[0][f] = logf(power + eps);
        s->features[1][f] = logf(mic_power + eps);
        s->features[2][f] = logf(er*er + ei*ei + eps);
        s->features[3][f] = logf(dr*dr + di*di + eps);
        s->features[4][f] =
            jaec_clip((rr*mr + ri*mi) / denominator, -10.0f, 10.0f);
        s->features[5][f] =
            jaec_clip((rr*mi - ri*mr) / denominator, -10.0f, 10.0f);
    }
}

void jaec_lp_encode(JaecLp *s)
{
    const float *w = jaec_weights(s->model, 0xe0);
    const float *b = jaec_weights(s->model, 0xc0);
    for (int o = 0; o < 6; ++o) {
        for (int f = 0; f < 64; ++f) {
            float v = b[o];
            for (int c = 0; c < 6; ++c)
                for (int k = 0; k < 5; ++k)
                    v += s->features[c][f*4+k] * w[(o*6+c)*5+k];
            s->conv[o][f] = v;
        }
    }
}

void jaec_lp_recurrent(JaecLp *s)
{
    const JaecModel *m = s->model;
    const float *wp = jaec_weights(m, 0x129e0);
    const float *bp = jaec_weights(m, 0x12960);
    const float slope = *jaec_weights(m, 0x12ce0);
    const float *wi = jaec_weights(m, 0xf8c0);
    const float *wh = jaec_weights(m, 0xc8c0);
    const float *bi = jaec_weights(m, 0xc740);
    const float *bh = jaec_weights(m, 0xc5c0);
    for (int f = 0; f < 64; ++f) {
        float x[32], input[96], hidden[96];
        for (int o = 0; o < 32; ++o) {
            float v = bp[o];
            for (int c = 0; c < 6; ++c) v += wp[o*6+c] * s->conv[c][f];
            x[o] = v < 0.0f ? v*slope : v;
        }
        for (int g = 0; g < 96; ++g) {
            float a = bi[g], b = bh[g];
            for (int c = 0; c < 32; ++c) {
                a += wi[g*32+c] * x[c];
                b += wh[g*32+c] * s->hidden[f][c];
            }
            input[g] = a;
            hidden[g] = b;
        }
        for (int c = 0; c < 32; ++c) {
            float r = jaec_lp_sigmoid(input[c] + hidden[c]);
            float z = jaec_lp_sigmoid(input[c+32] + hidden[c+32]);
            float n = jaec_lp_tanh(input[c+64] + r*hidden[c+64]);
            s->hidden[f][c] = (s->hidden[f][c] - n)*z + n;
        }
    }
}

/* Each decoder stage uses two width-3 convolutions for the even and odd
 * output positions. There is deliberately no activation between stages. */
void jaec_lp_decode(JaecLp *s)
{
    const JaecModel *m = s->model;
    const float *w1[2] = {jaec_weights(m, 0x440), jaec_weights(m, 0x34c0)};
    const float *b1[2] = {jaec_weights(m, 0x3c0), jaec_weights(m, 0x3440)};
    const float *w2[2] = {jaec_weights(m, 0x6540), jaec_weights(m, 0x95c0)};
    const float *b2[2] = {jaec_weights(m, 0x64c0), jaec_weights(m, 0x9540)};
    for (int o = 0; o < 32; ++o) {
        for (int f = 0; f < 64; ++f) {
            float a = b1[0][o], b = b1[1][o];
            for (int c = 0; c < 32; ++c) {
                for (int k = 0; k < 3; ++k) {
                    int at = f+k-1;
                    if (at < 0 || at >= 64) continue;
                    float x = s->hidden[at][c];
                    int i = (o*32+c)*3+k;
                    a += w1[0][i]*x;
                    b += w1[1][i]*x;
                }
            }
            s->decoder1[o][2*f] = a;
            s->decoder1[o][2*f+1] = b;
        }
    }
    for (int o = 0; o < 32; ++o) {
        for (int f = 0; f < 129; ++f) {
            float a = b2[0][o], b = b2[1][o];
            for (int c = 0; c < 32; ++c) {
                for (int k = 0; k < 3; ++k) {
                    int at = f+k-1;
                    if (at < 0 || at >= 128) continue;
                    float x = s->decoder1[c][at];
                    int i = (o*32+c)*3+k;
                    a += w2[0][i]*x;
                    b += w2[1][i]*x;
                }
            }
            s->decoder2[o][2*f] = a;
            if (f < 128) s->decoder2[o][2*f+1] = b;
        }
    }
    const float *step = jaec_weights(m, 0x40);
    const float *decay = jaec_weights(m, 0x128e0);
    for (int f = 0; f < 257; ++f) {
        float a = *jaec_weights(m, 0x20), b = *jaec_weights(m, 0x128c0);
        for (int c = 0; c < 32; ++c) {
            a += s->decoder2[c][f]*step[c];
            b += s->decoder2[c][f]*decay[c];
        }
        /* The AVX2 implementation handles its last bin in a scalar tail. */
        s->step_size[f] = f < 256 ? jaec_lp_sigmoid(a) : jaec_sigmoid(a);
        s->decay[f] = f < 256 ? jaec_lp_sigmoid(b) : jaec_sigmoid(b);
    }
}

void jaec_lp_update(JaecLp *s, const float *mic, float *out)
{
    for (int f = 0; f < 257; ++f) {
        float mu = s->step_size[f] / (s->ref_power[f] + 1e-6f);
        float er = s->error_re[f], ei = s->error_im[f];
        float sum_r = 0.0f, sum_i = 0.0f;
        for (int t = 0; t < 4; ++t) {
            int i = (s->ring+t+1) & 3;
            float xr = s->ref_re[i][f], xi = s->ref_im[i][f];
            float hr = s->filter_re[t][f]*s->decay[f] +
                       mu*xr*er - xi*(-mu)*ei;
            float hi = s->filter_im[t][f]*s->decay[f] +
                       mu*xr*ei + xi*(-mu)*er;
            s->filter_re[t][f] = hr;
            s->filter_im[t][f] = hi;
            sum_r += xr*hr - xi*hi;
            sum_i += xr*hi + xi*hr;
        }
        out[2*f] = mic[2*f] - sum_r;
        out[2*f+1] = mic[2*f+1] - sum_i;
    }
}

void jaec_lp_step(JaecLp *s, const float *ref, const float *mic, float *out)
{
    if (!s || !ref || !mic || !out) return;
    jaec_lp_features(s, ref, mic);
    jaec_lp_encode(s);
    jaec_lp_recurrent(s);
    jaec_lp_decode(s);
    jaec_lp_update(s, mic, out);
    s->ring = (s->ring + 1) & 3;
}

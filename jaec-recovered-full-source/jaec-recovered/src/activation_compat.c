/* Scalar transcription of the AVX2 activation math in RVAs 0x146c2 and
 * 0x167e8. The original uses a reduced-range degree-5 exponential polynomial
 * and unrefined RCPPS, not libm sigmoid/tanh. Constants are encoded exactly.
 *
 * SSE RCPSS reproduces a lane of RCPPS on the tested x86 CPU. Other targets
 * fall back to the accurate scalar kernels; no AVX2 instructions are needed. */
#include "dsp_internal.h"
#include <string.h>

#if defined(JAEC_X86_APPROX) && JAEC_X86_APPROX && defined(__SSE__)
#include <xmmintrin.h>
static float native_exp_approx(float x)
{
    x = jaec_clip(x, -0x1.61814ap+6f, 0x1.61814ap+6f);
    float n = floorf(fmaf(x, 0x1.715476p+0f, 0.5f));
    x = fmaf(-n, 0x1.63p-1f, x);
    x = fmaf(-n, -0x1.bd0106p-13f, x);
    float p = fmaf(0x1.111210p-7f, x, 0x1.555382p-5f);
    p = fmaf(p, x, 0x1.555554p-3f);
    p = fmaf(p, x, 0.5f);
    p = fmaf(p, x*x, x);
    uint32_t bits = (uint32_t)((int)n + 127) << 23;
    float scale;
    memcpy(&scale, &bits, sizeof(scale));
    return (p+1.0f)*scale;
}

float jaec_lp_sigmoid(float x)
{
    float denominator = native_exp_approx(0.0f-x)+1.0f;
    return _mm_cvtss_f32(_mm_rcp_ss(_mm_set_ss(denominator)));
}

float jaec_lp_tanh(float x)
{
    float s = jaec_lp_sigmoid(x+x);
    return (s+s)-1.0f;
}
#else
float jaec_lp_sigmoid(float x) { return jaec_sigmoid(x); }
float jaec_lp_tanh(float x) { return tanhf(x); }
#endif

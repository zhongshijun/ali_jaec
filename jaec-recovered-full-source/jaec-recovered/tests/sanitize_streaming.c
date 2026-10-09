/* Exercise stream state, wraparound, reference hold, aliasing and cleanup
 * under ASan/UBSan without loading the original library. */
#include "../src/jaec.h"
#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    assert(argc == 2);
    enum { N = 160*420 };
    int16_t *mic = malloc(N*sizeof(*mic)), *ref = malloc(N*sizeof(*ref));
    int16_t *a = malloc(N*sizeof(*a)), *b = malloc(N*sizeof(*b));
    assert(mic && ref && a && b);
    uint32_t random = 1092026;
    for (int i = 0; i < N; ++i) {
        random = random*1664525u + 1013904223u;
        mic[i] = (int16_t)(random >> 16);
        random = random*1664525u + 1013904223u;
        ref[i] = i >= 40*160 && i < 350*160 ? 0 : (int16_t)(random >> 16);
    }
    void *state = jaec_frontend_create(argv[1]);
    assert(state);
    assert(jaec_frontend_process(state, mic, ref, N, a) == 0);
    jaec_frontend_reset(state);
    for (int i = 0; i < N; i += 160)
        assert(jaec_frontend_process(state, mic+i, ref+i, 160, b+i) == 0);
    assert(memcmp(a, b, N*sizeof(*a)) == 0);
    for (int i = 0; i < 160; ++i) assert(a[i] == 0);
    jaec_frontend_reset(state);
    memcpy(b, mic, N*sizeof(*b));
    assert(jaec_frontend_process(state, b, ref, N, b) == 0);
    assert(memcmp(a, b, N*sizeof(*a)) == 0);
    assert(jaec_frontend_process(state, mic, ref, 159, b) == -1);
    assert(jaec_frontend_process(NULL, mic, ref, 160, b) == -1);
    jaec_frontend_destroy(state);
    jaec_frontend_destroy(NULL);
    jaec_frontend_reset(NULL);
    assert(jaec_frontend_create(NULL) == NULL);
    free(mic); free(ref); free(a); free(b);
    puts("ASan/UBSan streaming, reset, wraparound, aliasing and cleanup passed.");
    return 0;
}

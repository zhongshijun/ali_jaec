#ifndef JAEC_FRONTEND_H
#define JAEC_FRONTEND_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/* 16 kHz, mono, signed PCM16. sample_count must be a positive multiple of 160.
 * Separate states may run concurrently; one state must be used serially. */
void *jaec_frontend_create(const char *model_path);
void jaec_frontend_destroy(void *state);
void jaec_frontend_reset(void *state);
int jaec_frontend_process(void *state, const int16_t *mic, const int16_t *ref,
                          int sample_count, int16_t *output);
const char *jaec_frontend_last_error(void);

#ifdef __cplusplus
}
#endif
#endif

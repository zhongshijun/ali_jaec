#ifndef JAEC_MODEL_LOADER_H
#define JAEC_MODEL_LOADER_H

#include <stddef.h>
#include <stdint.h>

typedef struct {
    uint8_t *bytes;
    size_t size;
    uint8_t *allocation;
} JaecModel;

JaecModel *jaec_model_load(const char *path);
void jaec_model_free(JaecModel *model);

#endif

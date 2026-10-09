/*
 * Readable reconstruction of the JAEC model loader at original RVA 0x4db0.
 * Reads the original tde_lp.bin unchanged. No dependency on jaec_x86.so.
 */
#define _POSIX_C_SOURCE 200112L
#include "model_loader.h"
#include "model_constants.h"
#include "vendor/monocypher/monocypher.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum {
    FILE_SIZE = 0x19b00,
    MODEL_SIZE = 0x19ae0,
    PAYLOAD_SIZE = 0x19ac0,
    SEALED_HEADER_SIZE = 64,
    PLAIN_HEADER_SIZE = 32
};

static uint32_t read_le32(const uint8_t *p)
{
    return (uint32_t)p[0] | ((uint32_t)p[1] << 8) |
           ((uint32_t)p[2] << 16) | ((uint32_t)p[3] << 24);
}

static uint64_t read_le64(const uint8_t *p)
{
    return (uint64_t)read_le32(p) | ((uint64_t)read_le32(p + 4) << 32);
}

static void write_le32(uint8_t *p, uint32_t value)
{
    for (unsigned i = 0; i < 4; ++i)
        p[i] = (uint8_t)(value >> (8 * i));
}

JaecModel *jaec_model_load(const char *path)
{
    FILE *file = NULL;
    uint8_t *data = NULL;
    JaecModel *model = NULL;
    uint8_t key[32] = {0};
    uint8_t associated_data[56] = {0};

    if (!path || !path[0])
        goto failure;
    file = fopen(path, "rb");
    if (!file || fseek(file, 0, SEEK_END) ||
        ftell(file) != FILE_SIZE || fseek(file, 0, SEEK_SET))
        goto failure;
    if (posix_memalign((void **)&data, 32, FILE_SIZE))
        goto failure;
    size_t read_count = fread(data, 1, FILE_SIZE, file);
    int close_status = fclose(file);
    file = NULL;
    if (read_count != FILE_SIZE || close_status ||
        memcmp(data, "JAECAE1", 8) ||
        read_le32(data + 8) != 1 ||
        read_le32(data + 12) != SEALED_HEADER_SIZE ||
        read_le64(data + 16) != MODEL_SIZE)
        goto failure;

    memcpy(associated_data, data, 48);
    memcpy(associated_data + 48, model_tag, 8);
    for (unsigned i = 0; i < sizeof key; ++i)
        key[i] = key_share_a[i] ^ key_share_b[i];

    int status = crypto_aead_unlock(
        data + SEALED_HEADER_SIZE, data + 48, key, data + 24,
        associated_data, sizeof associated_data,
        data + SEALED_HEADER_SIZE, PAYLOAD_SIZE);
    crypto_wipe(key, sizeof key);
    crypto_wipe(associated_data, sizeof associated_data);
    if (status)
        goto failure;

    memmove(data + PLAIN_HEADER_SIZE, data + SEALED_HEADER_SIZE, PAYLOAD_SIZE);
    crypto_wipe(data + MODEL_SIZE, FILE_SIZE - MODEL_SIZE);
    memset(data, 0, PLAIN_HEADER_SIZE);
    memcpy(data, "JAECLP1", 8);
    write_le32(data + 8, 1);
    write_le32(data + 12, PLAIN_HEADER_SIZE);
    write_le32(data + 16, MODEL_SIZE);
    memcpy(data + 24, model_tag, 8);

    model = calloc(1, sizeof *model);
    if (!model)
        goto failure;
    model->bytes = data;
    model->size = MODEL_SIZE;
    model->allocation = data;
    return model;

failure:
    if (file)
        fclose(file);
    crypto_wipe(key, sizeof key);
    crypto_wipe(associated_data, sizeof associated_data);
    if (data) {
        crypto_wipe(data, FILE_SIZE);
        free(data);
    }
    return NULL;
}

void jaec_model_free(JaecModel *model)
{
    if (!model)
        return;
    if (model->allocation) {
        crypto_wipe(model->allocation, model->size);
        free(model->allocation);
    }
    free(model);
}

#ifndef PQCLEAN_MCELIECE6688128_CLEAN_API_H
#define PQCLEAN_MCELIECE6688128_CLEAN_API_H

#include <stdint.h>

#define PQCLEAN_MCELIECE6688128_CLEAN_CRYPTO_ALGNAME "Classic McEliece 6688128"
#define PQCLEAN_MCELIECE6688128_CLEAN_CRYPTO_PUBLICKEYBYTES 1044992
#define PQCLEAN_MCELIECE6688128_CLEAN_CRYPTO_SECRETKEYBYTES 13932
#define PQCLEAN_MCELIECE6688128_CLEAN_CRYPTO_CIPHERTEXTBYTES 208
#define PQCLEAN_MCELIECE6688128_CLEAN_CRYPTO_BYTES 32

int PQCLEAN_MCELIECE6688128_CLEAN_crypto_kem_enc(
    uint8_t *c,
    uint8_t *key,
    const uint8_t *pk
);

int PQCLEAN_MCELIECE6688128_CLEAN_crypto_kem_dec(
    uint8_t *key,
    const uint8_t *c,
    const uint8_t *sk
);

int PQCLEAN_MCELIECE6688128_CLEAN_crypto_kem_keypair
(
    uint8_t *pk,
    uint8_t *sk
);

#endif
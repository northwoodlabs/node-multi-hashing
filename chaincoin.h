#ifndef CHAIN_H
#define CHAIN_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

void chain_hash(const char* input, char* output, uint32_t len);

#ifdef __cplusplus
}
#endif

#endif

#ifndef cas_chunk_h
#define cas_chunk_h

#include "common.h"

typedef enum {
  OP_RETURN,
} Opcode;

typedef struct {
  uint8_t* code;
} Chunk;

#endif
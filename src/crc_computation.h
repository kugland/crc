#ifndef CRC_CRC_COMPUTATION_H
#define CRC_CRC_COMPUTATION_H

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

struct crc_computation_t;

typedef struct crc_computation_t {
  uint_fast64_t crc;
  void *table;
  int width;
  uint_fast64_t poly;
  bool refin;
  bool refout;
  uint_fast64_t xorout;
  void (*update)(struct crc_computation_t* comp, const char* buffer, size_t size);
} crc_computation_t;

__attribute__((cold))
crc_computation_t* crc_computation_init(const crc_parameters_t* params);

__attribute__((hot))
void crc_computation_update(crc_computation_t* comp, const char* buffer, size_t size);

__attribute__((cold))
void crc_computation_finish(crc_computation_t* comp, uint_fast64_t* crc, uint_fast64_t* residue);

#endif /* CRC_CRC_COMPUTATION_H */

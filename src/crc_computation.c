#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "crc_parameters.h"
#include "crc_table.h"
#include "reflect.h"

#include "crc_computation.h"

#define CRC_COMPUTATION_UPDATE(__type, __func)                                                    \
  __attribute__((hot))                                                                            \
  static void __func(crc_computation_t* comp, const char* buffer, size_t size)                    \
  { __type crc = comp->crc;                                                                       \
    const __type* table = (__type*) comp->table;                                                  \
    bool refin = comp->refin;                                                                     \
    for (int i = 0; i < size; i++) {                                                              \
      uint_fast8_t input = buffer[i];                                                             \
      if (refin) input = reflect_u8[input];                                                       \
      crc = table[(crc & 255) ^ input] ^ (crc >> 8); }                                            \
    comp->crc = crc; }

CRC_COMPUTATION_UPDATE(uint_fast8_t,  crc_computation_update_u8)
CRC_COMPUTATION_UPDATE(uint_fast16_t, crc_computation_update_u16)
CRC_COMPUTATION_UPDATE(uint_fast32_t, crc_computation_update_u32)
CRC_COMPUTATION_UPDATE(uint_fast64_t, crc_computation_update_u64)

#undef CRC_COMPUTATION_UPDATE

crc_computation_t* crc_computation_init(const crc_parameters_t* params)
{
  crc_computation_t* comp = malloc(sizeof(crc_computation_t));
  comp->width   = params->width;
  comp->poly    = reflect_u64(params->width, params->poly);
  comp->refin   = !params->refin;
  comp->refout  = !params->refout;
  comp->xorout  = reflect_u64(params->width, params->xorout);
  comp->crc     = reflect_u64(params->width, params->init);
  if (comp->width <= 8) {
    comp->table  = crc_table_build_u8(comp->poly);
    comp->update = crc_computation_update_u8;
  } else if (comp->width <= 16) {
    comp->table  = crc_table_build_u16(comp->poly);
    comp->update = crc_computation_update_u16;
  } else if (comp->width <= 32) {
    comp->table  = crc_table_build_u32(comp->poly);
    comp->update = crc_computation_update_u32;
  } else {
    comp->table  = crc_table_build_u64(comp->poly);
    comp->update = crc_computation_update_u64;
  }
  return comp;
}

void crc_computation_update(crc_computation_t* comp, const char* buffer, size_t size)
{
  comp->update(comp, buffer, size);
}

void crc_computation_finish(crc_computation_t* comp, uint_fast64_t* crc, uint_fast64_t* residue)
{
  *crc = comp->crc ^ comp->xorout;
  comp->crc = comp->xorout;
  for (int i = 0; i < comp->width; i++) {
    comp->crc = comp->crc & 1 ? (comp->crc >> 1) ^ comp->poly : comp->crc >> 1;
  }
  *residue = comp->crc;
  if (comp->refout) {
    *crc = reflect_u64(comp->width, *crc);
    *residue = reflect_u64(comp->width, *residue);
  }
  free(comp->table);
  free(comp);
}

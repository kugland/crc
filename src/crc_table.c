#include <stdint.h>
#include <stdlib.h>

#include "crc_table.h"

__attribute__((cold))
static void* crc_table_build_u64(uint_fast64_t poly)
{
  uint_fast64_t* crc_table = (uint_fast64_t*) calloc(256, sizeof(uint_fast64_t));

  uint_fast64_t crc = 1;
  int i = 128;
  do {
    if (crc & 1) crc = (crc >> 1) ^ poly;
    else         crc >>= 1;
    for (int j = 0; j < 256; j += i * 2)
      crc_table[i ^ j] = crc ^ crc_table[j];
    i >>= 1;
  } while (i > 0);

  return crc_table;
}

#define CRC_TABLE_BUILD(__type, __func)                                                           \
  __attribute__((cold))                                                                           \
  static void* __func(__type poly)                                                                \
  { uint_fast64_t* temp = crc_table_build_u64(poly);                                              \
    __type* crc_table = (__type*) calloc(256, sizeof(__type));                                    \
    for (int i = 0; i < 256; i++) {                                                               \
      crc_table[i] = temp[i]; }                                                                   \
    free(temp);                                                                                   \
    return crc_table; }                                                                           \

CRC_TABLE_BUILD(uint_fast8_t,  crc_table_build_u8 )
CRC_TABLE_BUILD(uint_fast16_t, crc_table_build_u16)
CRC_TABLE_BUILD(uint_fast32_t, crc_table_build_u32)

#undef CRC_TABLE_BUILD

__attribute__((cold))
void* crc_table_build(int width, uint_fast64_t poly)
{
  if      (width <= 8)  return crc_table_build_u8(poly);
  else if (width <= 16) return crc_table_build_u16(poly);
  else if (width <= 32) return crc_table_build_u32(poly);
  else                  return crc_table_build_u64(poly);
}

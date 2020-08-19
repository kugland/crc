#ifndef CRC_CRC_TABLE_H
#define CRC_CRC_TABLE_H

#include <stdint.h>

__attribute__((cold))
void* crc_table_build_u8(uint_fast8_t poly);

__attribute__((cold))
void* crc_table_build_u16(uint_fast16_t poly);

__attribute__((cold))
void* crc_table_build_u32(uint_fast32_t poly);

__attribute__((cold))
void* crc_table_build_u64(uint_fast64_t poly);

#endif /* CRC_CRC_TABLE_H */

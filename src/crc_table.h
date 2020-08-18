#ifndef CRC_CRC_TABLE_H
#define CRC_CRC_TABLE_H

#include <stdint.h>

__attribute__((cold))
void* crc_table_build(int width, uint_fast64_t poly);

#endif /* CRC_CRC_TABLE_H */

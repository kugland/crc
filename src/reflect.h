#ifndef CRC_REFLECT_H
#define CRC_REFLECT_H

#include <stdint.h>

extern uint_fast8_t reflect_u8[256];

__attribute__((cold))
uint_fast64_t reflect_u64(int width, uint_fast64_t value);

#endif /* CRC_REFLECT_H */

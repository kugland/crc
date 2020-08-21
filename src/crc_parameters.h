#ifndef CRC_CRC_PARAMETERS_H
#define CRC_CRC_PARAMETERS_H

#include <stdbool.h>
#include <stdint.h>

typedef struct {
  unsigned      width;
  const char   *names[6];
  uint_fast64_t poly;
  uint_fast64_t init;
  bool          refin;
  bool          refout;
  uint_fast64_t xorout;
  uint_fast64_t check;
  uint_fast64_t residue;
} crc_parameters_t;

__attribute__((cold))
bool crc_parameters_find(const crc_parameters_t* catalog, const char* name, crc_parameters_t* params);

#endif /* CRC_CRC_PARAMETERS_H */

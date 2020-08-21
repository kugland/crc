#ifndef CRC_PARSE_PARAM_H
#define CRC_PARSE_PARAM_H

#define PARSE_PARAM_INVALID_WIDTH     1
#define PARSE_PARAM_INVALID_STR       2
#define PARSE_PARAM_OUTSIDE_RANGE     3

int parse_param(unsigned width, const char *str, uintmax_t* result);

#endif

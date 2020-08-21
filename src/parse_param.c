#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

#include "parse_param.h"

#ifdef __SIZEOF_INT128__
#define INTERNAL_TYPE unsigned __int128
#else
#define INTERNAL_TYPE uintmax_t
#endif

#define AS_INTERNAL_TYPE(x) ((INTERNAL_TYPE)(x))

#define AND_MASK(w) (~AS_INTERNAL_TYPE(0) >> AS_INTERNAL_TYPE((sizeof(INTERNAL_TYPE) * 8) - w))
#define FITS_WIDTH(x, w) ({                 \
  INTERNAL_TYPE __x = AS_INTERNAL_TYPE(x);  \
  INTERNAL_TYPE __m = AND_MASK(w);          \
  (__x & __m) == __x; })

static int parse_param_parse_numbers(const char* str, unsigned base, INTERNAL_TYPE* result)
{
  if (str[0] == 0) return PARSE_PARAM_INVALID_STR;
  INTERNAL_TYPE acc = 0;
  while (*str != 0) {
    int digit_value, digit = tolower((unsigned char)*str++);
    if      (digit >= '0' && digit <= '9') digit_value = digit - '0';
    else if (digit >= 'a' && digit <= 'f') digit_value = digit - 'a' + 10;
    else {
      return PARSE_PARAM_INVALID_STR;
    }
    if (digit_value > base)
      return PARSE_PARAM_INVALID_STR;
    acc *= base;
    acc += digit_value;
  }
  *result = acc;
  return 0;
}

static int parse_param_base_modifier(const char* str, INTERNAL_TYPE* result)
{
  if (str[0] == 0) return PARSE_PARAM_INVALID_STR;
  if (str[0] == '0') {
    switch (tolower((unsigned char)str[1])) {
      case 'b': return parse_param_parse_numbers(&str[2], 2, result);
      case 'o': return parse_param_parse_numbers(&str[2], 8, result);
      case 'x': return parse_param_parse_numbers(&str[2], 16, result);
    }
  }
  return parse_param_parse_numbers(str, 10, result);
}

static int parse_param_check_range(unsigned width, const char* str, INTERNAL_TYPE* result)
{
  int error = parse_param_base_modifier(str, result);
  if (!error && !FITS_WIDTH(*result, width))
    return PARSE_PARAM_OUTSIDE_RANGE;
  return error;
}

static int parse_param_prefix_op(unsigned width, const char* str, INTERNAL_TYPE* result)
{
  if (str[0] == 0) return PARSE_PARAM_INVALID_STR;

  int error;
  switch (str[0]) {
    case '-':
      error = parse_param_check_range(width, &str[1], result);
      *result = -(*result);
      break;
    case '~':
      error = parse_param_check_range(width, &str[1], result);
      *result = ~(*result);
      break;
    default:
      error = parse_param_check_range(width, str, result);
      break;
  }
  return error;
}

int parse_param(unsigned width, const char *str, uintmax_t* result)
{
  if (width > 64)
    return PARSE_PARAM_INVALID_WIDTH;
  if (str == NULL || result == NULL)
    abort();

  INTERNAL_TYPE internal;
  int error = parse_param_prefix_op(width, str, &internal);
  *result = internal & AND_MASK(width);
  return error;
}

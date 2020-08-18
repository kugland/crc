#include <stdlib.h>
#include <string.h>

#include "crc_parameters.h"

crc_parameters_t* crc_parameters_find(const crc_parameters_t* catalog, const char* name)
{
  if (name != NULL)
    for (int i = 0; catalog[i].width != 0; i++)
      for (int j = 0; catalog[i].names[j] != NULL; j++)
        if (strcmp(catalog[i].names[j], name) == 0) {
          crc_parameters_t* params = (crc_parameters_t*) malloc(sizeof(crc_parameters_t));
          memcpy(params, &catalog[i], sizeof(crc_parameters_t));
          return params;
        }

  return NULL;
}
/*
#include "crc_catalog.h"

void crc_parameters_print(FILE* file, const crc_parameters_t* params)
{
  char poly_format[16];
  sprintf(poly_format, "0x%%0%djx", (params->width + 3) >> 2);
  fprintf(file, "\033[1;35m*\033[0m ");
  for (int i = 0; params->names[i] != NULL; i++) {
    fprintf(file, "\033[1;35m%s\033[1;37m%s\033[0m", i == 0 ? "" : ", ", params->names[i]);
  }
  fprintf(file, "\n");

  fprintf(file, "       \033[1;35mpoly:\033[0m  ");
  fprintf(file, poly_format, (uintmax_t)params->poly);
  fprintf(file, "\n       \033[1;35minit:\033[0m  ");
  fprintf(file, poly_format, (uintmax_t)params->init);
  fprintf(file, "\n      \033[1;35mrefin:\033[0m  %s", params->refin ? "true" : "false");
  fprintf(file, "\n     \033[1;35mrefout:\033[0m  %s", params->refout ? "true" : "false");
  fprintf(file, "\n\033[4A\033[30C     \033[1;35mxorout:\033[0m  ");
  fprintf(file, poly_format, (uintmax_t)params->xorout);
  fprintf(file, "\n\033[30C      \033[1;35mcheck:\033[0m  ");
  fprintf(file, poly_format, (uintmax_t)params->check);
  fprintf(file, "\n\033[30C    \033[1;35mresidue:\033[0m  ");
  fprintf(file, poly_format, (uintmax_t)params->residue);
  fprintf(file, "\n\033[1B");
}

int main(void) {
  for (int i = 0; crc_catalog[i].width != 0; i++) {
    crc_parameters_print(stderr, &crc_catalog[i]);
    fprintf(stderr, "\n");
  }
}
*/
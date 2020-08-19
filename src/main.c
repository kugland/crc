#include <stdio.h>

#include "reflect.h"
#include "crc_catalog.h"
#include "crc_table.h"
#include "crc_computation.h"

int main(int argc, const char** argv) {
  int total_tests = 0;
  int failed_tests = 0;
  for (int i = 0; crc_catalog[i].width != 0; i++) {
    const crc_parameters_t* params = &crc_catalog[i];
    crc_computation_t* comp = crc_computation_init(params);
    crc_computation_update(comp, "123456789", 9);
    uint_fast64_t check, residue;
    crc_computation_finish(comp, &check, &residue);
    printf("Testing %s", params->names[0]);
    printf(" (poly=0x%jx, init=0x%jx, refin=%s, refout=%s, xorout=0x%jx)\n",
           params->poly, params->init, params->refin ? "true" : "false",
           params->refout ? "true" : "false", params->xorout);
    printf("  check .......");
    if (check != params->check) {
      printf(" FAIL (expected: %jx, actual: %jx)\n", params->check, check);
      failed_tests++;
    } else {
      printf(" OK\n");
    }
    printf("  residue .....");
    if (residue != params->residue) {
      printf(" FAIL (expected: %jx, actual: %jx)\n", params->residue, residue);
      failed_tests++;
    } else {
      printf(" OK\n");
    }
    printf("\n");
    total_tests += 2;
  }
  printf("%d failed of %d tests.\n", failed_tests, total_tests);
}

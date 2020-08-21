//
// Created by kugland on 2020-08-20.
//

#include "selftest.h"

#include <stdio.h>

#include "reflect.h"
#include "crc_catalog.h"
#include "crc_computation.h"

unsigned test_params(unsigned verbosity, const crc_parameters_t* params)
{
  int failed_tests = 0;
  fprintf(stderr, "Testing %s", params->names[0]);
  fprintf(stderr, " (poly=0x%jx, init=0x%jx, refin=%s, refout=%s, xorout=0x%jx)\n",
         params->poly, params->init, params->refin ? "true" : "false",
         params->refout ? "true" : "false", params->xorout);
  uint_fast64_t check, residue;
  crc_computation_t* comp = crc_computation_init(params);
  crc_computation_update(comp, "123456789", 9);
  crc_computation_finish(comp, &check, &residue);
  const bool passed_check = params->check == check;
  const bool passed_residue = params->residue == residue;
  if (!passed_check) failed_tests++;
  if (!passed_residue) failed_tests++;
  fprintf(stderr, "  check .......");
  if (!passed_check)
    fprintf(stderr, " FAIL (expected: %jx, actual: %jx)\n", params->check, check);
  else
    fprintf(stderr, " OK\n");
  fprintf(stderr, "  residue .....");
  if (!passed_residue)
    fprintf(stderr, " FAIL (expected: %jx, actual: %jx)\n", params->residue, residue);
  else
    fprintf(stderr, " OK\n");
  fprintf(stderr, "\n");
  return failed_tests;
}

void selftest(unsigned verbosity) {
  unsigned total_tests = 0;
  unsigned failed_tests = 0;
  for (int i = 0; crc_catalog[i].width != 0; i++) {
    const crc_parameters_t* params = &crc_catalog[i];
    failed_tests += test_params(verbosity, params);
    total_tests += 2;
  }
  printf("%u failed of %u tests.\n", failed_tests, total_tests);
  if (failed_tests != 0) {
    exit(1);
  }
}

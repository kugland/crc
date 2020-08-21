#include <stdio.h>
#include "cmdline.h"
#include "selftest.h"

int main(int argc, char* argv[]) {
  crc_cmdline_opts_t opts;
  parse_cmdline(argc, argv, &opts);
  if (opts.selftest) {
    selftest(opts.verbosity);
  }
}

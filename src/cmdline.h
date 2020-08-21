//
// Created by kugland on 2020-08-20.
//

#ifndef CRC_CMDLINE_H
#define CRC_CMDLINE_H

#include <stdbool.h>
#include "crc_parameters.h"

typedef struct {
    unsigned verbosity;
    crc_parameters_t params;
    bool selftest;
} crc_cmdline_opts_t;

void parse_cmdline(int argc, char* argv[], crc_cmdline_opts_t* opts);

#endif //CRC_CMDLINE_H

#define _GNU_SOURCE
#include <string.h>
#include <getopt.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#include "crc_parameters.h"
#include "crc_catalog.h"
#include "parse_param.h"

#define WE_HAVE_WIDTH      1
#define WE_HAVE_POLY       2
#define WE_HAVE_INIT       4
#define WE_HAVE_REFIN      8
#define WE_HAVE_REFOUT    16
#define WE_HAVE_XOROUT    32
#define WE_HAVE_IT_ALL    64

typedef struct {
  int verbosity;
  crc_parameters_t params;
  bool selftest;
} crc_cmdline_opts_t;

/*void parse_param(int width, const char* str)
{

}*/

const char *argv0;

static void cmdline_error(const char *fmt, ...)
{
  va_list args;
  va_start(args, fmt);
  fprintf(stderr, "%s: ", argv0);
  vfprintf(stderr, fmt, args);
  fprintf(stderr, ".\n");
  va_end(args);
  exit(1);
}

unsigned cmdline_parse_width(const char* str)
{
  if (str == NULL) abort();
  if (str != NULL && str[0] != '\0') {
    char *endptr;
    unsigned long width = strtoul(str, &endptr, 10);
    printf("%lu\n", width);
    if (*endptr == '\0' && width >= 1 && width <= 64)
      return width;
  }
  cmdline_error("Invalid value for param 'width': '%s'", str);
}

uintmax_t cmdline_parse_param(const char* param, unsigned width, const char* str)
{
  if (str == NULL) abort();
  if (str != NULL && str[0] != '\0') {
    uintmax_t value;
    int error = parse_param(width, str, &value);
    printf("%s = %jx\n", param, value);
    if (error == 0)
      return width;
  }
  cmdline_error("Invalid value for param '%s': '%s'", param, str);
}

bool cmdline_parse_bool(const char* param, const char* str)
{
  if (strcasecmp(str, "true") == 0 || strcasecmp(str, "yes") == 0 || strcmp(str, "1") == 0)
    return true;
  else if (strcasecmp(str, "false") == 0 || strcasecmp(str, "no") == 0 || strcmp(str, "0") == 0)
    return false;
  cmdline_error("Invalid value for param '%s': '%s'", param, str);
}

void parse_cmdline(int argc, char* argv[], crc_cmdline_opts_t* opts)
{
  int c;
  argv0 = basename(argv[0]);

  int params_we_have = 0;
  char *preset = NULL;
  char *width = NULL;
  char *poly = NULL;
  char *init = NULL;
  char *refin = NULL;
  char *refout = NULL;
  char *xorout = NULL;

  while (1) {
    static struct option long_options[] = {
        /* These options set a flag. */
        {"verbose", no_argument,       0, 'v'},
        {"quiet",   no_argument,       0, 'q'},
        {"preset",  required_argument, 0, 'P'},
        /* Specify the parameters for the CRC in the command line. */
        {"width",   required_argument, 0, 'w'},
        {"poly",    required_argument, 0, 'p'},
        {"init",    required_argument, 0, 'i'},
        {"refin",   required_argument, 0, 'r'},
        {"refout",  required_argument, 0, 'R'},
        {"xorout",  required_argument, 0, 'x'},
        {"selftest", no_argument,      0, 0  },
        {0,0, 0, 0 }
    };

    /* getopt_long stores the option index here. */
    int option_index = 0;
    c = getopt_long(argc, argv, "vqP:w:p:i:r:R:x:", long_options, &option_index);
    /* Detect the end of the options. */
    if (c == -1) break;

    switch (c) {
      case 0:
        if (strcmp(long_options[option_index].name, "selftest") == 0) {
          opts->selftest = true;
        }
        break;

      case 'v': opts->verbosity++; break;
      case 'q': opts->verbosity = 0; break;
      case 'P': preset = strdup(optarg); break;
      case 'w': width = strdup(optarg); break;
      case 'p': poly = strdup(optarg); break;
      case 'i': init = strdup(optarg); break;
      case 'r': refin = strdup(optarg); break;
      case 'R': refout = strdup(optarg); break;
      case 'x': xorout = strdup(optarg); break;

      case '?':
        /* getopt_long already printed an error message. */
        break;

      default:
        abort();
    }
  }

  /* Print any remaining command line arguments (not options). */
  if (optind < argc) {
    printf("non-option ARGV-elements: ");
    while (optind < argc)
      printf("%s ", argv[optind++]);
    putchar('\n');
  }

  if (width != NULL) opts->params.width = cmdline_parse_width(width);
  if (opts->params.width) {
    if (poly != NULL) opts->params.poly = cmdline_parse_param("poly", opts->params.width, poly);
    if (init != NULL) opts->params.init = cmdline_parse_param("init", opts->params.width, init);
    if (refin != NULL) opts->params.refin = cmdline_parse_bool("refin", refin);
    if (refout != NULL) opts->params.refout = cmdline_parse_bool("refin", refout);
    if (xorout != NULL) opts->params.xorout = cmdline_parse_param("xorout", opts->params.width, xorout);
  }


  free(preset);
  free(width);
  free(poly);
  free(init);
  free(refin);
  free(refout);
  free(xorout);
}

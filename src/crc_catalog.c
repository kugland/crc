/* THIS FILE WAS AUTOMATICALLY GENERATED. DO NOT EDIT */

#include <stdbool.h>
#include <stddef.h>

#include "crc_catalog.h"
#include "crc_parameters.h"

const crc_parameters_t crc_catalog[] = {
  {
    /* width   = */ 3,
    /* names   = */ { "crc3-gsm", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x3ull,
    /* init    = */ 0x0ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x7ull,
    /* check   = */ 0x4ull,
    /* residue = */ 0x2ull,
  },
  {
    /* width   = */ 3,
    /* names   = */ { "crc3-rohc", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x3ull,
    /* init    = */ 0x7ull,
    /* refin   = */ true,
    /* refout  = */ true,
    /* xorout  = */ 0x0ull,
    /* check   = */ 0x6ull,
    /* residue = */ 0x0ull,
  },
  {
    /* width   = */ 4,
    /* names   = */ { "crc4-g704", "crc4-itu", NULL, NULL, NULL, NULL },
    /* poly    = */ 0x3ull,
    /* init    = */ 0x0ull,
    /* refin   = */ true,
    /* refout  = */ true,
    /* xorout  = */ 0x0ull,
    /* check   = */ 0x7ull,
    /* residue = */ 0x0ull,
  },
  {
    /* width   = */ 4,
    /* names   = */ { "crc4-interlaken", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x3ull,
    /* init    = */ 0xfull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0xfull,
    /* check   = */ 0xbull,
    /* residue = */ 0x2ull,
  },
  {
    /* width   = */ 5,
    /* names   = */ { "crc5-epc-c1g2", "crc5-epc", NULL, NULL, NULL, NULL },
    /* poly    = */ 0x09ull,
    /* init    = */ 0x09ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x00ull,
    /* check   = */ 0x00ull,
    /* residue = */ 0x00ull,
  },
  {
    /* width   = */ 5,
    /* names   = */ { "crc5-g704", "crc5-itu", NULL, NULL, NULL, NULL },
    /* poly    = */ 0x15ull,
    /* init    = */ 0x00ull,
    /* refin   = */ true,
    /* refout  = */ true,
    /* xorout  = */ 0x00ull,
    /* check   = */ 0x07ull,
    /* residue = */ 0x00ull,
  },
  {
    /* width   = */ 5,
    /* names   = */ { "crc5-usb", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x05ull,
    /* init    = */ 0x1full,
    /* refin   = */ true,
    /* refout  = */ true,
    /* xorout  = */ 0x1full,
    /* check   = */ 0x19ull,
    /* residue = */ 0x06ull,
  },
  {
    /* width   = */ 6,
    /* names   = */ { "crc6-cdma2000-a", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x27ull,
    /* init    = */ 0x3full,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x00ull,
    /* check   = */ 0x0dull,
    /* residue = */ 0x00ull,
  },
  {
    /* width   = */ 6,
    /* names   = */ { "crc6-cdma2000-b", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x07ull,
    /* init    = */ 0x3full,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x00ull,
    /* check   = */ 0x3bull,
    /* residue = */ 0x00ull,
  },
  {
    /* width   = */ 6,
    /* names   = */ { "crc6-darc", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x19ull,
    /* init    = */ 0x00ull,
    /* refin   = */ true,
    /* refout  = */ true,
    /* xorout  = */ 0x00ull,
    /* check   = */ 0x26ull,
    /* residue = */ 0x00ull,
  },
  {
    /* width   = */ 6,
    /* names   = */ { "crc6-g704", "crc6-itu", NULL, NULL, NULL, NULL },
    /* poly    = */ 0x03ull,
    /* init    = */ 0x00ull,
    /* refin   = */ true,
    /* refout  = */ true,
    /* xorout  = */ 0x00ull,
    /* check   = */ 0x06ull,
    /* residue = */ 0x00ull,
  },
  {
    /* width   = */ 6,
    /* names   = */ { "crc6-gsm", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x2full,
    /* init    = */ 0x00ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x3full,
    /* check   = */ 0x13ull,
    /* residue = */ 0x3aull,
  },
  {
    /* width   = */ 7,
    /* names   = */ { "crc7-mmc", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x09ull,
    /* init    = */ 0x00ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x00ull,
    /* check   = */ 0x75ull,
    /* residue = */ 0x00ull,
  },
  {
    /* width   = */ 7,
    /* names   = */ { "crc7-rohc", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x4full,
    /* init    = */ 0x7full,
    /* refin   = */ true,
    /* refout  = */ true,
    /* xorout  = */ 0x00ull,
    /* check   = */ 0x53ull,
    /* residue = */ 0x00ull,
  },
  {
    /* width   = */ 7,
    /* names   = */ { "crc7-umts", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x45ull,
    /* init    = */ 0x00ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x00ull,
    /* check   = */ 0x61ull,
    /* residue = */ 0x00ull,
  },
  {
    /* width   = */ 8,
    /* names   = */ { "crc8-autosar", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x2full,
    /* init    = */ 0xffull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0xffull,
    /* check   = */ 0xdfull,
    /* residue = */ 0x42ull,
  },
  {
    /* width   = */ 8,
    /* names   = */ { "crc8-bluetooth", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0xa7ull,
    /* init    = */ 0x00ull,
    /* refin   = */ true,
    /* refout  = */ true,
    /* xorout  = */ 0x00ull,
    /* check   = */ 0x26ull,
    /* residue = */ 0x00ull,
  },
  {
    /* width   = */ 8,
    /* names   = */ { "crc8-cdma2000", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x9bull,
    /* init    = */ 0xffull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x00ull,
    /* check   = */ 0xdaull,
    /* residue = */ 0x00ull,
  },
  {
    /* width   = */ 8,
    /* names   = */ { "crc8-darc", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x39ull,
    /* init    = */ 0x00ull,
    /* refin   = */ true,
    /* refout  = */ true,
    /* xorout  = */ 0x00ull,
    /* check   = */ 0x15ull,
    /* residue = */ 0x00ull,
  },
  {
    /* width   = */ 8,
    /* names   = */ { "crc8-dvb-s2", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0xd5ull,
    /* init    = */ 0x00ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x00ull,
    /* check   = */ 0xbcull,
    /* residue = */ 0x00ull,
  },
  {
    /* width   = */ 8,
    /* names   = */ { "crc8-gsm-a", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x1dull,
    /* init    = */ 0x00ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x00ull,
    /* check   = */ 0x37ull,
    /* residue = */ 0x00ull,
  },
  {
    /* width   = */ 8,
    /* names   = */ { "crc8-gsm-b", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x49ull,
    /* init    = */ 0x00ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0xffull,
    /* check   = */ 0x94ull,
    /* residue = */ 0x53ull,
  },
  {
    /* width   = */ 8,
    /* names   = */ { "crc8-i432.1", "crc8-itu", NULL, NULL, NULL, NULL },
    /* poly    = */ 0x07ull,
    /* init    = */ 0x00ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x55ull,
    /* check   = */ 0xa1ull,
    /* residue = */ 0xacull,
  },
  {
    /* width   = */ 8,
    /* names   = */ { "crc8-icode", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x1dull,
    /* init    = */ 0xfdull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x00ull,
    /* check   = */ 0x7eull,
    /* residue = */ 0x00ull,
  },
  {
    /* width   = */ 8,
    /* names   = */ { "crc8-lte", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x9bull,
    /* init    = */ 0x00ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x00ull,
    /* check   = */ 0xeaull,
    /* residue = */ 0x00ull,
  },
  {
    /* width   = */ 8,
    /* names   = */ { "crc8-maxim-dow", "crc8-maxim", "crc8-dow", NULL, NULL, NULL },
    /* poly    = */ 0x31ull,
    /* init    = */ 0x00ull,
    /* refin   = */ true,
    /* refout  = */ true,
    /* xorout  = */ 0x00ull,
    /* check   = */ 0xa1ull,
    /* residue = */ 0x00ull,
  },
  {
    /* width   = */ 8,
    /* names   = */ { "crc8-mifare-mad", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x1dull,
    /* init    = */ 0xc7ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x00ull,
    /* check   = */ 0x99ull,
    /* residue = */ 0x00ull,
  },
  {
    /* width   = */ 8,
    /* names   = */ { "crc8-nrsc5", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x31ull,
    /* init    = */ 0xffull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x00ull,
    /* check   = */ 0xf7ull,
    /* residue = */ 0x00ull,
  },
  {
    /* width   = */ 8,
    /* names   = */ { "crc8-opensafety", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x2full,
    /* init    = */ 0x00ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x00ull,
    /* check   = */ 0x3eull,
    /* residue = */ 0x00ull,
  },
  {
    /* width   = */ 8,
    /* names   = */ { "crc8-rohc", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x07ull,
    /* init    = */ 0xffull,
    /* refin   = */ true,
    /* refout  = */ true,
    /* xorout  = */ 0x00ull,
    /* check   = */ 0xd0ull,
    /* residue = */ 0x00ull,
  },
  {
    /* width   = */ 8,
    /* names   = */ { "crc8-sae-j1850", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x1dull,
    /* init    = */ 0xffull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0xffull,
    /* check   = */ 0x4bull,
    /* residue = */ 0xc4ull,
  },
  {
    /* width   = */ 8,
    /* names   = */ { "crc8-smbus", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x07ull,
    /* init    = */ 0x00ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x00ull,
    /* check   = */ 0xf4ull,
    /* residue = */ 0x00ull,
  },
  {
    /* width   = */ 8,
    /* names   = */ { "crc8-tech3250", "crc8-aes", "crc8-ebu", NULL, NULL, NULL },
    /* poly    = */ 0x1dull,
    /* init    = */ 0xffull,
    /* refin   = */ true,
    /* refout  = */ true,
    /* xorout  = */ 0x00ull,
    /* check   = */ 0x97ull,
    /* residue = */ 0x00ull,
  },
  {
    /* width   = */ 8,
    /* names   = */ { "crc8-wcdma", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x9bull,
    /* init    = */ 0x00ull,
    /* refin   = */ true,
    /* refout  = */ true,
    /* xorout  = */ 0x00ull,
    /* check   = */ 0x25ull,
    /* residue = */ 0x00ull,
  },
  {
    /* width   = */ 10,
    /* names   = */ { "crc10-atm", "crc10-i610", NULL, NULL, NULL, NULL },
    /* poly    = */ 0x233ull,
    /* init    = */ 0x000ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x000ull,
    /* check   = */ 0x199ull,
    /* residue = */ 0x000ull,
  },
  {
    /* width   = */ 10,
    /* names   = */ { "crc10-cdma2000", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x3d9ull,
    /* init    = */ 0x3ffull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x000ull,
    /* check   = */ 0x233ull,
    /* residue = */ 0x000ull,
  },
  {
    /* width   = */ 10,
    /* names   = */ { "crc10-gsm", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x175ull,
    /* init    = */ 0x000ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x3ffull,
    /* check   = */ 0x12aull,
    /* residue = */ 0x0c6ull,
  },
  {
    /* width   = */ 11,
    /* names   = */ { "crc11-flexray", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x385ull,
    /* init    = */ 0x01aull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x000ull,
    /* check   = */ 0x5a3ull,
    /* residue = */ 0x000ull,
  },
  {
    /* width   = */ 11,
    /* names   = */ { "crc11-umts", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x307ull,
    /* init    = */ 0x000ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x000ull,
    /* check   = */ 0x061ull,
    /* residue = */ 0x000ull,
  },
  {
    /* width   = */ 12,
    /* names   = */ { "crc12-cdma2000", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0xf13ull,
    /* init    = */ 0xfffull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x000ull,
    /* check   = */ 0xd4dull,
    /* residue = */ 0x000ull,
  },
  {
    /* width   = */ 12,
    /* names   = */ { "crc12-dect", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x80full,
    /* init    = */ 0x000ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x000ull,
    /* check   = */ 0xf5bull,
    /* residue = */ 0x000ull,
  },
  {
    /* width   = */ 12,
    /* names   = */ { "crc12-gsm", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0xd31ull,
    /* init    = */ 0x000ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0xfffull,
    /* check   = */ 0xb34ull,
    /* residue = */ 0x178ull,
  },
  {
    /* width   = */ 12,
    /* names   = */ { "crc12-umts", "crc12-3gpp", NULL, NULL, NULL, NULL },
    /* poly    = */ 0x80full,
    /* init    = */ 0x000ull,
    /* refin   = */ false,
    /* refout  = */ true,
    /* xorout  = */ 0x000ull,
    /* check   = */ 0xdafull,
    /* residue = */ 0x000ull,
  },
  {
    /* width   = */ 13,
    /* names   = */ { "crc13-bbc", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x1cf5ull,
    /* init    = */ 0x0000ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x0000ull,
    /* check   = */ 0x04faull,
    /* residue = */ 0x0000ull,
  },
  {
    /* width   = */ 14,
    /* names   = */ { "crc14-darc", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x0805ull,
    /* init    = */ 0x0000ull,
    /* refin   = */ true,
    /* refout  = */ true,
    /* xorout  = */ 0x0000ull,
    /* check   = */ 0x082dull,
    /* residue = */ 0x0000ull,
  },
  {
    /* width   = */ 14,
    /* names   = */ { "crc14-gsm", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x202dull,
    /* init    = */ 0x0000ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x3fffull,
    /* check   = */ 0x30aeull,
    /* residue = */ 0x031eull,
  },
  {
    /* width   = */ 15,
    /* names   = */ { "crc15-can", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x4599ull,
    /* init    = */ 0x0000ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x0000ull,
    /* check   = */ 0x059eull,
    /* residue = */ 0x0000ull,
  },
  {
    /* width   = */ 15,
    /* names   = */ { "crc15-mpt1327", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x6815ull,
    /* init    = */ 0x0000ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x0001ull,
    /* check   = */ 0x2566ull,
    /* residue = */ 0x6815ull,
  },
  {
    /* width   = */ 16,
    /* names   = */ { "crc16-arc", "crc16-lha", "crc16-ibm", NULL, NULL, NULL },
    /* poly    = */ 0x8005ull,
    /* init    = */ 0x0000ull,
    /* refin   = */ true,
    /* refout  = */ true,
    /* xorout  = */ 0x0000ull,
    /* check   = */ 0xbb3dull,
    /* residue = */ 0x0000ull,
  },
  {
    /* width   = */ 16,
    /* names   = */ { "crc16-cdma2000", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0xc867ull,
    /* init    = */ 0xffffull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x0000ull,
    /* check   = */ 0x4c06ull,
    /* residue = */ 0x0000ull,
  },
  {
    /* width   = */ 16,
    /* names   = */ { "crc16-cms", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x8005ull,
    /* init    = */ 0xffffull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x0000ull,
    /* check   = */ 0xaee7ull,
    /* residue = */ 0x0000ull,
  },
  {
    /* width   = */ 16,
    /* names   = */ { "crc16-dds-110", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x8005ull,
    /* init    = */ 0x800dull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x0000ull,
    /* check   = */ 0x9ecfull,
    /* residue = */ 0x0000ull,
  },
  {
    /* width   = */ 16,
    /* names   = */ { "crc16-dect-r", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x0589ull,
    /* init    = */ 0x0000ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x0001ull,
    /* check   = */ 0x007eull,
    /* residue = */ 0x0589ull,
  },
  {
    /* width   = */ 16,
    /* names   = */ { "crc16-dect-x", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x0589ull,
    /* init    = */ 0x0000ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x0000ull,
    /* check   = */ 0x007full,
    /* residue = */ 0x0000ull,
  },
  {
    /* width   = */ 16,
    /* names   = */ { "crc16-dnp", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x3d65ull,
    /* init    = */ 0x0000ull,
    /* refin   = */ true,
    /* refout  = */ true,
    /* xorout  = */ 0xffffull,
    /* check   = */ 0xea82ull,
    /* residue = */ 0x66c5ull,
  },
  {
    /* width   = */ 16,
    /* names   = */ { "crc16-en-13757", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x3d65ull,
    /* init    = */ 0x0000ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0xffffull,
    /* check   = */ 0xc2b7ull,
    /* residue = */ 0xa366ull,
  },
  {
    /* width   = */ 16,
    /* names   = */ { "crc16-genibus", "crc16-darc", "crc16-epc", "crc16-epc-c1g2", "crc16-icode", NULL },
    /* poly    = */ 0x1021ull,
    /* init    = */ 0xffffull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0xffffull,
    /* check   = */ 0xd64eull,
    /* residue = */ 0x1d0full,
  },
  {
    /* width   = */ 16,
    /* names   = */ { "crc16-gsm", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x1021ull,
    /* init    = */ 0x0000ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0xffffull,
    /* check   = */ 0xce3cull,
    /* residue = */ 0x1d0full,
  },
  {
    /* width   = */ 16,
    /* names   = */ { "crc16-ibm3740", "crc16-autosar", "crc16-ccitt-false", NULL, NULL, NULL },
    /* poly    = */ 0x1021ull,
    /* init    = */ 0xffffull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x0000ull,
    /* check   = */ 0x29b1ull,
    /* residue = */ 0x0000ull,
  },
  {
    /* width   = */ 16,
    /* names   = */ { "crc16-ibm-sdlc", "crc16-iso-hldc", "crc16-iso-iec-14443-3-b", "crc16-x25", "crc16b", NULL },
    /* poly    = */ 0x1021ull,
    /* init    = */ 0xffffull,
    /* refin   = */ true,
    /* refout  = */ true,
    /* xorout  = */ 0xffffull,
    /* check   = */ 0x906eull,
    /* residue = */ 0xf0b8ull,
  },
  {
    /* width   = */ 16,
    /* names   = */ { "crc16-iso-iec-14443-3-a", "crc16a", NULL, NULL, NULL, NULL },
    /* poly    = */ 0x1021ull,
    /* init    = */ 0xc6c6ull,
    /* refin   = */ true,
    /* refout  = */ true,
    /* xorout  = */ 0x0000ull,
    /* check   = */ 0xbf05ull,
    /* residue = */ 0x0000ull,
  },
  {
    /* width   = */ 16,
    /* names   = */ { "crc16-kermit", "crc16-ccitt", "crc16-ccitt-true", "crc16-v41-lsb", NULL, NULL },
    /* poly    = */ 0x1021ull,
    /* init    = */ 0x0000ull,
    /* refin   = */ true,
    /* refout  = */ true,
    /* xorout  = */ 0x0000ull,
    /* check   = */ 0x2189ull,
    /* residue = */ 0x0000ull,
  },
  {
    /* width   = */ 16,
    /* names   = */ { "crc16-lj1200", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x6f63ull,
    /* init    = */ 0x0000ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x0000ull,
    /* check   = */ 0xbdf4ull,
    /* residue = */ 0x0000ull,
  },
  {
    /* width   = */ 16,
    /* names   = */ { "crc16-maxim-dow", "crc16-maxim", NULL, NULL, NULL, NULL },
    /* poly    = */ 0x8005ull,
    /* init    = */ 0x0000ull,
    /* refin   = */ true,
    /* refout  = */ true,
    /* xorout  = */ 0xffffull,
    /* check   = */ 0x44c2ull,
    /* residue = */ 0xb001ull,
  },
  {
    /* width   = */ 16,
    /* names   = */ { "crc16-mcrf4xx", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x1021ull,
    /* init    = */ 0xffffull,
    /* refin   = */ true,
    /* refout  = */ true,
    /* xorout  = */ 0x0000ull,
    /* check   = */ 0x6f91ull,
    /* residue = */ 0x0000ull,
  },
  {
    /* width   = */ 16,
    /* names   = */ { "crc16-modbus", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x8005ull,
    /* init    = */ 0xffffull,
    /* refin   = */ true,
    /* refout  = */ true,
    /* xorout  = */ 0x0000ull,
    /* check   = */ 0x4b37ull,
    /* residue = */ 0x0000ull,
  },
  {
    /* width   = */ 16,
    /* names   = */ { "crc16-nrsc-5", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x080bull,
    /* init    = */ 0xffffull,
    /* refin   = */ true,
    /* refout  = */ true,
    /* xorout  = */ 0x0000ull,
    /* check   = */ 0xa066ull,
    /* residue = */ 0x0000ull,
  },
  {
    /* width   = */ 16,
    /* names   = */ { "crc16-opensafety-a", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x5935ull,
    /* init    = */ 0x0000ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x0000ull,
    /* check   = */ 0x5d38ull,
    /* residue = */ 0x0000ull,
  },
  {
    /* width   = */ 16,
    /* names   = */ { "crc16-opensafety-b", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x755bull,
    /* init    = */ 0x0000ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x0000ull,
    /* check   = */ 0x20feull,
    /* residue = */ 0x0000ull,
  },
  {
    /* width   = */ 16,
    /* names   = */ { "crc16-profibus", "crc16-iec-61158-2", NULL, NULL, NULL, NULL },
    /* poly    = */ 0x1dcfull,
    /* init    = */ 0xffffull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0xffffull,
    /* check   = */ 0xa819ull,
    /* residue = */ 0xe394ull,
  },
  {
    /* width   = */ 16,
    /* names   = */ { "crc16-riello", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x1021ull,
    /* init    = */ 0xb2aaull,
    /* refin   = */ true,
    /* refout  = */ true,
    /* xorout  = */ 0x0000ull,
    /* check   = */ 0x63d0ull,
    /* residue = */ 0x0000ull,
  },
  {
    /* width   = */ 16,
    /* names   = */ { "crc16-spi-fujitsu", "crc16-aug-ccitt", NULL, NULL, NULL, NULL },
    /* poly    = */ 0x1021ull,
    /* init    = */ 0x1d0full,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x0000ull,
    /* check   = */ 0xe5ccull,
    /* residue = */ 0x0000ull,
  },
  {
    /* width   = */ 16,
    /* names   = */ { "crc16-t10-dif", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x8bb7ull,
    /* init    = */ 0x0000ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x0000ull,
    /* check   = */ 0xd0dbull,
    /* residue = */ 0x0000ull,
  },
  {
    /* width   = */ 16,
    /* names   = */ { "crc16-teledisk", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0xa097ull,
    /* init    = */ 0x0000ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x0000ull,
    /* check   = */ 0x0fb3ull,
    /* residue = */ 0x0000ull,
  },
  {
    /* width   = */ 16,
    /* names   = */ { "crc16-tms37157", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x1021ull,
    /* init    = */ 0x89ecull,
    /* refin   = */ true,
    /* refout  = */ true,
    /* xorout  = */ 0x0000ull,
    /* check   = */ 0x26b1ull,
    /* residue = */ 0x0000ull,
  },
  {
    /* width   = */ 16,
    /* names   = */ { "crc16-umts", "crc16-buypass", "crc16-verifone", NULL, NULL, NULL },
    /* poly    = */ 0x8005ull,
    /* init    = */ 0x0000ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x0000ull,
    /* check   = */ 0xfee8ull,
    /* residue = */ 0x0000ull,
  },
  {
    /* width   = */ 16,
    /* names   = */ { "crc16-usb", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x8005ull,
    /* init    = */ 0xffffull,
    /* refin   = */ true,
    /* refout  = */ true,
    /* xorout  = */ 0xffffull,
    /* check   = */ 0xb4c8ull,
    /* residue = */ 0xb001ull,
  },
  {
    /* width   = */ 16,
    /* names   = */ { "crc16-xmodem", "crc16-acorn", "crc16-lte", "crc16-v41-msb", "crc16-zmodem", NULL },
    /* poly    = */ 0x1021ull,
    /* init    = */ 0x0000ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x0000ull,
    /* check   = */ 0x31c3ull,
    /* residue = */ 0x0000ull,
  },
  {
    /* width   = */ 17,
    /* names   = */ { "crc17-can-fd", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x1685bull,
    /* init    = */ 0x00000ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x00000ull,
    /* check   = */ 0x04f03ull,
    /* residue = */ 0x00000ull,
  },
  {
    /* width   = */ 21,
    /* names   = */ { "crc21-can-fd", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x102899ull,
    /* init    = */ 0x000000ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x000000ull,
    /* check   = */ 0x0ed841ull,
    /* residue = */ 0x000000ull,
  },
  {
    /* width   = */ 24,
    /* names   = */ { "crc24-ble", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x00065bull,
    /* init    = */ 0x555555ull,
    /* refin   = */ true,
    /* refout  = */ true,
    /* xorout  = */ 0x000000ull,
    /* check   = */ 0xc25a56ull,
    /* residue = */ 0x000000ull,
  },
  {
    /* width   = */ 24,
    /* names   = */ { "crc24-flexray-a", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x5d6dcbull,
    /* init    = */ 0xfedcbaull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x000000ull,
    /* check   = */ 0x7979bdull,
    /* residue = */ 0x000000ull,
  },
  {
    /* width   = */ 24,
    /* names   = */ { "crc24-flexray-b", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x5d6dcbull,
    /* init    = */ 0xabcdefull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x000000ull,
    /* check   = */ 0x1f23b8ull,
    /* residue = */ 0x000000ull,
  },
  {
    /* width   = */ 24,
    /* names   = */ { "crc24-interlaken", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x328b63ull,
    /* init    = */ 0xffffffull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0xffffffull,
    /* check   = */ 0xb4f3e6ull,
    /* residue = */ 0x144e63ull,
  },
  {
    /* width   = */ 24,
    /* names   = */ { "crc24-lte-a", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x864cfbull,
    /* init    = */ 0x000000ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x000000ull,
    /* check   = */ 0xcde703ull,
    /* residue = */ 0x000000ull,
  },
  {
    /* width   = */ 24,
    /* names   = */ { "crc24-lte-b", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x800063ull,
    /* init    = */ 0x000000ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x000000ull,
    /* check   = */ 0x23ef52ull,
    /* residue = */ 0x000000ull,
  },
  {
    /* width   = */ 24,
    /* names   = */ { "crc24-openpgp", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x864cfbull,
    /* init    = */ 0xb704ceull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x000000ull,
    /* check   = */ 0x21cf02ull,
    /* residue = */ 0x000000ull,
  },
  {
    /* width   = */ 24,
    /* names   = */ { "crc24-os-9", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x800063ull,
    /* init    = */ 0xffffffull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0xffffffull,
    /* check   = */ 0x200fa5ull,
    /* residue = */ 0x800fe3ull,
  },
  {
    /* width   = */ 30,
    /* names   = */ { "crc30-cdma", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x2030b9c7ull,
    /* init    = */ 0x3fffffffull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x3fffffffull,
    /* check   = */ 0x04c34abfull,
    /* residue = */ 0x34efa55aull,
  },
  {
    /* width   = */ 31,
    /* names   = */ { "crc31-philips", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x04c11db7ull,
    /* init    = */ 0x7fffffffull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x7fffffffull,
    /* check   = */ 0x0ce9e46cull,
    /* residue = */ 0x4eaf26f1ull,
  },
  {
    /* width   = */ 32,
    /* names   = */ { "crc32-aixm", "crc32q", NULL, NULL, NULL, NULL },
    /* poly    = */ 0x814141abull,
    /* init    = */ 0x00000000ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x00000000ull,
    /* check   = */ 0x3010bf7full,
    /* residue = */ 0x00000000ull,
  },
  {
    /* width   = */ 32,
    /* names   = */ { "crc32-autosar", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0xf4acfb13ull,
    /* init    = */ 0xffffffffull,
    /* refin   = */ true,
    /* refout  = */ true,
    /* xorout  = */ 0xffffffffull,
    /* check   = */ 0x1697d06aull,
    /* residue = */ 0x904cddbfull,
  },
  {
    /* width   = */ 32,
    /* names   = */ { "crc32-base91-d", "crc32d", NULL, NULL, NULL, NULL },
    /* poly    = */ 0xa833982bull,
    /* init    = */ 0xffffffffull,
    /* refin   = */ true,
    /* refout  = */ true,
    /* xorout  = */ 0xffffffffull,
    /* check   = */ 0x87315576ull,
    /* residue = */ 0x45270551ull,
  },
  {
    /* width   = */ 32,
    /* names   = */ { "crc32-bzip2", "crc32-aal5", "crc32-dect-b", "crc32b", NULL, NULL },
    /* poly    = */ 0x04c11db7ull,
    /* init    = */ 0xffffffffull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0xffffffffull,
    /* check   = */ 0xfc891918ull,
    /* residue = */ 0xc704dd7bull,
  },
  {
    /* width   = */ 32,
    /* names   = */ { "crc32-cdrom-edc", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x8001801bull,
    /* init    = */ 0x00000000ull,
    /* refin   = */ true,
    /* refout  = */ true,
    /* xorout  = */ 0x00000000ull,
    /* check   = */ 0x6ec2edc4ull,
    /* residue = */ 0x00000000ull,
  },
  {
    /* width   = */ 32,
    /* names   = */ { "crc32-cksum", "crc32-posix", NULL, NULL, NULL, NULL },
    /* poly    = */ 0x04c11db7ull,
    /* init    = */ 0x00000000ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0xffffffffull,
    /* check   = */ 0x765e7680ull,
    /* residue = */ 0xc704dd7bull,
  },
  {
    /* width   = */ 32,
    /* names   = */ { "crc32-iscsi", "crc32-base91-c", "crc32-castagnoli", "crc32-interlaken", "crc32c", NULL },
    /* poly    = */ 0x1edc6f41ull,
    /* init    = */ 0xffffffffull,
    /* refin   = */ true,
    /* refout  = */ true,
    /* xorout  = */ 0xffffffffull,
    /* check   = */ 0xe3069283ull,
    /* residue = */ 0xb798b438ull,
  },
  {
    /* width   = */ 32,
    /* names   = */ { "crc32-iso-hdlc", "crc32-adccp", "crc32-v42", "crc32-xz", "crc32-pkzip", NULL },
    /* poly    = */ 0x04c11db7ull,
    /* init    = */ 0xffffffffull,
    /* refin   = */ true,
    /* refout  = */ true,
    /* xorout  = */ 0xffffffffull,
    /* check   = */ 0xcbf43926ull,
    /* residue = */ 0xdebb20e3ull,
  },
  {
    /* width   = */ 32,
    /* names   = */ { "crc32-jamcrc", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x04c11db7ull,
    /* init    = */ 0xffffffffull,
    /* refin   = */ true,
    /* refout  = */ true,
    /* xorout  = */ 0x00000000ull,
    /* check   = */ 0x340bc6d9ull,
    /* residue = */ 0x00000000ull,
  },
  {
    /* width   = */ 32,
    /* names   = */ { "crc32-mpeg2", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x04c11db7ull,
    /* init    = */ 0xffffffffull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x00000000ull,
    /* check   = */ 0x0376e6e7ull,
    /* residue = */ 0x00000000ull,
  },
  {
    /* width   = */ 32,
    /* names   = */ { "crc32-xfer", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x000000afull,
    /* init    = */ 0x00000000ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x00000000ull,
    /* check   = */ 0xbd0be338ull,
    /* residue = */ 0x00000000ull,
  },
  {
    /* width   = */ 40,
    /* names   = */ { "crc40-gsm", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x0004820009ull,
    /* init    = */ 0x0000000000ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0xffffffffffull,
    /* check   = */ 0xd4164fc646ull,
    /* residue = */ 0xc4ff8071ffull,
  },
  {
    /* width   = */ 64,
    /* names   = */ { "crc64-ecma-182", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x42f0e1eba9ea3693ull,
    /* init    = */ 0x0000000000000000ull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0x0000000000000000ull,
    /* check   = */ 0x6c40df5f0b497347ull,
    /* residue = */ 0x0000000000000000ull,
  },
  {
    /* width   = */ 64,
    /* names   = */ { "crc64-go-iso", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x000000000000001bull,
    /* init    = */ 0xffffffffffffffffull,
    /* refin   = */ true,
    /* refout  = */ true,
    /* xorout  = */ 0xffffffffffffffffull,
    /* check   = */ 0xb90956c775a41001ull,
    /* residue = */ 0x5300000000000000ull,
  },
  {
    /* width   = */ 64,
    /* names   = */ { "crc64-we", NULL, NULL, NULL, NULL, NULL },
    /* poly    = */ 0x42f0e1eba9ea3693ull,
    /* init    = */ 0xffffffffffffffffull,
    /* refin   = */ false,
    /* refout  = */ false,
    /* xorout  = */ 0xffffffffffffffffull,
    /* check   = */ 0x62ec59e3f1a4f00aull,
    /* residue = */ 0xfcacbebd5931a992ull,
  },
  {
    /* width   = */ 64,
    /* names   = */ { "crc64-xz", "crc64-go-ecma", NULL, NULL, NULL, NULL },
    /* poly    = */ 0x42f0e1eba9ea3693ull,
    /* init    = */ 0xffffffffffffffffull,
    /* refin   = */ true,
    /* refout  = */ true,
    /* xorout  = */ 0xffffffffffffffffull,
    /* check   = */ 0x995dc9bbdf1939faull,
    /* residue = */ 0x49958c9abd7d353full,
  },
  { 0, NULL, 0ull, 0ull, false, false, 0ull, 0ull, 0ull }
};

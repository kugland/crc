# Validate input (requires gawk -M --non-decimal-data)
$1 > 64                 { error("width", NR, $1,  "should be <= 64") }
!$2                     { error("name0", NR, "\""$2"\"", "shouldn't be empty") }
$7 >= (2 ^ $1)          { error("poly", NR, $7, sprintf("should be < 0x%x", 2^$1)) }
$7 % 2 == 0             { error("poly", NR, $7, "should be odd") }
$8 >= (2^$1)            { error("init", NR, $8, sprintf("should be < 0x%x", 2^$1)) }
$9 !~ /^(true|false)$/  { error("refin", NR, $9, "should be either true or false") }
$10 !~ /^(true|false)$/ { error("refout", NR, $10, "should be either true or false") }
$11 >= (2^$1)           { error("xorout", NR, $11, sprintf("should be < 0x%x", 2^$1)) }
$12 >= (2^$1)           { error("check", NR, $12, sprintf("should be < 0x%x", 2^$1)) }
$13 >= (2^$1)           { error("residue", NR, $13, sprintf("should be < 0x%x", 2^$1)) }

BEGIN                    { FS=","
                          print "/* THIS FILE WAS AUTOMATICALLY GENERATED. DO NOT EDIT */"
                          print ""
                          print "#include <stdbool.h>"
                          print "#include <stddef.h>"
                          print ""
                          print "#include \"crc_catalog.h\""
                          print "#include \"crc_parameters.h\""
                          print ""
                          print "const crc_parameters_t crc_catalog[] = {" }
                        { print "  {"
                          print "    /* width   = */ " $1 ","
                          printf "    /* names   = */ { " }
$2                      { printf "\""$2"\"" }                       { printf ", " }
$3                      { printf "\""$3"\"" } !$3 { printf "NULL" } { printf ", " }
$4                      { printf "\""$4"\"" } !$4 { printf "NULL" } { printf ", " }
$5                      { printf "\""$5"\"" } !$5 { printf "NULL" } { printf ", " }
$6                      { printf "\""$6"\"" } !$6 { printf "NULL" } { print ", NULL }," }
                        { print "    /* poly    = */ " $7 "ull,"
                          print "    /* init    = */ " $8 "ull,"
                          print "    /* refin   = */ " $9 ","
                          print "    /* refout  = */ " $10 ","
                          print "    /* xorout  = */ " $11 "ull,"
                          print "    /* check   = */ " $12 "ull,"
                          print "    /* residue = */ " $13 "ull,"
                          print "  }," }
END                     { print "  { 0, NULL, 0ull, 0ull, false, false, 0ull, 0ull, 0ull }"
                          print "};" }

function error(param, line, value, reason) {
  print "Invalid value on line "line": "param" = "value", "reason > "/dev/stderr";
  exit 1
}

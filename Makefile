CC := gcc
ifeq ($(DEBUG),1)
CFLAGS := -std=c11 -g
else
CFLAGS := -std=c11 -O2 -march=native -fPIC -fwhole-program -flto -DNDEBUG
endif
ifndef DESTDIR
DESTDIR := /usr/local/bin
endif

CRC_SRC := $(wildcard src/*.c)
CRC_HDR := $(wildcard src/*.h)

all: build/crc

install: all test
	strip build/crc
	install -m755 -oroot -groot build/crc $(DESTDIR)/crc

test: build/crc
	./build/crc --test

.DELETE_ON_ERROR:

build/crc: $(CRC_SRC) $(CRC_HDR)
	test -d build || mkdir build
	$(CC) $(CFLAGS) -o $@ $(CRC_MAIN) $(CRC_SRC)

src/crc_catalog.c: catalog/crc_catalog.csv
	gawk -M --non-decimal-data -f catalog/parse_crc_catalog.awk < $< >$@

clean:
	-rm build/crc

CC := gcc
ifeq ($(DEBUG),1)
CFLAGS := -std=gnu11 -g
else
CFLAGS := -std=gnu11 -O2 -march=native -fPIC -DNDEBUG
endif
ifndef DESTDIR
DESTDIR := /usr/local/bin
endif

CRC_SRC := $(wildcard src/*.c)

#.DEFAULT_GOAL: all

all: build/crc

install: all test
	strip build/crc
	install -m755 -oroot -groot build/crc $(DESTDIR)/crc

test: build/crc
	./build/crc --test

.DELETE_ON_ERROR:

build/crc: $(CRC_SRC:src/%.c=build/%.o)
	$(CC) $(CFLAGS) -o $@ $^

build/%.o: src/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

src/crc_catalog.c: catalog/crc_catalog.csv
	gawk -M --non-decimal-data -f catalog/parse_crc_catalog.awk < $< >$@

clean:
	-rm build/crc
	-rm build/*.o
	-rm build/*.d

build/%.d: src/%.c
	@set -e; rm -f $@; \
  	$(CC) -M $(CPPFLAGS) $< > $@.$$$$; \
    sed 's,\($*\)\.o[ :]*,build/\1.o $@ : ,g' < $@.$$$$ > $@; \
    rm -f $@.$$$$

ifneq ($(MAKECMDGOALS),clean)
include $(CRC_SRC:src/%.c=build/%.d)
endif

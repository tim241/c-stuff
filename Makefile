CC=gcc
CFLAGS=-O3 -march=native -mtune=native

bin/%: src/%.c
	@[ ! -d bin ] && mkdir bin
	$(CC) -o $@ $< $(CFLAGS)

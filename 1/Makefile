RUN      = run_aoc1_1 run_aoc1_2
CFLAGS   = -ansi -pedantic -O2 -std=c17 -Wall
VALGRIND = /usr/bin/valgrind

all: $(RUN)

help:
	@echo Targets: all, clean

clean:
	@rm -fv *.o $(RUN)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

run_aoc1_1: aoc1_1.o
	$(CC) $(CFLAGS) $^ -o $@
	$(VALGRIND) ./$@

run_aoc1_2: aoc1_2.o
	$(CC) $(CFLAGS) $^ -o $@
	$(VALGRIND) ./$@

.PHONY: all clean
include $(wildcard *.d)

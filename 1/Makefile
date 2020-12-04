RUN      = run_day1s1 run_day1s2
CFLAGS   = -ansi -pedantic -O2 -std=c17 -Wall
VALGRIND = /usr/bin/valgrind

all: $(RUN)

help:
	@echo Targets: all, clean

clean:
	@rm -fv *.o $(RUN)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

run_day1s1: day1s1.o
	$(CC) $(CFLAGS) $^ -o $@
	$(VALGRIND) ./$@

run_day1s2: day1s2.o
	$(CC) $(CFLAGS) $^ -o $@
	$(VALGRIND) ./$@

.PHONY: all clean
include $(wildcard *.d)

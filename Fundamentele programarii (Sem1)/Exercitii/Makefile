SRCS=$(wildcard *.c)
CC=gcc
PROGS=$(patsubst %.c, %, $(SRCS))
CFLAGS=-Wall -lm

all: $(PROGS)

clean:
	rm -f $(PROGS)


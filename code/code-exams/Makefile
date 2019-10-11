CC = gcc
CFLAGS = -Wall -std=c99
INFILES = $(wildcard *.c)
OUTIFLES = $(basename $(INFILES))

all: unknown options

unknown:
	$(CC) $@.c $(CFLAGS) $(LIBS) -o $@

options: 
	$(CC) $@.c $(CFLAGS) $(LIBS) -o $@

clean:
	rm -f $(OUTIFLES)
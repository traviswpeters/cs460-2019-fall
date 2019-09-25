CC = gcc
CFLAGS = -Wall -std=c99

all: procs threads

# --- DEMO CODE ---

procs:
	$(CC) $(CFLAGS) fork_bomb.c -o fb

threads:
	$(CC) $(CFLAGS) threads01.c -o t1 -lpthread # no synchronization...
	$(CC) $(CFLAGS) threads02.c -o t2 -lpthread # pthreads for synchronization

# --- DEMO TOOLS ---

clean:
	rm -f fb t1 t2

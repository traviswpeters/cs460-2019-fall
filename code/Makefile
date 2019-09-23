flags=-Wall

all: procs threads

# --- DEMO CODE ---

procs:
	gcc fork_bomb.c -o fb

threads:
	gcc threads01.c -o t1 -lpthread # no synchronization...
	gcc threads02.c -o t2 -lpthread # pthreads for synchronization

# --- DEMO TOOLS ---

objdump:
	objdump -d t1

clean:
	rm -f fb t1 t2

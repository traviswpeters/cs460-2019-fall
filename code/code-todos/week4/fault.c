// memory management demo code
// s.w. smith, cs58, dartmouth college

// note that the brk/sbrk cases (-3 and -4) give unexpected
// results on OSX... but see "man sbrk" on OSX.

// this code treats addresses as 32 bits......  so buld with -m32
// and -g would let you look at core files more easily!

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

char *global_var = "abcdef";
#define JUMP (8192<<1)
#define HEAPJUMP   0xF0000
#define STACKJUMP  0xF0000


char cstring[100];


void bigstack(void) {
  
  char big_array[STACKJUMP];

  printf("now an address on the stack is:  0x%08x\n", (int) &big_array[0]);

  printf("\n\n Running pmap....\n");
  system(cstring);
  printf("\n\n");
   


}


int
main(int argc, char *argv[]) {
  char c;
  void *text, *data, *heap, *nowhere, *stack, *belowstack;  // pointers
  void *nullpointer;
  void *brk_value;
  void *p1,*p2;
  int i;
  int pid;
  int demo = 0;


  // pull out argument
  if (argc >= 2) {
    if ( ('-' == argv[1][0]) && (c = argv[1][1]) && (isdigit(c)) ) 
      demo = c - '0';  
  }
	
  if (argc < 2) {
    printf("Memory management demo\n");
    printf("-0: tries to read from, then write to, a null pointer address\n");
    printf("-1: tries to read from nowhere address\n");
    printf("-2: tries to read from, then write to, a text address\n");
    printf("-3: tries to read from just before the brk, then from the brk itself\n");
    printf("-4: sees if malloc increases the brk address\n");
    printf("Note that this may give unexpected results on OSX---see man sbrk there.\n");
    printf("-5-7: tries to read from below the stack\n");
    exit(0);
  }


  // note that we initialized demo to 0, an illegal value
  if ( (demo > 7) ) { 
    printf("requires an argument: -0 ... -7\n");
    exit(-1);
  }

  text  =  main;        // the entry of main() is in the text segment
  data  = &global_var;  // the address of global_var is in the data segment
  stack = &text;        // the address of a local var is on the stack
  heap  =  malloc(256); // this is an address in the heap 
  nullpointer = NULL;

  if (NULL == heap)     // ALWAYS test for errors!
    exit(-1);

  nowhere = heap + HEAPJUMP; // we hope this is past the the heap,
                            // but not far enough to get into the
                            // libraries or stack...

  belowstack = stack - STACKJUMP;

  pid = getpid();
  sprintf(cstring,"pmap -x %d\n", pid);
  printf("\n\n Running pmap....\n");
  system(cstring);
  printf("\n\n");

  brk_value = sbrk(0);


  printf("an address in the text segment: 0x%08x\n", (int) text);
  printf("an address in the data segment: 0x%08x\n", (int) data);
  printf("an address in the heap        : 0x%08x\n", (int) heap);
  printf("an address out in nowhere     : 0x%08x\n", (int) nowhere);
  printf("an address on the stack       : 0x%08x\n", (int) stack);
  printf("an address below the stack    : 0x%08x\n", (int) belowstack);
  printf("the brk                       : 0x%08x\n", (int) brk_value);
  printf("\n\n");

  switch (demo) {
  case 0:
    printf("trying to read from a null pointer...");
    fflush(stdout);
    sleep(2);
    c =  *(char*) nullpointer;   // try reading from this address...
    printf("ok\n");

    printf("trying to write to a null pointer...");
    fflush(stdout);
    sleep(2);
    *(char*) nullpointer = 'A';
    printf("ok\n");
    break;
  case 1:
    printf("trying to write, then, read from the nowhere address...");
    fflush(stdout);
    sleep(2);
    * ((char*) nowhere) = 'a';   // try writing to this address...
    printf("ok\n");
    sleep(2);
    c =  *(char*) nowhere;   // try reading from this address...
    printf("ok\n");
    break;

  case 2:
    printf("trying to read from the text address...");
    fflush(stdout);
    sleep(2);
    c =  *(char*) text;   // try reading from this address...
    printf("ok\n");

    printf("trying to write to the text address...");
    fflush(stdout);
    sleep(2);
    *(char*) text = 'A';
    printf("ok\n");
    break;

  case 3: 
    p2 = sbrk(0);  // lowest address after heap...
    p1 = p2 - 1;


    printf("the break is 0x%08x\n", (int) p2);
   
    printf("trying to read from 0x%08x (just before brk)...", (int) p1);
    fflush(stdout);
    sleep(2);
    c =  *(char*) p1;   // try reading from this address...    
    printf("ok\n");
    

    printf("trying to read from 0x%08x (the brk itself)...", (int) p2);
    fflush(stdout);
    sleep(2);
    c =  *(char*) p2;   // try reading from this address...    
    printf("ok\n");
    break;

 case 4:
    printf(  "the break is now 0x%08x\n", (int) sbrk(0));
    for (i = 0; i < 32; i++) {
      printf("malloc'ing 0x%x bytes...", JUMP);
      fflush(stdout);
      sleep(2);
      p1 = malloc(JUMP); 
      if (NULL == p1) 
	exit(-1);
      printf("got 0x%08x, ",(int)p1);
      printf("the break is now 0x%08x\n", (int) sbrk(0));
    }
    break;

  case 5:
    printf("trying to read from below the stack...0x%08x\n", (int) belowstack);
    printf("(0x%08x bytes below the address of the local variable 'stack')\n", STACKJUMP);

    fflush(stdout);
    sleep(2);
    c =  *(char*) belowstack;   // try reading from this address...
    printf("ok\n");
    break;

  case 6:
    printf("calling a subroutine with a big local array\n");
    fflush(stdout);
    sleep(2);
    bigstack();
    break;


  case 7:
    printf("calling a subroutine with a big local array\n");
    fflush(stdout);
    sleep(2);
    bigstack();
    printf("trying to read from below the stack...0x%08x\n", (int) belowstack);
    printf("(0x%08x bytes below the address of the local variable 'stack')\n", STACKJUMP);

    fflush(stdout);
    sleep(2);
    c =  *(char*) belowstack;   // try reading from this address...
    printf("ok\n");
    break;


  }

  return 0;
}


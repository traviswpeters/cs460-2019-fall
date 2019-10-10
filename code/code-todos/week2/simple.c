
// Remember to compile with the "gcc -lpthread -m32"  options

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

#include <pthread.h>   // for threads




//--------------------------------------------------------

#define ALICE   1
#define BOB     0
#define PLAYERS 2
#define LOOPS   7
#define name(x)  ( (x) ? "     Alice" : "          Bob" )
    

void *childfun(void *vargp) {
  int me = (int)vargp;
  int i;


  for (i = 0; i < LOOPS; i++) {
    printf("%s: hello %d\n", name(me),i);
    sleep(1);
  }

}

int
main(int argc, char *argv[]) {

  pthread_t child1,child2;
  int rc;
  int i;


  // launch kids
  rc = pthread_create(&child1,  // thread data structure to be written
              NULL,     // thread attributes (we'll ignore)
                      childfun, // the function to be run 
                      (void *) ALICE); // the argument to the function

  if (rc) {
    printf("hey, it failed!\n");
    exit(-1);
  }

  rc = pthread_create(&child2,  // thread data structure to be written
              NULL,     // thread attributes (we'll ignore)
                      childfun, // the function to be run 
                      (void *) BOB); // the argument to the function

  if (rc) {
    printf("hey, it failed!\n");
    exit(-1);
  }

  printf("parent: hello!\n");


  // what if we exit now????
  exit(0);

  // now, wait until child exits
  rc = pthread_join(child1,  // thread to wait for
            NULL);   // where to save the rc from pthread_exit(), 
                             // (if we care. for this example, we don't)

  // now, wait until child exits
  rc = pthread_join(child2,  // thread to wait for
            NULL);   // where to save the rc from pthread_exit(), 
                             // (if we care. for this example, we don't)

  return 0;
}
  
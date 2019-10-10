#include <stdio.h>
#include <stdlib.h>


int
main(void) {

  int pid, rc, status;


  pid = getpid();

  printf("I'm process %d, and I'm about to fork\n", pid);
  
  rc  = fork();

  if (0 == rc) {

    pid = getppid();
    printf("Hi, I'm the child, and my parent is %d. \n", pid);
    sleep(10);
    printf("Child says: goodbye!\n");
    exit(-1); 
  }

  pid = rc;
  printf("my child has pid %d\n", pid);
  printf("but i won't collect its error code\n");
  while (1) {}
  return 0;

}

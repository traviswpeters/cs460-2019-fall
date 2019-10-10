#include <stdio.h>

int
main(void) {

  int pid;

  pid = getppid();

  printf("My parent is process %d\n", pid);
  
  return 0;

}

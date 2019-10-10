#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>



main() {
  int rc;

  printf("parent ");
  rc = fork();
  if (0 == rc) {
    printf("child ");
    exit(42);
  } 
  wait(NULL); // for child to die

  sleep(5);   // for the drama!

  printf("\n");
}

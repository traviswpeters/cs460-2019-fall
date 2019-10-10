#include <signal.h>  // for the kill() call
#include <unistd.h>  // for fork()
#include <stdio.h>   // printf



int main(int argc, char *argv[]) {

  int pid, rc;

  printf("Hi, I'm the parent and I am forking\n");

  pid = fork();

  if (0 == pid) {
    int i = 0
    ;

    while(1) {
      printf("Hi, I'm the child and I shall run forever. i = %d\n", i);
      i++;
      sleep(1);
    }
  }

  if (1 == argc) {
    printf("I'm the parent.  Since you specified no arg, I will exit now!\n");
    return 0;
  }

  printf("I'm the parent, and I shall sleep for a while\n");
  sleep(10);
  
  

  printf("I'm the parent and I just woke up.  I will now kill the child\n");
  
  rc = kill(pid,SIGTERM);
  printf("rc = %d\n", rc);

  return 0;

}

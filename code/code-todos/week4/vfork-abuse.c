// vfork abuse code
// s.w. smith, cs58, dartmouth college


#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>


int global = 0;


void sub1(void) {

  int value = 0;
  int do_vfork = 1;
  int pid;

  int i;
  
  printf("Hi, I'm the parent %d. Local = %d, global = %d\n", getpid(), value, global);

  printf("vforking a child...\n");
  pid = vfork();

  if (0 == pid) {
    printf("Hi, I'm the child %d. I'm changing both variables\n", getpid());
    value++;
    global++;
    printf("Dramatic pause...\n");
    sleep(5);
    printf("child says goodbye!\n");
    return;
  }


  printf("Hi, I'm the parent again. Local  = %d, global = %d\n", value, global);

}



void sub2(void) {

  int array[512];
  int i;
  for (i = 0; i < 512; i++)
    array[i] = 0;

}

int
main(int argc, char *argv[]) {

  printf("yahoo---process %d calling sub1\n", getpid());
  sub1();
  printf("yahoo---process %d back from sub1, calling sub2 after a dramatic pause\n", getpid());
  sleep(2); 
  sub2();
  printf("yahoo---process %d back from sub2, which scrubbed the stack\n", getpid());


  printf("bye!\n");

  return 0;

}

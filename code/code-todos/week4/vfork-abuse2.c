// vfork abuse code
// (cleaner version)
// s.w. smith, cs58, dartmouth college


#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>


int global = 0;
int i_am_child = 0;


void sub1(void) {

  int value = 0;
  int do_vfork = 1;
  int pid;

  int i;
  
  printf("Hi, I'm the parent, in sub1. %d. Local = %d, global = %d\n", getpid(), value, global);


  printf("In sub1, I'm vforking a child...\n");
  pid = vfork();

  if (0 == pid) {
    i_am_child = 1;
    printf("Hi, I'm the child %d, in sub1. I'm incrementing both variables\n", getpid());
    value++;
    global++;
    return;
  }
  i_am_child = 0;

  printf("Hi, I'm the parent again. Local  = %d, global = %d\n", value, global);
  printf("Now returning from sub1\n");

}



void sub2(void) {

  int array[512];
  int i;
  for (i = 0; i < 512; i++)
    array[i] = 0;

}

int
main(int argc, char *argv[]) {

  printf("the parent process %d is about to call sub1\n", getpid());
  sub1();

  if (i_am_child) {
    printf("child is back from sub1\n");
    printf("so.. child calls sub2 to scrub space where the sub1 stack frame was\n");
    sub2();
    printf("child back from sub2; now exits\n");
    exit(0);
  }

  printf("parent back in main; now returning\n");

  return 0;

}

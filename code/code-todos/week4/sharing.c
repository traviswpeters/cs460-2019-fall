// more memory management demo code
// s.w. smith, cs58, dartmouth college

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <fcntl.h>

#define LOOPS 20



char cstring[100];


int
main(int argc, char *argv[]) {
  char c;
  void *p1,*p2;
  int fd;
  int i;
  int pid;
  int demo = 0;
  int rc;
  int flags;

  // pull out argument
  if (argc >= 2) {
    if ( ('-' == argv[1][0]) && (c = argv[1][1]) && (isdigit(c)) ) 
      demo = c - '0';  
  }
    
  if (argc < 2) {
    printf("-0: MAP_ANON | MAP_SHARED mappping\n");
    printf("-1: MAP_ANON | MAP_PRIVATE mappping\n");
    exit(0);
  }




  switch (demo) {
  case 0:
    flags = MAP_ANON | MAP_SHARED;
    break;
  default:
    flags = MAP_ANON | MAP_PRIVATE;
  }

  pid = getpid();
  sprintf(cstring,"pmap -x %d\n", pid);
  printf("\n\n Running pmap....\n");
  system(cstring);
  printf("\n\n");

  p1 = mmap(NULL, 0x8, PROT_READ | PROT_WRITE , flags, -1, 0); 


  printf("mmap 0x%08x returned 0x%p\n",(int) 0, p1);


  printf("\n\n Running pmap....\n");
  system(cstring);
  printf("\n\n");

  printf("storing 1 at 0x%p\n", p1);
  fflush(stdout);
  * (int *)p1 = 1;
  
  if (0 == fork()) {
    int i;
    for (i = 0; i < LOOPS; i++) {
      printf("child sees %d at 0x%p\n", *(int *)p1, p1);
      fflush(stdout);
      sleep(1);
    }
    exit(0);
  }

  for (i = 0; i < LOOPS; i++) {

    printf("parent increments value at 0x%p\n", p1);
    fflush(stdout);
    * (int *)p1 = 1 + ( * (int *)p1);
    sleep(1);
  }


 return 0;
}


// memory management demo code
// s.w. smith, cs58, dartmouth college, october 2008
// some fixes Oct 2009
// and Oct 2013

// WARNING: As of Oct 2013, I can only get this working on Solaris...

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <fcntl.h>




char cstring[100];



int
main(int argc, char *argv[]) {
  char c;
  void *nullpointer;
  void *p1,*p2;
  int fd;
  int i;
  int pid;
  int demo = 0;
  int rc;

  // pull out argument
  if (argc >= 2) {
    if ( ('-' == argv[1][0]) && (c = argv[1][1]) && (isdigit(c)) ) 
      demo = c - '0';  
  }
    
  if (argc < 2) {
    printf("-0: tries to read from, then write to, a null pointer address\n");
    printf("-1: tries to read from, then write to, a null pointer address\n");
    printf("-2: tries to read from, then write to, a null pointer address\n");
    exit(0);
  }


  // note that we initialized demo to 0, an illegal value
  if ( (demo > 7) ) { 
    printf("requires an argument: -0 ... -7\n");
    exit(-1);
  }

  nullpointer = NULL;

  pid = getpid();
  sprintf(cstring,"pmap -x %d\n", pid);
  printf("\n\n Running pmap....\n");
  system(cstring);
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
    fd = open("/dev/zero",O_RDONLY); 
    printf("opening /dev/zero returned %d\n", fd);
    p1 = mmap(NULL, 0x2000, PROT_READ | PROT_WRITE | PROT_EXEC, MAP_PRIVATE|MAP_FIXED, fd, 0);
    printf("mmap 0x%08x returned 0x%08X\n",0 , (int) p1);




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
  case 2:
 fd = open("/dev/zero",O_RDONLY); 
    printf("opening /dev/zero returned %d\n", fd);
    p1 = mmap(NULL, 0x2000, PROT_READ | PROT_WRITE | PROT_EXEC, MAP_PRIVATE|MAP_FIXED, fd, 0);
    printf("mmap 0x%08x returned 0x%08X\n",0 , (int) p1);




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
    printf("\n\n Running pmap....\n");
    system(cstring);
    printf("\n\n");
  }
 return 0;
}


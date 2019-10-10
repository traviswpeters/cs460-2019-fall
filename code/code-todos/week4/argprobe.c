// S.W Smith, CS58, Dartmouth College



#include <stdio.h>
#include <stdlib.h>






extern char **environ;


char cstring[100];

int main(int argc, char *argv[]) {


  int localv, pid;
  void *stackaddr, *argVaddr, *argaddr, *envVaddr, *envaddr;

  pid = getpid();
  sprintf(cstring,"pmap -x %d\n", pid);
  printf("\n\n Running pmap....\n");
  system(cstring);

  stackaddr = (void *) &localv;
  argVaddr  = (void *) argv;
  argaddr   = (void *) argv[0];
  envVaddr  = (void *) environ;
  envaddr   = (void *) getenv("OSTYPE");

  printf("a stack address     = 0x%p\n", stackaddr);
  printf("the argv address    = 0x%p\n", argVaddr);
  printf("argv[0]             = 0x%p\n", argaddr);
  if (argaddr) 
    printf("  value is [%s]\n", (char *) argaddr);

  printf("the environ address = 0x%p\n",envVaddr);
  printf("getenv(\"OSTYPE\")    = 0x%p\n", envaddr);
  if (envaddr) 
    printf("   value is [%s]\n", (char *) envaddr);


}

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

#define LEN 30

char dest[LEN];

int
main(int argc, char* argv[]) {
  
  pid_t i;
  int n;
  char *src = "there is no dark side of the moon, really";
  void *ptr;

  strncpy(dest, src, LEN);

  i = getpid();

  ptr = malloc(LEN);

  fprintf(stdout, "as a matter of fact, it's all dark\n");

  return 0;
}


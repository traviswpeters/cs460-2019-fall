//s.w. smith cs58, dartmouth college, november 2008

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>





int main(int argc, char *argv[]) {

  int fd, numbytes;

  unsigned int int_wrote, int_read;
  
  int_wrote = 0x12345678;


  if (argc != 2) {
    printf("usage: fr filename\n");
    exit(-1);
  }

  // get filename
  printf("opening %s for writing\n", argv[1]);
  fd = open(argv[1], O_TRUNC | O_CREAT | O_WRONLY);
  if (-1 == fd) {
    printf("open failed\n");
    exit(-1);
  }
  
  
  numbytes = write(fd,&int_wrote,sizeof(unsigned int));

  printf("wrote %d bytes\n", numbytes);

}



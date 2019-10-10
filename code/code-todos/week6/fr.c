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
    printf("usage: frw filename\n");
    exit(-1);
  }

  // get filename
  printf("opening %s for reading\n", argv[1]);
  fd = open(argv[1],  O_RDONLY);
  if (-1 == fd) {
    printf("open failed\n");
    exit(-1);
  }
  
  
  numbytes = read(fd,&int_read,sizeof(unsigned int));

  printf("read %d bytes: 0x%04x\n", numbytes, int_read);

}



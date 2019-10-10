// s.w. smith, cs58, dartmouth college

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>



int
main(int argc, char *argv[]) {


  int fd;
  int delta;
  int foo = 23;
  char *path;


  if (argc < 3) {
    printf("usage: writer filename delta (in Kbytes)\n");
    return -1;
  }


  delta = atoi(argv[2]);
  path  = argv[1];

  delta <<= 10;

  printf("creating %s with initial pad of 0x%x\n", path, delta);



  fd = creat(path ,S_IREAD | S_IWRITE);

  
  lseek(fd,delta,SEEK_SET);

  
  write(fd,&foo,4);

  return 0;


}

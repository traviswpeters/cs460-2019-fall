#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>



int main(int argc, char * argv[]) 
{

  FILE *fp;
  fp=fopen("mystery.txt", "w");
	
  fprintf(fp, "yow \n");

  {
    if(0==fork())
      {
		exit(0);
      }

  }
}

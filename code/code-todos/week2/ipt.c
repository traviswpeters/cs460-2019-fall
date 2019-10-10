// demo code for process and thread interleavings and races
// S.W. Smith, CS58, Dartmouth College, Sept 2014


// Remember to compile with the "gcc -lpthread -m32" options



#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <pthread.h>





#define DEFAULT_KIDS 4
#define MAX 10

int use_threads = 0;

volatile int i;  // global, if threads

// prototypes for helper funs, at the end of the file

void print_name_and_number(int my_count, int num);
int flip_coin(void);  
void consider_interleaving(void);

// for the lock (shh, ignore this for now :)
#  define PTHREAD_ERRORCHECK_MUTEX_INITIALIZER_NP \
  { { 0, 0, 0, PTHREAD_MUTEX_ERRORCHECK_NP, 0, { 0 } } }
pthread_mutex_t lock =  PTHREAD_ERRORCHECK_MUTEX_INITIALIZER_NP;




void *kidfun(void *vargp) {

  int me = (int)vargp;

  
  consider_interleaving();

  i = 0; 

  consider_interleaving();

  while (i < MAX) {

    consider_interleaving();
    
    print_name_and_number(me,i); 

    // pathological i++
    {

      consider_interleaving();

      int tmp = i;
      tmp++;

      consider_interleaving();

      i = tmp;
    }

    
    consider_interleaving();

  }

}





//----------------------------------------
int
main(int argc, char *argv[]){


  int kids = DEFAULT_KIDS;
  int kcount;
  int rc;

  // yes... a slicker way would be to use a union
  int *kid_pids;
  pthread_t *kid_threads;


  // threads or processes?
  if (argc < 2) {
    fprintf(stderr,"must specify t or p\n");
    exit(-1);
  }
  if ('t' == *argv[1]) {
    printf("using threads\n");
    use_threads = 1;
  } else {
    printf("using processes\n");
    use_threads = 0;
  }


  // if there's a third argument, use it as the number of procs 
  if (argc >= 3)
     kids = atoi(argv[2]);
  


  if (use_threads) {
    kid_threads = (pthread_t *)malloc(kids * sizeof(pthread_t));
    if (0 == kid_threads) {
      fprintf(stderr, "malloc failed\n");
      exit(-1);
    }


    for (kcount = 0; kcount < kids; kcount++) {
      
      rc = pthread_create(&kid_threads[kcount], NULL, kidfun, (void *)kcount);
      
      if (rc) {
    printf("hey, it failed!\n");
    exit(-1);
      }

    }

    for (kcount = 0; kcount < kids; kcount ++) {
      pthread_join(kid_threads[kcount], NULL);
    }


    
  } else {
    // process version
    kid_pids    = (int *)malloc(kids * sizeof(int));
    if (0 == kid_pids) {
      fprintf(stderr, "malloc failed\n");
      exit(-1);
    }

    
    for (kcount = 0; kcount < kids; kcount++) {
      rc = fork();

      if (0 == rc) {
    kidfun((void *)kcount);
    exit(0);
      }
      kid_pids[kcount] = rc;
    }

    for (kcount = 0; kcount < kids; kcount ++) {
      waitpid(kid_pids[kcount], NULL, NULL);
    }

  }


  return 0;

}











//---------------------------------------------------
void
print_name_and_number(int my_count, int num) {



  
  int i;

  pthread_mutex_lock(&lock);

  for (i = 0; i < my_count; i++) 
    printf("            ");

  printf("child%d",my_count);
  
  printf(": %d\n",num);

  fflush(stdout);

 pthread_mutex_unlock(&lock);
}




//---------------------------------------------------
int
flip_coin(void) {

  static int  fd;
  static int initialized = 0;
  static int bits_left = 0;
  static unsigned char random_byte;
  int random_bit;

  if (!initialized) {
    
    fd = open("/dev/urandom", O_RDONLY);
    if (fd < 0) {
      fprintf(stderr,"open failed\n");
      exit(-1);
    }

    initialized = 1;
  }

  if (0 == bits_left) {
    if (sizeof(random_byte) != read(fd, &random_byte, sizeof(random_byte))) {
      fprintf(stderr, "read failed\n");
      exit(-1);
    }
    bits_left = 8;
  }

  random_bit = random_byte & 0x01;
  random_byte >>= 1;
  bits_left--;

  return random_bit;

}



//---------------------------------------------------
void consider_interleaving(void) {

  if (flip_coin())  {
    sched_yield();
  }
}


// demo code for locks, semaphores
// S.W. Smith, CS58, Dartmouth College

// Remember to compile with the "gcc -lpthread -m32" options
// also note that the semaphore code here is not supported on OSX

#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <pthread.h>   // for threads
#include <semaphore.h> // for semaphores

#include <unistd.h>

#define STRING_LEN 128
#define KIDS  4
#define VAL   2

#  define PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP \
  { { 0, 0, 0, PTHREAD_MUTEX_RECURSIVE_NP, 0, { 0 } } }
#  define PTHREAD_ERRORCHECK_MUTEX_INITIALIZER_NP \
  { { 0, 0, 0, PTHREAD_MUTEX_ERRORCHECK_NP, 0, { 0 } } }
#  define PTHREAD_ADAPTIVE_MUTEX_INITIALIZER_NP \
  { { 0, 0, 0, PTHREAD_MUTEX_ADAPTIVE_NP, 0, { 0 } } }



char *prefix[KIDS];
pthread_mutex_t lock =  PTHREAD_ERRORCHECK_MUTEX_INITIALIZER_NP;
sem_t sem;
pthread_cond_t cvar = PTHREAD_COND_INITIALIZER; 

int
flip_coin(void) {

  static int  fd;
  static int initialized = 0;
  static int bits_left = 0;
  static unsigned char random_byte;
  int random_bit;

  if (!initialized) {
    
    fd = open("/dev/random", O_RDONLY);
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



//--------------------------------------------------------
void consider_interleaving(void) {
  if (flip_coin())
    sleep(1);
}


  
void init_prefix(void) {

  int i,j;
  char buffer[STRING_LEN];

  for (i = 0; i < KIDS; i++) {

    prefix[i] = (char *)malloc(STRING_LEN);
    
    for (j = 0; j < (i << 2); j++) 
      buffer[j] = '-';
    buffer[j] = 0;

    prefix[i] = malloc(STRING_LEN);
    sprintf(prefix[i],"%d: %s ",i,buffer);
  }

}




void *lockfun(void *vargp) {


  int me = (int) vargp;
  int rc;


  consider_interleaving();

  printf("%s About to acquire lock...\n",prefix[me]);

  rc = pthread_mutex_lock(&lock);
  if (rc) {
    printf("hey, it failed!\n");
    exit(-1);
  }
  printf("%s About to acquire lock AGAIN...\n",prefix[me]);

  rc = pthread_mutex_lock(&lock);
  if (rc) {
    printf("hey, it failed!\n");
    exit(-1);



  }


  printf("%s In critical section\n",prefix[me]);

  sleep(2);

  printf("%s About to release lock...\n",prefix[me]);
  rc = pthread_mutex_unlock(&lock);
  if (rc) {
    printf("hey, it failed!\n");
    exit(-1);
  }

  
  printf("%s exiting.\n",prefix[me]);

  return NULL;
}





//===============================================================

void *semfun(void *vargp) {


  int me = (int) vargp;
  int rc;


  consider_interleaving();

  if (me > 0) {

    printf("%s About to down semaphore...\n",prefix[me]);

    sem_wait(&sem);

    printf("%s Downed it!\n",prefix[me]);

  } else {
    sleep(10);
    printf("%s About to up semaphore...\n",prefix[me]);
    rc = sem_post(&sem);
    if (rc) {
      printf("hey, it failed!\n");
      exit(-1);
    }
  }
  
  printf("%s exiting.\n",prefix[me]);

  return NULL;
}


//===============================================================


void *sigfun(void *vargp) {


  int me = (int) vargp;
  int rc;


  consider_interleaving();


  if (me > 0) {

    consider_interleaving();

    printf("%s About to acquire lock...\n",prefix[me]);

    rc = pthread_mutex_lock(&lock);
    if (rc) {
      printf("hey, it failed!\n");
      exit(-1);
    }

    printf("%s Critical section part 1\n",prefix[me]);
    printf("%s About to wait on cvar\n",prefix[me]);
    pthread_cond_wait(&cvar,&lock);
    printf("%s back from cvar wait\n",prefix[me]);

    printf("%s About to release lock...\n",prefix[me]);
    rc = pthread_mutex_unlock(&lock);
    if (rc) {
      printf("hey, it failed!\n");
      exit(-1);
    }

  } else {
    sleep(10);
    printf("%s About to signal cvar\n",prefix[me]);
    pthread_cond_signal(&cvar);
  }
  
  printf("%s exiting.\n",prefix[me]);

  return NULL;
}


//===============================================================


void *broadfun(void *vargp) {


  int me = (int) vargp;
  int rc;


  consider_interleaving();


  if (me > 0) {

    consider_interleaving();

    printf("%s About to acquire lock...\n",prefix[me]);

    rc = pthread_mutex_lock(&lock);
    if (rc) {
      printf("hey, it failed!\n");
      exit(-1);
    }

    printf("%s Critical section part 1\n",prefix[me]);
    printf("%s About to wait on cvar\n",prefix[me]);
    pthread_cond_wait(&cvar,&lock);
    printf("%s back from cvar wait\n",prefix[me]);

    printf("%s About to release lock...\n",prefix[me]);
    rc = pthread_mutex_unlock(&lock);
    if (rc) {
      printf("hey, it failed!\n");
      exit(-1);
    }

  } else {
    sleep(10);
    printf("%s About to broadcast cvar\n",prefix[me]);
    pthread_cond_broadcast(&cvar);
  }
  
  printf("%s exiting.\n",prefix[me]);

  return NULL;
}





//===============================================================


void *earlyfun(void *vargp) {


  int me = (int) vargp;
  int rc;


  switch (me) {

  case 0:

    printf("%s Upping semaphore\n",prefix[me]);
    rc = sem_post(&sem);
    if (rc) {
      printf("hey, it failed!\n");
      exit(-1);
    }    

    break;
  case 1:
    printf("%s Signaling cvar\n",prefix[me]);
    pthread_cond_signal(&cvar);
    break;


  case 2:
    sleep(6);
    printf("%s About to down semaphore\n",prefix[me]);
    sem_wait(&sem);
    printf("%s downed it!\n",prefix[me]);
    break;

  case 3:
    sleep(6);
    
    printf("%s Acquiring lock...\n",prefix[me]);
    rc = pthread_mutex_lock(&lock);
    if (rc) {
      printf("hey, it failed!\n");
      exit(-1);
    }
    printf("%s Waiting on cvar\n",prefix[me]);
    pthread_cond_wait(&cvar,&lock);
    printf("%s got the signal!\n",prefix[me]);

    printf("%s Releasing the lock...\n",prefix[me]);
    rc = pthread_mutex_unlock(&lock);
    if (rc) {
      printf("hey, it failed!\n");
      exit(-1);
    }


    break;
  }



  return NULL;
}




//==================================

int
main(int argc, char *argv[]) {

  pthread_t kids[KIDS];

  int i, rc;
  void *(*kidfun)(void *);



  if (argc < 2) {
    printf("Give an argument.\n");
    printf("1: demo locks\n");
    printf("2: demo semaphores\n");   
    printf("3: demo cvars (with signal)\n");   
    printf("4: demo cvars (with broadcast)\n");   
    printf("5: demo signal vs. semaphore... beforehand\n");   
    exit(-1);
  }

  switch(*argv[1]) {
  case '1': 
    kidfun = lockfun;
    break;
  case '2':
    kidfun = semfun;

    rc = sem_init(&sem, // the semaphore
          0,    // must be 0 on Linux; see the man page
          VAL);   // initial value of semaphore

    if (rc) {
      printf("hey, it failed  rc=%d!\n",rc);
      exit(-1);
    }
    
    printf("initialized semaphore with value %d\n", VAL);


    break;
  case '3':
    kidfun = sigfun;
    break;
  case '4':
    kidfun = broadfun;
    break;
  case '5':
    kidfun = earlyfun;
    rc = sem_init(&sem, // the semaphore
          0,    // must be 0 on Linux; see the man page
          0);   // initial value of semaphore

    if (rc) {
      printf("hey, it failed  rc=%d!\n",rc);
      exit(-1);
    }
    
    printf("initialized semaphore with value %d\n", 0);
    break;
  default:
    printf("that wasn't a valid argument\n");
    exit(-1);
  }
      

  init_prefix();









  for (i = 0; i < KIDS; i++) {
    
    rc = pthread_create(&kids[i],  // thread data structure to be written
            NULL,    // attributes (we'll ignore)
            kidfun, // the function to be run 
                        (void *) i); // the argument to the function

    if (rc) {
      printf("hey, it failed!\n");
      exit(-1);
    }

  }


  for (i = 0; i < KIDS; i++) {

    rc = pthread_join(kids[i],  // thread to wait for
              NULL);   // where to save the rc from pthread_exit(), 
                             // (if we care. for this example, we don't)

  }


  return 0;
}
  





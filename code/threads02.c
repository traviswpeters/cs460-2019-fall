// A simple example of some pitfalls of working with threads.
// Author: Travis W. Peters, Montana State University (Fall 2019)
// Inspired by http://pages.cs.wisc.edu/~remzi/OSTEP/threads-intro.pdf

#include <stdio.h>
#include <pthread.h>

pthread_mutex_t mutex; // <<<<<<<<<<<<< global lock for counter
static volatile int counter = 0;

// mythread()
// Simply adds 1 to counter repeatedly, in a loop
void *mythread(void *arg){
    printf("%s: begin\n", (char *) arg);

    int i;
    for (i = 0; i < 1e7; i++) {
        pthread_mutex_lock(&mutex); // <<<<<<<<<<<<< lock the counter before updating
        counter = counter + 1;
        pthread_mutex_unlock(&mutex); // <<<<<<<<<<<<< unlock the counter now that you are done updating
    }

    printf("%s: done\n", (char *) arg);
}

// main()
// create two threads (pthread_create) and wait for them to finish counting (pthread_join)
int main(int argc, char *argv[]) {
    char a = 'A';
    char b = 'B';
    pthread_t p1, p2;
    pthread_mutex_init(&mutex, NULL);  // <<<<<<<<<<<<< initialize the lock
    printf("main: begin (counter = %d)\n", counter);

    // `create` starts a thread running
    if(pthread_create(&p1, NULL, mythread, &a)) {
        fprintf(stderr, "Error creating thread A\n");
        return 1;
    }
    if(pthread_create(&p2, NULL, mythread, &b)) {
        fprintf(stderr, "Error creating thread B\n");
        return 2;
    }

    // `join` waits for the threads to finish
    if(pthread_join(p1, NULL)) {
        fprintf(stderr, "Error joining thread A\n");
        return 3;
    }
    if(pthread_join(p2, NULL)) {
        fprintf(stderr, "Error joining thread B\n");
        return 4;
    }

    printf("main: done with both (counter = %d)\n", counter);

    pthread_mutex_destroy(&mutex); // <<<<<<<<<<<<< good practice: free up any allocated resources
    return 0;
}

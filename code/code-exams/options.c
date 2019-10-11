#include <unistd.h>    // fork()
#include <stdio.h>     // printf()
#include <stdlib.h>    // exit()
#include <pthread.h>   // pthread_*

// OPTION1, OPTION2 would be #defined here. For example: 
// #define OPTION1 0 // 0 or 1
// #define OPTION2 1 // 0 or 1
#define OPTION1 1 // 0 or 1
#define OPTION2 0 // 0 or 1

int var1 = 0;
int *addr1, *addr2, *addr3, *addr4; 

void * fun(void *arg) {
    int var4 = 0;
    addr4 = &var4; 
    (*addr1) += 1;
    (*addr2) += 1;
    (*addr3) += 1;
    (*addr4) += 1;

    if (arg) {
        printf("(%d, %d) => %d %d %d %d\n", OPTION1, OPTION2, *addr1, *addr2, *addr3, *addr4);
    }
    return NULL;
}

int main(int argc, char **argv) {
    int var2 = 0;
    int rc; 
    pthread_t child;

    addr1 = &var1; 
    addr2 = &var2; 
    addr3 = (int*)malloc(sizeof(int));
    *addr3 = 0;

    if (OPTION1) {
        if (0 == fork()) {
            fun( (void *) 0 );
            exit(0);
        }
        if (OPTION2) wait(NULL);
    } else {
        pthread_create(&child, NULL, fun, NULL);
        if (OPTION2) pthread_join(child, NULL);
    }

    fun( (void *) 1 );

    return 0;
}
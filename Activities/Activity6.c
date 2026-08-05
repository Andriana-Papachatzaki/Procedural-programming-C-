#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NUM_CHARS 500000
void initialize(char src[]);
void copy_with_loop(char dst[],char src[]);
void copy_with_memcpy(char dst[],char src[]);
int main() {
    char src[NUM_CHARS];
    char dst[NUM_CHARS];
   
    // initialize source string with random characters
    initialize(src);

    // copy source string to destination string using loop
    copy_with_loop(dst,src);
    
    // copy source string to destination string using memcpy
    copy_with_memcpy(dst,src);
    
    return 0;
}

void initialize(char src[]){
    for (int i = 0; i < NUM_CHARS; i++) {
        src[i] = 'a' + rand() % 26;
    }
}

void copy_with_loop(char dst[],char src[]){
    clock_t start, end;
    double cpu_time_used;
    start = clock();
    for (int i = 0; i < NUM_CHARS; i++) {
        dst[i] = src[i];
    }
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Time taken to copy string using loop: %f seconds\n", cpu_time_used);

}

void copy_with_memcpy(char dst[],char src[]){
    clock_t start, end;
    double cpu_time_used;
    start = clock();
    memcpy(dst, src, NUM_CHARS);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Time taken to copy string using memcpy: %f seconds\n", cpu_time_used);

}

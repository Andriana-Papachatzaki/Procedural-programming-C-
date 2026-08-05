#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>
#define NUM_INTEGERS 100000

void read_text_file() {
    FILE* file = fopen("random_integers.txt", "r"); 
    int integer;

    clock_t start, end;
    double cpu_time_used;
    start = clock();
            for (int i = 0; i < NUM_INTEGERS; i++) {
                fscanf(file, "%d", &integer);
                
            }
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Time taken fscanf: %f seconds\n", cpu_time_used);
    fclose(file); 

}
void read_binary_file() {
    FILE* file = fopen("random_integers.bin", "rb"); 
    int integers[NUM_INTEGERS];
    
    clock_t start, end;
    double cpu_time_used;
    start = clock();
           fread(integers, sizeof(int), NUM_INTEGERS, file); 
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Time taken fread: %f seconds\n", cpu_time_used);
    fclose(file); 

}

int main() { 
    read_text_file(); 


    read_binary_file();
return 0; 
}

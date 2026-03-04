#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_INTEGERS 100000

void generate_random_integers(int * integers);
long save_as_text(int * integers);
long save_as_binary(int* integers);

int main() {
    srand(time(NULL));
    int integers[NUM_INTEGERS];
    generate_random_integers(integers);
    long text_size = save_as_text(integers);
    long binary_size = save_as_binary(integers);

    printf("Random integers saved as random_integers.txt and random_integers.bin.\n");
    printf("Size of random_integers.txt: %ld bytes\n", text_size);
    printf("Size of random_integers.bin: %ld bytes\n", binary_size);

    return 0;
}

void generate_random_integers(int * integers) {
    int i=0;
    for (; i < NUM_INTEGERS; i++) {
        integers[i] = rand();
    }
}

long save_as_text(int * integers) {
    FILE* file = fopen("random_integers.txt", "w");
    long size = 0;
    for (int i = 0; i < NUM_INTEGERS; i++) {
        size += fprintf(file, "%d\n", integers[i]);
    }
    fclose(file);
    return size;
}

long save_as_binary(int* integers) {
    FILE* file = fopen("random_integers.bin", "wb");
    long size = fwrite(integers, sizeof(int), NUM_INTEGERS, file);
    fclose(file);
    return size * sizeof(int);
}

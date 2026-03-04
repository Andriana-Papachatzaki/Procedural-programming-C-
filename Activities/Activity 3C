#include <stdio.h>
#define SIZE 10
void  initialize(char* tbl_char, int * tbl_int, double []);
void  print(char [], int [], double []);
int main(void){
    char array_char[SIZE];
    int array_int[SIZE];
    double array_double[SIZE];

     initialize(array_char,&array_int[0],&array_double[0]);
     print(array_char,&array_int[0],&array_double[0]);

    return 0;
}

void  initialize(char* tbl_char, int * tbl_int, double tbl_double[]){
    int index;
    for (index = 0; index < SIZE; index++) {   
          tbl_char[index]='A'+index;
          tbl_int[index]=index;
          tbl_double[index]=index;
    }
    tbl_char[index]='\0';

}

void  print(char tbl_char[], int tbl_int[], double tbl_double[]){
    int index;
    for (index = 0; index < SIZE; index++) {   
          printf(" %d \t tbl_char value %c address %p \n", index, tbl_char[index], (void *) &tbl_char[index] );
          printf(" %d \t tbl_int value %d  address %p \n", index, tbl_int[index], (void *) &tbl_int[index]);
          printf(" %d \t tbl_double value %.3f address %p  \n", index, tbl_double[index], (void *) &tbl_double[index]);
          
          
    }

}

#include<stdio.h>
#define N 10
#define M 20
#define UP_EDGE 2.00
#define LEFT_EDGE 4.00
#define DOWN_EDGE 3.00
#define RIGHT_EDGE -5.00
#define BETWEEN 1.00
void change_temperatures(float new_temp[N][M], float old[N][M], int *count);
void temperature_per_section(float array[N][M],int *count);
void print_plate(float array[N][M]);

int main(void){
    int count=0;
    float first_plate[N][M];
    float second_plate[N][M];
    temperature_per_section(first_plate,&count);
    print_plate(first_plate);
    change_temperatures(second_plate, first_plate,&count);
    print_plate(second_plate);
    return 0;
}

void temperature_per_section(float array[N][M],int *count){
    int i,j;
    printf("\ntime:%d",(*count)++);
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            if(i==0 && j==0){
                array[i][j]=(UP_EDGE + LEFT_EDGE)/2;
            }else if(i==0 && j==19){
                array[i][j]=(UP_EDGE+RIGHT_EDGE)/2;
            }else if(i==9 && j==0){
                array[i][j]=(LEFT_EDGE+DOWN_EDGE)/2;
            }else if(i==9 && j==19){
                array[i][j]=(DOWN_EDGE+RIGHT_EDGE)/2;
            }else if(i==0){
                array[i][j]=UP_EDGE;
            }else if(i==9){
                array[i][j]=DOWN_EDGE;
            }else if(j==0){
                array[i][j]=LEFT_EDGE;
            }else if(j==19){
                array[i][j]=RIGHT_EDGE;
            }else{
                array[i][j]=BETWEEN;
            }
        }
    }
}

void print_plate(float array[N][M]){
    int i,j;
    for(i=0;i<N;i++){
        printf("\n");
        for(j=0;j<M;j++){
            printf("%5.2f  ",array[i][j]);
        }
    }printf("\n");
}

void change_temperatures(float new_temp[N][M], float old[N][M],int *count){
    int i,j;
    printf("\ntime:%d",(*count)++);
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            if(i==0 || i==9 || j==0 || j==19){
                new_temp[i][j]=old[i][j];
            }else if(i!=0 || i!=9 || j!=0 || j!=19){
                new_temp[i][j]=0.1*(old[i-1][j-1]+old[i-1][j]+old[i-1][j+1]+old[i][j-1]+2*old[i][j]+old[i][j+1]+old[i+1][j-1]+old[i+1][j]+old[i+1][j+1]);
            }
        }
    }
}

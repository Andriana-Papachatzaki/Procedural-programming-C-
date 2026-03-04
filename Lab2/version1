#include<stdio.h>
#define N 10
#define M 20
#define UP_EDGE 2.00
#define LEFT_EDGE 4.00
#define DOWN_EDGE 3.00
#define RIGHT_EDGE -5.00
#define BETWEEN 1.00
void change_temperatures(float new_temp[N][M], float old[N][M], int *count);
void temperature_per_section(float array[N][M], int *count);
void print_plate(float array[N][M]);
void min_max_temp(float array[N][M]);

int main(void){
    int count=0;
    float first_plate[N][M];
    float second_plate[N][M];
    temperature_per_section(first_plate,&count);
    print_plate(first_plate);
    min_max_temp(first_plate);
    change_temperatures(second_plate, first_plate, &count);
    print_plate(second_plate);
    min_max_temp(second_plate);
    return 0;
}

void temperature_per_section(float array[N][M], int *count){
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

void change_temperatures(float new_temp[N][M], float old[N][M], int *count){
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


void min_max_temp(float array[N][M]){
    int i,j;
    float min,max,div;
    int temporary[N][M];
    min=array[0][0];
    max=array[9][19];
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            if(min>array[i][j]){
                min=array[i][j];
            }
        }
    }for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            if(max<array[i][j]){
                max=array[i][j];
            }
        }
    }
    div=(max-min)/10;
    printf("min:%5.2f\nmax:%5.2f\nlimits:",min,max);
    for(i=0;i<10;i++){
        printf("%5.2f  ",min+i*div);
    }
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            if(min<=array[i][j] && array[i][j]<=min+div){
                temporary[i][j]=0;
            }else if(min+div<array[i][j] && array[i][j]<=min+2*div){
                temporary[i][j]=1;
            }else if(min+2*div<array[i][j] && array[i][j]<=min+3*div){
                temporary[i][j]=2;
            }else if(min+3*div<array[i][j] && array[i][j]<=min+4*div){
                temporary[i][j]=3;
            }else if(min+4*div<array[i][j] && array[i][j]<=min+5*div){
                temporary[i][j]=4;
            }else if(min+5*div<array[i][j] && array[i][j]<=min+6*div){
                temporary[i][j]=5;
            }else if(min+6*div<array[i][j] && array[i][j]<=min+7*div){
                temporary[i][j]=6;
            }else if(min+7*div<array[i][j] && array[i][j]<=min+8*div){
                temporary[i][j]=7;
            }else if(min+8*div<array[i][j] && array[i][j]<=min+9*div){
                temporary[i][j]=8;
            }else if(min+9*div<array[i][j] && array[i][j]<=min+10*div){
                temporary[i][j]=9;
            }
        }
    }for(i=0;i<N;i++){
        printf("\n");
        for(j=0;j<M;j++){
            printf("%d   ",temporary[i][j]);
        }
    }
}

#include<stdio.h>
#define N 10
#define M 20
#define UP_EDGE 2.00
#define LEFT_EDGE 4.00
#define DOWN_EDGE 3.00
#define RIGHT_EDGE -5.00
#define BETWEEN 1.00
void change_temperatures(float new_temp[N][M], float old[N][M], int *count);
void temperature_per_section(float array[N][M]);
void print_plate(float array[N][M]);
void min_max_temp(float array[N][M]);
float get_total(float new[N][M], float old[N][M]);
void permanent(float old[N][M], int count);
void histogram(int *count,float array[N][M]);
void print_histogram(float array[N][M]);


int main(void){
    int count=0;
    float first_plate[N][M];
    temperature_per_section(first_plate);
    permanent(first_plate, count);
    print_histogram(first_plate);
    return 0;
}

void temperature_per_section(float array[N][M]){
    int i,j;
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
    ++(*count);
    //printf("\n\ntime:%d",(*count)++);
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
    }printf("\n");
}

float get_total(float new[N][M],float old[N][M]){
    int i,j;
    float total=0.00;
    float difference;
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            difference = new[i][j]-old[i][j];
            difference=(difference<0)? (-1)*difference:difference;
            total+=difference;
        }
    }
    return total;
}

void permanent(float old[N][M],int count){
    float total;
    int i,j;
    float new[N][M];
    change_temperatures(new,old,&count);
    for(total=get_total(new,old);total>1.00;){
        for(i=0;i<N;i++){
            for(j=0;j<M;j++){
                old[i][j]=new[i][j];
                new[i][j]=0.00;
            }
        }change_temperatures(new,old,&count);
        total=get_total(new,old);
    }printf("\ntime:%d\ntotal abs diff:%5.2lf",count,total);
    print_plate(new);
    min_max_temp(new);
}

void histogram(int *count,float old[N][M]){
    int sec,n;
    float new[N][M];
    printf("\nGive second:");
    scanf("%d",&sec);
    temperature_per_section(old);
    for(n=0;n<=sec;n++){
        if(n%2==0){
            change_temperatures(new,old,count);
        }else{
            change_temperatures(old,new,count);
        }
    }
}

void print_histogram(float array[N][M]){
    int i,j,count;
    histogram(&count,array);
    int times[10]={0};
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            if(-5.00<=array[i][j] && array[i][j]<=-4.10){
                times[0]++;
            }else if(-4.10<array[i][j] && array[i][j]<=-3.20){
                times[1]++;
            }else if(-3.20<array[i][j] && array[i][j]<=-2.30){
                times[2]++;
            }else if(-2.30<array[i][j] && array[i][j]<=-1.40){
                times[3]++;
            }else if(-1.40<array[i][j] && array[i][j]<=-0.50){
                times[4]++;
            }else if(-0.50<array[i][j] && array[i][j]<=0.40){
                times[5]++;
            }else if(0.40<array[i][j] && array[i][j]<=1.30){
                times[6]++;
            }else if(1.30<array[i][j] && array[i][j]<=2.20){
                times[7]++;
            }else if(2.20<array[i][j] && array[i][j]<=3.10){
                times[8]++;
            }else {
                times[9]++;
            }
        }
    }for(i=0;i<=9;i++){
        printf("%d ",i);
        for(j=0;j<times[i];j++){      
            printf("%c",'#');
        }printf("\n");
    }
}

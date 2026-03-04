#include<stdio.h>

int getchoice(void);
int getsize(void);
char getcharacter(void);
int printsquare(int size);
int printrhombus(int);
int printhalftriangle(int);
int printtriangle(int);
void linechange(void);
void printdash(void);
void printchar(char);

int main(void){
    int choice, size;
    for(;(choice=getchoice()) != -1 ;){
        size = getsize();
        switch(choice){
            case 0:
            printsquare(size);
            break;
            case 1:
            printrhombus(size);
            break;
            case 2:
            printhalftriangle(size);
            break;
            case 3:
            printtriangle(size);
            break;
            default:
            printf("You didn't enter a choice!");
        }
    }return 0;
}

int getchoice(void){
    int choice;
    printf("\ngetchoice\n");
    scanf("%d",&choice);
    return choice;
}

int getsize(void){
    int size;
    printf("getsize\n");
    scanf("%d",&size);
    return size;
}

char getcharacter(void){
    char character;
    printf("getcharacter\n");
    scanf("\n%c",&character);
    return character;

}

int printsquare(int size){
    for(int i =0; i<size;i++){
        for(int x=0;x<size;x++){
                if(i==0 || i== (size-1)){
                    printf("%d",i);
                }else if(i==x || x==(size-i-1)){
                    printf("%d",i);
                }else if(x==0 || x== (size-1)){
                    printf("%d",i);
                }
                else{
                    printdash();
                }
        }linechange();
    }
    return 0;
}


int printrhombus(int size){
    int z=(size/2);
    if(size%2!=0){
        for(int i=0;i<size;i++){
            for(int x=0;x<size;x++){
                if(x==z-i || x==z+i || x==z){
                    printf("%d",i);
                }else if(x==z-(size-i-1) || x==z+(size-i-1)){
                    printf("%d",i);
                }else if(x>z+i || x>z+(size-i-1)){
                    printf(" ");
                }else{
                    printdash();
                }
            }linechange();
        }
    }else{
        for(int i=0;i<size;i++){
            for(int x=0;x<size;x++){
                if(x==z-i-1 || x==z+i || x==z || x==z-1){
                    printf("%d",i);
                }else if(x==z-(size-i) || x==z+(size-i-1)){
                    printf("%d",i);
                }else if(x>z+i || x>z+(size-i-1)){
                    printf(" ");
                }else{
                    printdash();
                }
            }linechange();
        }
    }
    return 0;
}

int printhalftriangle(int size){
    for(int i=0;i<size;i++){
        for(int x=0;x<size;x++){
            if(x==0){
                printf("%d",i);
            }else if(i==x || i==size-1){
                printf("%d",i);
            }else if(x<i){
                printdash();
            }
        }linechange();
    }
    return 0;
}

int printtriangle(int size){
    int y =(2*size)-1;
    for(int i=0;i<size;i++){
        for(int x=0;x<y;x++){
            if(i==0 && x==(y/2)){
                printf("%d",i);
            }else if(i==size-1 || x==(y/2)+i || x==(y/2)-i){
                printf("%d",i);
            }else if(x<=(y/2)+i && x>=(y/2)-i && i!=0){
                printdash();
            }
            else{
                printf(" ");
            }
        }linechange();
    }
    return 0;
}

void linechange(void){
    printf("\n");
}

void printdash(void){
    printf("-");
}

void printchar(char character){
    printf("%c", character);
}

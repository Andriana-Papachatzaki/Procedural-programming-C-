#include<stdio.h>

int getchoice(void);
int getsize(void);
char getcharacter(void);
int printsquare(int size, char character);
int printrhombus(int, char);
int printhalftriangle(int, char);
int printtriangle(int, char);

int main(void){
    int choice, size;
    char character;
    for(;(choice=getchoice()) != -1 ;){
        size = getsize();
        character = getcharacter();
        switch(choice){
            case 0:
            printsquare(size,character);
            break;
            case 1:
            printrhombus(size, character);
            break;
            case 2:
            printhalftriangle(size, character);
            break;
            case 3:
            printtriangle(size, character);
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

int printsquare(int size, char character){
    for(int i =0; i<size;i++){
        for(int x=0;x<size;x++){
                if(i==0 || i== (size-1)){
                    printf("%c",character);
                }else if(i==x || x==(size-i-1)){
                    printf("%c",character);
                }else if(x==0 || x== (size-1)){
                    printf("%c",character);
                }
                else{
                    printf("-");
                }
        }printf("\n");
    }
    return 0;
}


int printrhombus(int size, char character){
    int z=(size/2);
    if(size%2!=0){
        for(int i=0;i<size;i++){
            for(int x=0;x<size;x++){
                if(x==z-i || x==z+i || x==z){
                    printf("%c",character);
                }else if(x==z-(size-i-1) || x==z+(size-i-1)){
                    printf("%c",character);
                }else if(x>z+i || x>z+(size-i-1)){
                    printf(" ");
                }else{
                    printf("-");
                }
            }printf("\n");
        }
    }else{
        for(int i=0;i<size;i++){
            for(int x=0;x<size;x++){
                if(x==z-i-1 || x==z+i || x==z || x==z-1){
                    printf("%c",character);
                }else if(x==z-(size-i) || x==z+(size-i-1)){
                    printf("%c",character);
                }else if(x>z+i || x>z+(size-i-1)){
                    printf(" ");
                }else{
                    printf("-");
                }
            }printf("\n");
        }
    }
    return 0;
}

int printhalftriangle(int size, char character){
    for(int i=0;i<size;i++){
        for(int x=0;x<size;x++){
            if(x==0){
                printf("%c",character);
            }else if(i==x || i==size-1){
                printf("%c",character);
            }else if(x<i){
                printf("-");
            }
        }printf("\n");
    }
    return 0;
}

int printtriangle(int size, char character){
    int y =(2*size)-1;
    for(int i=0;i<size;i++){
        for(int x=0;x<y;x++){
            if(i==0 && x==(y/2)){
                printf("%c", character);
            }else if(i==size-1 || x==(y/2)+i || x==(y/2)-i){
                printf("%c",character);
            }else if(x<=(y/2)+i && x>=(y/2)-i && i!=0){
                printf("-");
            }
            else{
                printf(" ");
            }
        }printf("\n");
    }
    return 0;
}

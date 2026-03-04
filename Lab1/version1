#include<stdio.h>

int getchoice(void);
int getsize(void);
char getcharacter(void);
int printsquare(void);
int printrhombus(void);
int printhalftriangle(void);
int printtriangle(void);

int main(void){
    int choice, size;
    char character;
    for(;(choice=getchoice()) != -1 ;){
        size = getsize();
        character = getcharacter();
        switch(choice){
            case 0:
            printsquare();
            break;
            case 1:
            printrhombus();
            break;
            case 2:
            printhalftriangle();
            break;
            case 3:
            printtriangle();
            break;
            default:
            printf("You didn't enter a choice!");
        }
    }return 0;
}

int getchoice(void){
    int choice;
    printf("getchoice\n");
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

int printsquare(void){
    printf("printsquare\n");
    return 0;
}

int printrhombus(void){
    printf("printrhombus\n");
    return 0;
}

int printhalftriangle(void){
    printf("printhalftriangle\n");
    return 0;
}

int printtriangle(void){
    printf("printtriangle\n");
    return 0;
}

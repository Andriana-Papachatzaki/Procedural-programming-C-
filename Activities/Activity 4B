#include <stdio.h>

int main(void){
 int x[10],y[15],z[20];
 int* ptr[] = {x,y,z};
    printf("the address of the first element of x is : %p\n", (void *) ptr[0]);
    printf("the address of the first element of x is : %p\n", (void *) *ptr);
    printf("the address of the first element of x is : %p\n", (void *) &ptr[0][0]);
    printf("the address of the first element of x is : %p\n", (void *) x);
    printf("the address of the first element of x is : %p\n", (void *)  &x);
    printf("the address of the first element of x is : %p\n", (void *)  &x[0]);

return 0;
}
#include <stdio.h>

int main(void){
    char a='A';
    char msg[]="A";
    char * months[]={"Jan","Feb","Mar"};

    printf("this is the value of a : %c\n", a);
    printf("this is the address of a : %p\n",(void *) &a);
    printf("this is the size of a : %d\n\n\n",(int) sizeof a);

    
    printf("this is the value of msg: %s\n", msg);
    printf("this is the first character of msg: %c\n", *msg);
    printf("this is the address of the first character of msg : %p\n",(void *) msg);
    printf("this is the address of the first character of msg : %p\n",(void *) &msg);
    printf("this is the address of the first character of msg : %p\n",(void *) &msg[0]);
    printf("this is the size of a : %d\n\n\n",(int) sizeof msg);

    printf("this is the address of months : %p  \n", (void *) &months);
    printf("this is the value of months : %p  \n", (void *) months);
    
    printf("Jan starts at address : %p\n", (void *) months[0]);
    printf("Feb starts at address : %p\n", (void *) months[1]);
    printf("Mar starts at address : %p\n", (void *) months[2]);
    
    printf("print the second character of the 2nd string %c:\n",  months[1][1]);
    printf("print the second character of the 2nd string with pointer arithmetic %c:\n",  *(months[1]+1));

    printf("this is the size of months : %d \n ",(int) sizeof months);


    return 0;
}

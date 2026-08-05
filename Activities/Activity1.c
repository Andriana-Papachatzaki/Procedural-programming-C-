#include <stdio.h>
float compute_addition(float, float);
float compute_subtraction(float, float);
float compute_multiplication(float, float);
float compute_division(float, float);
void read_values_from_keyboard(float *, float *);

int main(void){
    float result,x,y;
    char operation;
    
    read_values_from_keyboard(&x,&y);
    
    printf("Please enter the operation type: + - * / ");
    scanf("\n%c", &operation);
    switch(operation){
        case '+':
           result=compute_addition(x,y);
           printf("Addition:%.3f",result); 
          break;
        case '-':
           result=compute_subtraction(x,y);
           printf("Substraction:%.3f",result); 
        break;
       case '*':
           result=compute_multiplication(x,y);
           printf("Multiplication:%.3f",result); 
        break;
        case '/':
           result=compute_division(x,y);
           printf("Division:%.3f",result); 
        break;

        
    }

    return 0;
}

void read_values_from_keyboard(float *x, float *y){
    printf("Please enter the x value:");
    scanf("%f",x);
    printf("Please enter the y value:");
    scanf("%f",y);

}


float compute_addition(float x, float y){
   int sum;
   sum=x+y;
   return sum;

}

float compute_subtraction(float x, float y) {
  float result = x - y;
  return result;
}

float compute_multiplication(float x, float y){

    return x*y;
}


float compute_division(float dividend, float divisor) {
  float quotient = 0.0;
  if (divisor == 0) {
    printf("Error: Division by zero");
    return 0.0;
  }
  quotient = dividend / divisor;
  return quotient;
}



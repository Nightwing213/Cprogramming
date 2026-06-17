/*
  C program that checks whether an integer entered by the user is divisible by 4.
*/
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int getInput();
bool isNegative(int a);
bool isInRange(int a);
bool isGreaterthan100(int a);


int main(void){
 int a = getInput();
  if(isNegative(a)){
    puts("The program doesn't accept negative numbers");

  } else if(isInRange(a)){
    int quotient = a / 4;
    int remainder = a % 4;

    if(a %4 == 0){
      printf("The number (%d) is divisible by 4\nQuotient: %d\n", a, quotient);
    }
    else{
      printf("The number (%d) is not divisible by 4\nQuotient: %d\nRemainder: %d\n", a, quotient, remainder);
  } 
}
  else if(isGreaterthan100(a)){
    double squareRoot = sqrt(a);
    printf("The entered number is greater than 100 and the square root of it is %.2lf\n", squareRoot);

  }
  return 0;
}
int getInput(){
  int a = 0;

 // printf("Please enter an integer to see whether it is divisible by 4:\n");
  scanf("%d", &a);

  return a;
}

bool isNegative(int a){
  return(a <= 0);
}

bool isInRange(int a){
  return(a <= 100);
}

bool isGreaterthan100(int a){
  return(a > 100);
}
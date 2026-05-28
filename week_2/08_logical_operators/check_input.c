#include <stdio.h>

// functions

int checkInput(int first, int second){
    int second_minus_three = second - 3;

    if(second == 0 || second_minus_three == 0){ // back up incase of zeros
        return 3;
    }
    if((first % second == 0) && (first % second_minus_three == 0)){
        return 1;
    }
    else if ((first % second == 0) || (first % second_minus_three == 0)){
        return 2;
    } 
    else {
    return 3;    
    }
    
}

int main(void){
    int num1;
    int num2;

    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);

    int result = checkInput(num1, num2);

    if(result == 1){
        printf("The first integer is divisible by both numbers.\n");
    }
    else if (result == 2){
     printf("The first integer is divisible by one number.\n");
    }
    else {
     printf("The first integer is not divisible by both numbers.\n");
    }

    return 0;
}

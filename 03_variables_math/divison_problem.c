#include <stdio.h>

int main (void){
    int first_number= 100; 
    int second_number = 100;
    printf("divison problem\n"); 

    printf("first number:\n"); //n what is being divided
    scanf("%d",& first_number);

    printf("second number:\n"); //n dividing by
    scanf("%d",& second_number);
    int sum = first_number / second_number;
    printf("sum:\n");
    printf("%d / %d = %d\n", first_number, second_number, sum);
    return 0;
}
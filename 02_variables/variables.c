/*
introduction to variables in C.

*/
#include <stdio.h>

int main(void){
    //create a variable
    int first_number;
    // Assign the value to a variable
    first_number = 100;

    // Create and initailize
    int second_number =300;
    
    //get the values from the keyboard
    printf("Enter the first integer:");
    scanf("%d", &first_number);

    printf("Enter the second integer");
    scanf("%d", &second_number);

    //print values of variables
    printf("The first number is %d\n", first_number); //%d - conversion specifier

    printf("The second number is %d\n", second_number);

    //XCalculate the sum
    int sum = first_number + second_number;

    printf("%d + %d = %d\n", first_number, second_number, sum);

    printf("\"A\"\t\\\"B\"\n");
    

    return 0;
}

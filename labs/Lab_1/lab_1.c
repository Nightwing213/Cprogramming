/*
The program converts the age in years to minutes and displays both values. 

1. print the prompt to enter the number of years.
2. create a variable and get the number of years
3. calculate the number of minutes  (assume 1 year is 365 days)
4. print the result in the format "XX" years is "XX" minutes

*/
#include <stdio.h>

int main(void){

    int years = 0;
    int minutes = 0;

    printf("Enter the age in years:\n");
    scanf("%d", &years);

    minutes = years * 365 * 24 * 60;

    printf("\"%d\" years is \"%d\" minutes\n", years, minutes);

return 0;
}
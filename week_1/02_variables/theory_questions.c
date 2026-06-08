#include <stdio.h>
int main(void) {
    int favNumber = 0; 
    int birthYear = 0; 
    int product = 0; 
    printf("Enter your favorite number: "); 
    scanf("%d", &favNumber); 
    printf("Enter your birth year: "); 
    scanf("%d", &birthYear); 
    product = favNumber * birthYear; 
    printf("Product of the two entered numbers is: %d\n", product);
    return 0;
}
/*
    Logical operator

    && - logical AND (add)
    || - logical OR (muliply)
    ! - logical NOT (inverse)
*/



/*
    create a function named checkInput. The function takes 2 integers.
    returns 1 if the 1st integer is divisibles by 2nd integer and by (second - 3) integer
    returns 2 if the 1st integer is divisibles by 2nd integer or by (second - 3) integer
    returns 3 if the 1st integer not divisibles by 2nd integer nor by (second - 3) integer

    in the main call the function and print the appropriate message.
    due tomorrow

*/
#include <stdio.h>

int main(void){
    int input;
    // Scan the input
    printf("Enter your input: ");
    scanf("%d", &input);
    // Check the input
    /*if(input > 0){
        if(input < 100){
            if (input % 2 == 0){
                puts("valid input");
            }else{
                puts("invalid input");
            }
        }
    }else{
       puts("invalid input"); 
    }*/
   // Use logical Operators
   if(input>0 && input < 100 && input % 2 == 0){
    puts ("valid input");
   }else {
    puts("invalid input");
   } 
    return 0;
}
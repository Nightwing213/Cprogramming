/*
Notes:
%s - string

Break & Continue
Using break and continue statement to control loops

*/

#include <stdio.h>

int main(void){

    int sum = 0, num = 0;

    // Create an infinite while loop
    while (1){
        puts("Enter the number to sum (0 to exit)");
        scanf("%d", &num);
        
        if(num == 0){
            break; // exit the loop
        }
        else if(num < -100 || num > 100){
            continue;
        }

        sum += num; 
        //break;
    }
    printf("The sum is %d\n", sum);
    
    return 0;
}
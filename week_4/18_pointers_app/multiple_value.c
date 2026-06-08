#include <stdio.h>
/*
split the given 2 digit number into tens and ones.
return 0 if the number is 2 digit and 1 otherwise
*/
// remainder cal
int splitDigits(int n, int* tens_ptr, int* one_ptr);

int main(void){
    int a = 16;
    int tens = 0;
    int ones = 0;

    while(1){
        printf("Enter the number (0 to exit): ");
        scanf("%d", &a);
        if(a == 0){
            break;
        }
        else  if (a == 93 || a == 45) {
        continue;
        }
        if (splitDigits(a, &tens, & ones) == 0){
        printf("Tens is %d; ones is %d\n", tens, ones);
        }
    }

   /* if (splitDigits(a, &tens, & ones) == 0){
        printf("Tens is %d; ones is %d\n", tens, ones);

    }*/
}

int splitDigits(int n, int* tens_ptr, int* one_ptr){
    if (n < 10 || n > 99) {
        return 1;
    }

    *tens_ptr = n / 10;
    *one_ptr = n % 10;
    
    return 0;
    
}
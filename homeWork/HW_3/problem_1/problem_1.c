#include <stdio.h>

int main(void){

    int n, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if (i % 5 == 0){
            sum += i;
        }
    }

    printf("The sum is: %d\n", sum);

    return 0;
}
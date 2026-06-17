#include <stdio.h>

int main(void){

    int num;
    int posCount = 0;
    int negCount = 0;

    printf("Enter integer values. The program will exit when you enter 0.\n");

    while(1){
        scanf("%d", &num);
        if(num == 0) break;

        if(num > 0) {
            posCount++;
        } else {
            negCount++;
        }
    }

        printf("The number of positives is %d\n", posCount);
        printf("The number of negatives is %d\n", negCount);


    return 0;
}
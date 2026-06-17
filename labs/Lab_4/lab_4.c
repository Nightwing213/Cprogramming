#include <stdio.h>
#include <stdlib.h>
// lab 4
int main(void){
    unsigned int seed;
    int min, max, count;
    int sum = 0;

    printf("Enter random number seed: ");
    scanf("%u", &seed);
    printf("Enter the minimum random number: ");
    scanf("%d", &min);
    printf("Enter the maximum random number: ");
    scanf("%d", &max);
    printf("Enter the number of random number: ");
    scanf("%d", &count);

    srand(seed);

    printf("-------------\n");
    for (int i = 1; i <= count; i++){
        int rand_num = (rand() % (max - min + 1)) + min;
        sum += rand_num;
        printf("|%03d  | %4d|\n", i, rand_num);
    }
    printf("-------------\n");
    printf("The sum is: %d\n", sum);
    return 0;
}
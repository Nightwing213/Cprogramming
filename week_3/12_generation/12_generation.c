/*

introduction to random number generation

*/
#include <stdio.h>
#include <stdlib.h> // rand function
#include <time.h>

int getRandonNumber(int min, int max);
void printRandomNumber(int min, int max, int n);

int main (void){
    srand(time(0));
   /* int h = 15;
    while(h > 5){
        printf("%d\n", getRandonNumber(10, 20));
        h = h - 1;
    }
   // printf("%d\n", rand());
    */
   int min, max, n;
    scanf("%d%d%d", &min, &max, &n);
    printRandomNumber(min, max, n);
    return 0;
}

int getRandonNumber(int min, int max){
    return rand() % (max - min +1) + min;
}

void printRandomNumber(int min, int max, int n){
    int c = 1;
    while ( c <= n){
        printf("%d", getRandonNumber(min, max));
        c = c + 1;
    }
}
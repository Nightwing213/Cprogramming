/*

Pointer application

*/
#include <stdio.h>

void setToZero(int* n); // pasing by reference

void swap(int* a, int* b);

int main(void){
    int a = 10;
    int b = 20;
    printf("a before %d - %p\n", a, &a);
    setToZero(&a);
    printf("a after %d\n", a);

    // todo test the swap function
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}
void setToZero(int* pN){
    *pN = 0;
    printf("pN - %p\n", pN);
}
void swap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
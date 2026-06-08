/*

Pointer application

*/
#include <stdio.h>

void setToZero(int* n); // pasing by reference

void swap(int* a, int* b);

int main(void){
    int a = 10;

    printf("a before %d - %p\n", a, &a);
    setToZero(&a);
    printf("a after %d\n", a);

    // todo test the swap function
   // swap()

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
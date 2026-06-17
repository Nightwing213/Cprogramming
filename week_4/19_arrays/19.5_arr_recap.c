#include <stdio.h>

#define SIZE 5

int main(void){
    int c[5] = {-45, 6, 0, 72, 1543};
   /* double d[3] = {1.1, 2.2, 3.3};
    double sum (double* n, int size){
        double sum_= 0;
        for (int i = 0, i < size; i++){
            sum_ += n[i];
        }
        return sum_;
    }*/

    printf("%d\n", c[0] + c[2]);

    return 0;
}


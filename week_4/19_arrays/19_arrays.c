/*



*/
#include <stdio.h>

#define SIZE 1000

int main(void){

    int arr[SIZE];

    arr[0] = 999;

    arr[SIZE - 1] = 111;

    for(int i = 0; i < SIZE; i++){
        arr[i] = i + 1;
    }
    //reintialize with values (10,)
    for(int i = 0; i < SIZE; i++){
        arr[i] = (i + 1) * 10;
    }

 
    
    for (int i = 0; i < SIZE; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
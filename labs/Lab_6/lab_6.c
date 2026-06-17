/*
this is mine part 
*/
// The code goes here
// chris imhoff

#include <stdio.h>
#define SIZE 3
void printArray(int* arr, int size);
void clearArray(int *arr, int size);


int main(void){
 int arr[SIZE];

    arr[0] = 0;

    arr[SIZE - 1] = 3;

    for(int i = 0; i < SIZE; i++){
        arr[i] = i + 1;
    }

    //print array
    //printArray(arr, SIZE);
    clearArray(arr, SIZE);
    return 0;
}



void clearArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = 0;
        printf("%d ", arr[i]);
    }
}
/*

Intro into arrays

*/
#include <stdio.h>

#define SIZE 10

void printArray(int* arr, int size);

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
    //print array
    printArray(arr, SIZE);
    return 0;
}

void printArray(int* arr, int size){
    printf("%c", '[');
       for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    } 
    puts("]");
}
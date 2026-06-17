/*

Using constant arrays

searching in arrays

*/

#include <stdio.h>

#define SIZE 10

void printDoubledArray(const int* arr, int size);

int searchFirstZero(const int* arr, int size);
int searchLastZero(const int* arr, int size);
//todo
int searchNthZero(const int* arr, int size, int n); 
int searchLastNthTarget(const int* arr, int size, int n, int target);



/*
    returen the index of the first zero value in the array

*/

int main (void){

    int a[SIZE] = {1, 2, 3, 4};

    printDoubledArray(a, SIZE);
    printf("The first zero is at index %d\n", searchFirstZero(a, SIZE));
    printf("The last zero is at index %d\n", searchLastZero(a, SIZE));
    printf("The 1st zero is at index %d\n", searchNthZero(a, SIZE, 1));
    printf("The 2nd zero is at index %d\n", searchNthZero(a, SIZE, 2));
    printf("The last 1st target (0) is at index %d\n", searchLastNthTarget(a, SIZE, 1, 0));
    printf("The last 2nd target (0) is at index %d\n", searchLastNthTarget(a, SIZE, 2, 0));
    return 0;
}

void printDoubledArray(const int* arr, int size){
    for(int i = 0; i < SIZE; i++){
        //arr[i] *= 2; 
        printf("%d ", arr[i] * 2);
    }
    puts("");
}

int searchFirstZero(const int* arr, int size){
    for (int i = 0; i < size; i++){
        if(arr[i] == 0){
            return i; //Return the idex of the first zero value 
        }
    }

    return -1;
}
int searchLastZero(const int* arr, int size){
 for (int i = size - 1; i >= 0; i--){
        if(arr[i] == 0){
            return i; //Return the idex of the first zero value 
        }
    }
    return -1;
}

int searchNthZero(const int* arr, int size, int n){
   int count = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] == 0){
            count++;
            if(count == n){
                return i;
            }
        }
    }
    return -1;

}
int searchLastNthTarget(const int* arr, int size, int n, int target){
     int count = 0;
    for(int i = size - 1; i >= 0; i--){
        if(arr[i] == target){
            count++;
            if(count == n){
                return i;
            }
        }
    }
    return -1;
}

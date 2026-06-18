#include <stdio.h>

#define ROW 8
#define COL 8
void print(int rows, int cols, int arr[rows][cols]);
void setMainDiagonal(int rows, int cols, int arr[rows][cols], int value);
void setsecondDiagonal(int rows, int cols, int arr[rows][cols], int value);

int main (void){
    // create 2D array of integers
    int arr[ROW][COL] = {
        {1, 2, 3},
        {3, 4, 5},
        {6, 7, 8},
    };
    print(ROW, COL, arr);
    puts("\n");

    // access an element
    printf("%d\n", arr[2][2]);

    // modify the value of an element
    arr[2][1] = 17;

    // print an array
    print(ROW, COL, arr);

    // set the second row with 7"s
    for(int j =0; j <COL; j++){
        arr[1][j] = 7;
    }
    // set the first column with 5;s
    for(int i =0; i <ROW; i++){
        arr[i][0] = 5;
    }

    puts("\n");
    print(ROW, COL, arr);

    setMainDiagonal(ROW, COL, arr, 10);
    puts("\n");
    print(ROW, COL, arr);
    setsecondDiagonal(ROW, COL, arr, 10);
    puts("\n");
    print(ROW, COL, arr);
    return 0;
}
void print(int rows, int cols, int arr[rows][cols]){
     for (int i =0; i <rows; i++){
        for(int j =0 ; j < cols; j++){
            printf("%4d", arr[i][j]);
        }
        puts("");
    }
}
void setMainDiagonal(int rows, int cols, int arr[rows][cols], int value){
    if (rows != cols){
        puts("Not a matrix");
        return;
    }
    for (int i = 0; i < rows; i++){
        arr[i][i] = value;
    }
}
void setsecondDiagonal(int rows, int cols, int arr[rows][cols], int value){
   if (rows != cols){
        puts("Not a matrix");
        return;
    }  
    for(int i =0, j = cols -1; i < rows; i++, j--)
   arr[i][j] = value;
}
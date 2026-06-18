#include <stdio.h>

#define ROWS 5
#define COLS 5

// Part 1: Sum of all elements
double sumAll(double arr[ROWS][COLS]);

// Part 2: Print the array
void printArray(double arr[ROWS][COLS]);

// Part 3: Sum of a column
double sumColumn(double arr[ROWS][COLS], int col);

int main(void) {

    double arr[ROWS][COLS];

    // -------------------------
    // PART 1: Initialize 1 → 25
    // -------------------------
    double value = 1.0;
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            arr[i][j] = value++;
        }
    }

    // Modify specific elements
    arr[0][1] = 24.0;   // 1st row, 2nd column
    arr[2][2] = 43.0;   // 3rd row, 3rd column

    // Compute sum and assign (sum - 350) to last element
    double total = sumAll(arr);
    arr[4][4] = total - 350.0;

    // -------------------------
    // PART 2: Print array
    // -------------------------
    printf("Array after modifications:\n");
    printArray(arr);

    // -------------------------
    // PART 3: Column sums → string
    // -------------------------
    char colString[6];   // 5 columns + null terminator

    for(int c = 0; c < COLS; c++){
        double s = sumColumn(arr, c);
        colString[c] = (char)((int)s);   // store as character
    }
    colString[5] = '\0';  // null terminator

    // -------------------------
    // PART 4: Modify characters
    // -------------------------
    colString[0] += 34;
    colString[1] -= 12;
    colString[2] -= 38;
    colString[3] += 1;
    colString[4] -= 24;

    printf("\nFinal string: %s\n", colString);

    return 0;
}
// Part 1: Sum of all elements
double sumAll(double arr[ROWS][COLS]) {
    double sum = 0.0;
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            sum += arr[i][j];
        }
    }
    return sum;
}
// Part 2: Print the array
void printArray(double arr[ROWS][COLS]) {
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            printf("%6.2f ", arr[i][j]);
        }
        printf("\n");
    }
}
// Part 3: Sum of a column
double sumColumn(double arr[ROWS][COLS], int col) {
    double sum = 0.0;
    for(int i = 0; i < ROWS; i++){
        sum += arr[i][col];
    }
    return sum;
}

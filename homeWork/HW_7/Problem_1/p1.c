// Problem 1. Two-dimensional Array (15 pts)
#include <stdio.h>
#include <stdlib.h>

// 1. Print a selected row
void print_row(int rows, int cols, const int a[rows][cols], int row_num);

// 2. Print a selected column
void print_col(int rows, int cols, const int a[rows][cols], int col_num);

// 3. Initialize array with random values [0–99]
void rand_init(int rows, int cols, int a[rows][cols]);

// 4. Print entire 2D array
void print(int rows, int cols, const int a[rows][cols]);

// 5. Swap two rows
void swap_rows(int rows, int cols, int a[rows][cols], int row1, int row2);

int main(void) {
    srand(10);

    int d[5][3];

    rand_init(5, 3, d);
    print(5, 3, d);

    print_row(5, 3, d, 0);
    print_col(5, 3, d, 1);

    print(5, 3, d);
    swap_rows(5, 3, d, 0, 1);
    print(5, 3, d);

    return 0;
}
// 1. Print a selected row
void print_row(int rows, int cols, const int a[rows][cols], int row_num) {
    for (int j = 0; j < cols; j++) {
        printf("%4d", a[row_num][j]);
    }
    printf("\n\n");   // blank line to match expected output
}

// 2. Print a selected column (NO indentation)
void print_col(int rows, int cols, const int a[rows][cols], int col_num) {
    for (int i = 0; i < rows; i++) {
        printf("%4d\n", a[i][col_num]);   // FIXED: add spacing
    }
    printf("\n");
}


// 3. Initialize array with random values [0–99]
void rand_init(int rows, int cols, int a[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            a[i][j] = rand() % 100;
        }
    }
}

// 4. Print entire 2D array
void print(int rows, int cols, const int a[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");   // blank line after matrix
}

// 5. Swap two rows
void swap_rows(int rows, int cols, int a[rows][cols], int row1, int row2) {
    for (int j = 0; j < cols; j++) {
        int temp = a[row1][j];
        a[row1][j] = a[row2][j];
        a[row2][j] = temp;
    }
}
#include <stdio.h>
void printTriangleTopRight(int n);
void printTriangleTopRightDigitsAsc(int n);
void printTriangleTopRightDigitsDes(int n);
void printPyramid(int n);
int main(void) {
    int n = 0;

    // Scan a positive integer
    do {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    } while (n <= 0);

    // Function calls
    printf("\n");
    printTriangleTopRight(n);

    printf("\n");
    printTriangleTopRightDigitsAsc(n);

    printf("\n");
    printTriangleTopRightDigitsDes(n);

    printf("\n");
    printPyramid(n);
    return 0;
}
void printTriangleTopRight(int n){
   for (int i = 0; i < n; i++) {
        // spaces
        for (int s = 0; s < i; s++)
            printf(" ");
        // stars
        for (int j = 0; j < n - i; j++)
            printf("*");
        printf("\n");
   }
}
void printTriangleTopRightDigitsAsc(int n){
for (int i = 0; i < n; i++) {
        // spaces
        for (int s = 0; s < i; s++)
            printf(" ");
        // digits ascending
        for (int d = i + 1; d <= n; d++)
            printf("%d", d);
        printf("\n");
    }
}
void printTriangleTopRightDigitsDes(int n){
for (int i = 0; i < n; i++) {
        // spaces
        for (int s = 0; s < i; s++)
            printf(" ");
        // digits descending
        for (int d = n; d >= i + 1; d--)
            printf("%d", d);
        printf("\n");
    }
}
void printPyramid(int n) {
    for (int i = 0; i < n; i++) {
        // spaces
        for (int s = 0; s < n - i - 1; s++)
            printf(" ");
        // stars
        for (int j = 0; j < 2 * i + 1; j++)
            printf("*");
        printf("\n");
    }
}
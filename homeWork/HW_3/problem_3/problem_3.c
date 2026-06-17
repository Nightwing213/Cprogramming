#include <stdio.h>

void printLine(char c, int n) {
    int i = 1;
    while (i <= n) {
        printf("%c", c);
        if (i < n) printf(" ");
        i++;
    }
    printf("\n");
}

void printLinePattern(char c1, char c2, int n) {
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            printf("%c", c1);
        else
            printf("%c", c2);

        if (i < n - 1) printf(" ");
    }
    printf("\n");
}

void printCheckerboard(char c1, char c2, int size) {
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            if ((row + col) % 2 == 0)
                printf("%c", c1);
            else
                printf("%c", c2);

            if (col < size - 1) printf(" ");
        }
        printf("\n");
    }
}

void printColumnSwapCheckerboard(char c1, char c2, int size) {
    for (int row = 0; row < size; row++) {
        char current = (row % 2 == 0) ? c1 : c2;
        printLine(current, size);
    }
}

int main() {
    char c1, c2;
    int n;

    printf("Enter the first character: ");
    scanf(" %c", &c1);

    printf("Enter the second character: ");
    scanf(" %c", &c2);

    printf("Enter an integer: ");
    scanf("%d", &n);

    printLine(c1, n);
    printLinePattern(c1, c2, n);
    printCheckerboard(c1, c2, n);
    printColumnSwapCheckerboard(c1, c2, n);

    return 0;
}
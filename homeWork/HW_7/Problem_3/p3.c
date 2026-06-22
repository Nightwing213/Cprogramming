// Problem 3. Merge Files (15 pts)
#include <stdio.h>
#include <stdlib.h>

void mergeFiles(const char *f1, const char *f2, const char *merged);

int main(void) {
    char f1[100], f2[100], merged[100];

    printf("Enter file names: ");
    scanf("%s %s %s", f1, f2, merged);

    mergeFiles(f1, f2, merged);

    return 0;
}
void mergeFiles(const char *f1, const char *f2, const char *merged) {
    FILE *fp1 = fopen(f1, "r");
    FILE *fp2 = fopen(f2, "r");
    FILE *out = fopen(merged, "w");

    if (!fp1 || !fp2 || !out) {
        printf("Error opening one of the files.\n");
        if (fp1) fclose(fp1);
        if (fp2) fclose(fp2);
        if (out) fclose(out);
        return;
    }

    int atomicNum;
    char name[50], symbol[10];
    float weight;

    // Copy contents of first file
    while (fscanf(fp1, "%d %49s %9s %f",
                  &atomicNum, name, symbol, &weight) == 4) {
        fprintf(out, "%d %s %s %.2f\n",
                atomicNum, name, symbol, weight);
    }

    // Copy contents of second file
    while (fscanf(fp2, "%d %49s %9s %f",
                  &atomicNum, name, symbol, &weight) == 4) {
        fprintf(out, "%d %s %s %.2f\n",
                atomicNum, name, symbol, weight);
    }

    fclose(fp1);
    fclose(fp2);
    fclose(out);
}
// To run the code  1.txt 2.txt merged.txt
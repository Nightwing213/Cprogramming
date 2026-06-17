#include <stdio.h>
#include <stdlib.h>

int findGCD(int n1, int n2);
void printFraction(int num, int denom);
void scanFraction(int *num_ptr, int *denom_ptr);
void reduceFraction(int *num_ptr, int *denom_ptr);


int main(void)
{
    int num, denom;

    scanFraction(&num, &denom);

    printf("The entered fraction> ");
    printFraction(num, denom);
    printf("\n");

    reduceFraction(&num, &denom);

    printf("The reduced fraction> ");
    printFraction(num, denom);
    printf("\n");

    return 0;
}

int findGCD(int n1, int n2)
{
    int g = abs(n1);
    int p = abs(n2);
    int r;

    if (p == 0)
        return g;

    r = g % p;

    while (r != 0)
    {
        g = p;
        p = r;
        r = g % p;
    }

    return p;
}

void printFraction(int num, int denom)
{
    printf("%d/%d", num, denom);
}

void scanFraction(int *num_ptr, int *denom_ptr)
{
    printf("Enter numerator> ");
    scanf("%d", num_ptr);

    printf("Enter denominator> ");
    scanf("%d", denom_ptr);

    while (*denom_ptr == 0)
    {
        printf("Invalid, reenter denominator\n");
        printf("Enter denominator> ");
        scanf("%d", denom_ptr);
    }
}

void reduceFraction(int *num_ptr, int *denom_ptr)
{
    int gcd = findGCD(*num_ptr, *denom_ptr);

    if (gcd != 0)
    {
        *num_ptr   /= gcd;
        *denom_ptr /= gcd;
    }
}
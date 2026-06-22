#include <stdio.h>
#include <stdlib.h>

// Function prototype
void lottery(int *lottery_pick);

int main() {
    int seed;
    int picks[2];

    // 1. Prompt for and read the seed
    printf("Enter seed: ");
    scanf("%d", &seed);
    srand(seed);

    // 2-5. Declare array and read user picks
    printf("Enter first pick (1-9): ");
    scanf("%d", &picks[0]);
    printf("Enter second pick (1-9): ");
    scanf("%d", &picks[1]);

    // 6. Call lottery function and pass the array
    lottery(picks);

    return 0;
}

void lottery(int *lottery_pick) {
    // 1. Generate two random digits (1-9)
    int d1 = rand() % 9 + 1;
    int d2 = rand() % 9 + 1;

    // 2. Print the lottery number
    printf("The lottery number is %d%d\n", d1, d2);

    // 3. Compare with user picks and determine prize
    int u1 = lottery_pick[0];
    int u2 = lottery_pick[1];

    if (u1 == d1 && u2 == d2) {
        printf("Exact match: you win $10,000\n");
    } 
    else if (u1 == d2 && u2 == d1) {
        printf("Two digits match: you win $3,000\n");
    } 
    else if (u1 == d1 || u1 == d2 || u2 == d1 || u2 == d2) {
        printf("One digit match: you win $1,000\n");
    } 
    else {
        printf("No match\n");
    }
}

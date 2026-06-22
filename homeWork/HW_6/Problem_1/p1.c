#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

void plantFlowers(int *flowerbed, int flowerbedSize);
int flowersToPlant(int *flowerbed, int flowerbedSize);

void plantFlowers(int *flowerbed, int flowerbedSize) {
    for (int i = 0; i < flowerbedSize; i += rand() % 4 + 2) {
        flowerbed[i] = 1;
    }
}

int flowersToPlant(int *flowerbed, int flowerbedSize) {
    int count = 0;

    for (int i = 0; i < flowerbedSize; i++) {
        if (flowerbed[i] == 0) {
            int emptyLeft  = (i == 0) || (flowerbed[i - 1] == 0);
            int emptyRight = (i == flowerbedSize - 1) || (flowerbed[i + 1] == 0);

            if (emptyLeft && emptyRight) {
                flowerbed[i] = 1;  // simulate planting
                count++;
                i++;               // skip next plot
            }
        }
    }

    return count;
}

int main() {
    int seed;
    int flowerbed[SIZE] = {0};

    printf("Enter seed: ");
    scanf("%d", &seed);
    srand(seed);

    plantFlowers(flowerbed, SIZE);

    // Print flowerbed
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", flowerbed[i]);
    }
    printf("\n");

    int result = flowersToPlant(flowerbed, SIZE);
    printf("You can plant up to %d flowers\n", result);

    return 0;
}
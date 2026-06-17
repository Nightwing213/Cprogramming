#include <stdio.h>
#include <stdlib.h>

void printYouWin(void) {
    printf("Congratulations! You defeated the monster!\n");
}

void printYouLose(void) {
    printf("Game Over! The monster has defeated you!\n");
}

int heroAttacks(int atkBonus) {
    // Base attack: 1–5
    int base = rand() % 5 + 1;
    // Total damage = base + attack bonus (0–2, passed in)
    return base + atkBonus;
}

int monsterAttacks(void) {
    // Monster attack: 1–6
    return rand() % 6 + 1;
}

void displayHealth(int heroHealth, int monsterHealth) {
    printf("Hero Health: %d | Monster Health: %d\n", heroHealth, monsterHealth);
}

void battle(void) {
    int heroHealth = 20;
    int monsterHealth = 20;

    printf("The battle begins!\n\n");
    displayHealth(heroHealth, monsterHealth);
    printf("\n");

    while (heroHealth > 0 && monsterHealth > 0) {

        // Hero attacks first
        int atkBonus = rand() % 3;          // 0–2 random bonus
        int heroDmg = heroAttacks(atkBonus);
        printf("Hero attacks with %d damage!\n", heroDmg);
        monsterHealth -= heroDmg;

        // Monster only attacks if still alive
        if (monsterHealth > 0) {
            int monsterDmg = monsterAttacks();
            printf("Monster attacks with %d damage!\n\n", monsterDmg);
            heroHealth -= monsterDmg;
        } else {
            printf("\n");
        }

        if (heroHealth < 0) heroHealth = 0;
        if (monsterHealth < 0) monsterHealth = 0;

        displayHealth(heroHealth, monsterHealth);
        printf("\n");
    }

    if (heroHealth == 0) {
        printYouLose();
    } else {
        printYouWin();
    }
}

int main(void) {
    int seed;
    printf("Enter the seed: ");
    scanf("%d", &seed);
    srand(seed);

    battle();
    return 0;
}
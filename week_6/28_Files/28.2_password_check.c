#include <stdio.h>
#include <string.h>

int main(void) {
    const char correct_password[] = "Spartan213";
    char input[50];
    int attempts = 0;

    while (attempts < 3) {
        printf("Enter password: ");
        scanf("%49s", input);

        if (strcmp(input, correct_password) == 0) {
            printf("Access granted!\n");
            return 0;
        }

        printf("Incorrect password. Try again.\n");
        attempts++;
    }

    printf("Too many attempts. Access locked.\n");
    return 0;
}

#include <stdio.h>

int main(void) {
    FILE* file = fopen("output.txt", "r");
    if (file == NULL) {
        puts("File cannot be opened");
        return 1;
    }

    char verb[20], adj[20], noun[20];

    // Correct loop: check fscanf return value
    while (fscanf(file, "%19s %19s %19s", adj, noun, verb) == 3) {
        printf("%s %s %s\n", adj, noun, verb);
    }

    fclose(file);
    return 0;
}

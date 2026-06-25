// cat password_parse.txt
#include <stdio.h>

int main(void) {
    FILE* file_in = fopen("28.2Password.txt", "r");
    FILE* file_out = fopen("28.3passwords_parsed.txt", "w");

    if (file_in == NULL || file_out == NULL) {
        puts("File cannot be opened");
        return 1;
    }

    char login[40], pass[40];

    // Correct, safe loop
    while (fscanf(file_in, "%39s %39s", login, pass) == 2) {
        fprintf(file_out, "%s %s\n", login, pass);
    }

    fclose(file_in);
    fclose(file_out);

    return 0;
}

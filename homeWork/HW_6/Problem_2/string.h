// String functions
#include <stdlib.h> // malloc
#include <stdio.h> // getchar

#define STR_SIZE 1024

int my_strlen(const char* str);
char* get_string(const char* prompt);

void my_strcpy(char *dest, char *src);
void my_strcat(char *dest, char *src);

void my_strcmp(char *dest, char *src);

int my_strlen(const char* str) {
    int i = 0;
    while(str[i] != '\0' && i < STR_SIZE) {
        i++;
    }

    return i;
}


char* get_string(const char* prompt) {
    printf("%s", prompt);
    char *str = (char*) malloc(sizeof(char) * STR_SIZE);

    // Scan the string character by character
    char input;
    int i = 0;
    while (i < STR_SIZE - 1 && (input = getchar()) != '\n') {
        str[i] = input;
        i++;
    }

    // Add null character at the end
    str[i] = '\0';

    return str;
}

void my_strcpy(char *dest, char *src) {
    int i;
    for (i = 0; i < STR_SIZE && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
}

void my_strcat(char *dest, char *src) {
    int i;
    int len_dest = my_strlen(dest);
    for (i = 0; len_dest < STR_SIZE && src[i] != '\0'; i++) {
        dest[len_dest] = src[i];
        len_dest++;
    }
    dest[len_dest] = '\0';
}
void my_strcmp(char *dest, char *src){
    int i = 0;

    while (dest[i] != '\0' && src[i] != '\0'){
        if (dest[i] < src[i]){
            printf("-1\n");
            return;
        }
        if (dest[i] > src[i]){
            printf("1\n");
            return;
        }
        i++;
    }

    if (dest[i] == '\0' && src[i] == '\0'){
        printf("0\n");
        return;
    }

    if (dest[i] == '\0'){
        printf("-1\n");
        return;
    }

    printf("1\n");
}
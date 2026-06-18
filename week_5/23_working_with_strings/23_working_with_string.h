#include "my_ctype.h"
void printInLowercase(const char* str);
void printInReversedCase(const char* str);
void get_string(char* str, const char* prompt);
int my_strlen(const char* str);
void my_strcpy(char* dest, const char* src);
void my_strcat(char* dest, const char* src);
int my_strcmp(const char* s1, const char* s2);
// 0 - string are the same;
// -1 - first string is smaller
// 1 - first string is larger
void printInLowercase(const char* str) {
for (int i = 0; str[i] != '\0'; i++) {
putchar(toLower(str[i]));
}
puts("\n");
}
void printInReversedCase(const char* str) {
for (int i = 0; str[i] != '\0'; i++) {
if (isUpper(str[i])) {
putchar(toLower(str[i]));
}
else {
putchar(toUpper(str[i]));
}
}
}
void get_string(char* str, const char* prompt) {
printf("%s\n", prompt);
int i = 0;
while (1) {
char input = getchar();
if (input == '\n') {
break;
}
else {
str[i] = input;
i++;
}
}
// Add null character at the end
str[i] = '\0';
}
int my_strlen(const char* str) {
int i = 0;
while (str[i] != '\0') {
i++;
}
return i;
}
void my_strcpy(char* dest, const char* src) {
int i = 0;
while (1) {
dest[i] = src[i];
if (src[i] == '\0') {
break;
}
i++;
}
}
void my_strcat(char* dest, const char* src) {
int i = my_strlen(dest);
int j = 0;
while (src[j] != '\0') {
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
}
int my_strcmp(const char* s1, const char* s2){
   int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0'){
    
        if (s1[i] < s2[i]){
            return -1;
        }
        if (s1[i] > s2[i]){
            return 1;
        }
        i++;
    }
    if (s1[i] == '\0' && s2[i] == '\0'){
        return 0;
    
    }
    if (s1[i] == '\0'){
        return -1;
    }
    return 1;
}
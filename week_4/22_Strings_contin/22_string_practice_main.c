#include"my_ctype.h"
void printInLowerCase(const char* str);
void printInReversedCase(const char* str);
void printWithNoDigits(const char* str);
void printSpecialCharacters(const char* str);
void ConvertToLower(char* str);
void printWords(const char* str);
int main(void) {
    char ch_input = 'B';
   // do{
    printf("Enter a character(. to exit): \n");

    //scanf(" %c", &ch_input);
    printf("isUpper('%c') = %d\n", ch_input, isUpper(ch_input));
   // printf("isLower('%c') = %d\n", ch_input, isLower(ch_input));
   // printf("isDigit('%c') = %d\n", ch_input, isDigit(ch_input));
   // printf("isAlNum('%c') = %d\n", ch_input, isAlNum(ch_input));
   // printf("toLower('%c') = %c\n", ch_input, toLower(ch_input));
   // printf("toUpper('%c') = %c\n", ch_input, toUpper(ch_input));
   // printf("tospecial('%c') = %c\n", ch_input, tospecial(ch_input));

//} while (ch_input != '.');
    char str[] = "HeLl0 WoRlD123!";

    puts("Using printf");
    printf("%s\n\n",str);

    puts("Using puts");
    puts(str);
    puts("\n");

    puts("using a loop");
    for (int i = 0; str[i] != '\0'; i++){ 
        // str[i] != '\0' - continue till the end
        putchar(str[i]);

    }
    puts("\n");
puts ("print in lowercase");
    for(int i = 0; str[i] != '\0'; i++){
        putchar(toLower(str[i]));
    }
    puts("\n"); 
   
    return 0;
}
void printInLowerCase(const char* str){
    puts ("print in lowercase");
    for(int i = 0; str[i] != '\0'; i++){
        putchar(toLower(str[i]));
    }
    puts("\n"); 
}
void printInReversedCase(const char* str){
puts ("print in lowercase");
    for(int i = 0; str[i] != '\0'; i++){
     if(isUpper(str[i])){
        putchar(toLower(str[i]));
     } else 
     {
        putchar(toUpper(str[i]));
     }
    }
}
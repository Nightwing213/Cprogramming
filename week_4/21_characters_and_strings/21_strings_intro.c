#include <stdio.h>
#include <stdbool.h>

bool isUpper(char c);
bool isLower(char c);
bool isDigit(char c);
bool isAlNum(char c);
bool isspecial( char c);

char toLower(char c);
char toUpper(char c);
char tospecial(char c);

int main(void) {
    char ch_input;
    do{
    printf("Enter a character(. to exit): ");
    scanf(" %c", &ch_input);
    printf("isUpper('%c') = %d\n", ch_input, isUpper(ch_input));
    printf("isLower('%c') = %d\n", ch_input, isLower(ch_input));
    printf("isDigit('%c') = %d\n", ch_input, isDigit(ch_input));
    printf("isAlNum('%c') = %d\n", ch_input, isAlNum(ch_input));
    printf("toLower('%c') = %c\n", ch_input, toLower(ch_input));
    printf("toUpper('%c') = %c\n", ch_input, toUpper(ch_input));
    printf("tospecial('%c') = %c\n", ch_input, tospecial(ch_input));

} while (ch_input != '.');

    return 0;
}

bool isUpper(char c){
    return c >= 'A' && c <= 'Z';
}

bool isLower(char c){
    return c >= 'a' && c <= 'z';
}

bool isDigit(char c){
   return c >= '0' && c <= '9'; 
}

bool isAlNum(char c){
    //if (c>= '0' && c <= '9' || c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z'); 
    //return c;
    return isUpper(c) || isLower(c) || isDigit(c);
}
bool isspecial( char c){
    return!((isLower(c))|| (isUpper(c)) || (isDigit(c)));
}

char toLower(char c){
   if (isUpper(c)){
    return c + 32;
   } 
   else{
    return '0';
   }
}

char toUpper(char c){
   if (isLower(c)){
    return c - 32;
   } 
   else{
    return '0';
   }
}

char tospecial(char c){
    if (isspecial(c)) {
        return c;
    }
    return '0';
}
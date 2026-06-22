// Character functions
#include <stdbool.h>

// Character functions
bool isUpper(char c);
bool isLower(char c);
bool isAlpha(char c); // True if the character is a letter (upper or lower)
bool isDigit(char c); // True if c is a digit [0; 9]
bool isAlNum(char c); // True if the character is a letter or a digit

// Converts the given uppercase to lowercase
char toLower(char c);
// Converts the given lowercase to uppercase
char toUpper(char c);


bool isUpper(char c) {
    if (c >= 'A' && c <= 'Z') {
        return true;
    }
    else {
        return false;
    }
}

bool isLower(char c) {
    if (c >= 'a' && c <= 'z') {
        return true;
    }
    else {
        return false;
    }
}


bool isAlpha(char c) {
    return isUpper(c) || isLower(c);
}

bool isDigit(char c) {
    return (c >= '0' && c <= '9');
}

bool isAlNum(char c) {
    return isAlpha(c) || isDigit(c);
}

char toLower(char c) {
    if (isUpper(c)) {
        return c + 32; // Returns the uppercase ascii code
    }
    else {
        return c;
    }
}

char toUpper(char c) {
    if (isLower(c)) {
        return c - 32; // Returns the lowercase ascii code
    }
    else {
        return c;
    }
}
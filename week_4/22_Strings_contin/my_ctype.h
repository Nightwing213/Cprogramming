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
//bool isspecial( char c){
  //  return!((isLower(c))|| (isUpper(c)) || (isDigit(c)));
//}

char toLower(char c){
   if (isUpper(c)){
    return c + 32;
   } 
   else{
    return 'c';
   }
}

char toUpper(char c){
   if (isLower(c)){
    return c - 32;
   } 
   else{
    return 'c';
   }
}

char tospecial(char c){
    if (!(isAlNum)) {
        return c;
    }
    return 'c';
}
#include "23_working_with_string.h"
//#include <stdio.h>
// graham number for next wedensday!!!!!!!!!!!!!!
int main(void) {
    
    char s[100] = "Hello Jack";
 // Get the string
    get_string(s, "Enter the string");
    printf("The string is: \"%s\"\n", s);
    printf("The length is: %d\n", my_strlen(s));
 // Test copy string
    char s2[100];
    get_string(s2, "Enter the second string");
    puts("Copying the second string into the first one");
    my_strcpy(s, s2);
 // Pring after copy
    printf("The string is: \"%s\"\n", s);
    printf("The length is: %d\n", my_strlen(s));
    puts("Adding the second string to the first one");
    my_strcat(s, s2);
 // Pring after adding
    printf("The string is: \"%s\"\n", s);
    printf("The length is: %d\n", my_strlen(s));
 
    printf("The string is: \"%s\"\n", s);
    printf("The length is: %d\n", my_strcmp(s, s2));
    return 0;
}

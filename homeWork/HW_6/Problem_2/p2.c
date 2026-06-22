#include <stdio.h>
#include <ctype.h>
#include <string.h>

void text_statistics(const char *str);

int main(void) 
{ 
    char str[1024]; // Buffer for input
    printf("Enter a string: ");

    // Read a line of input
    if (fgets(str, sizeof(str), stdin)) {
        // Remove trailing newline
        str[strcspn(str, "\n")] = '\0';
        text_statistics(str);
    } else {
        printf("Error reading input.\n");
    }

    return 0; 
}

void text_statistics(const char *str) 
{ 
    int total = 0; 
    int upper = 0; 
    int lower = 0; 
    int i = 0; 
    
    while (str[i] != '\0') 
    { 
        // Skip spaces, tabs, and standard hyphens
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '-') {
            i++; 
        }
            
        // Check for multi-byte UTF-8 dashes (en-dash \xE2\x80\x93 or em-dash \xE2\x80\x94)
        if (str[i] == (char)0xE2 && str[i+1] == (char)0x80 && 
           (str[i+2] == (char)0x93 || str[i+2] == (char)0x94)) {
            i += 3; // Skip all 3 bytes of the dash
            continue; // Re-evaluate whitespace/dashes at the new position
        }

        if (str[i] == '\0')
            break;

        // Start of a word
        total++; 
        
        // Count uppercase/lowercase only if alphabetic
        if (isalpha((unsigned char)str[i])) 
        { 
            if (isupper((unsigned char)str[i]))
                upper++; 
            else
                lower++; 
        } 
        
        // Move to end of word (until a space, ASCII hyphen, or start of a UTF-8 dash)
        while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '-') 
        {
            // If we hit the start byte of a UTF-8 dash, stop moving forward
            if (str[i] == (char)0xE2 && str[i+1] == (char)0x80 && 
               (str[i+2] == (char)0x93 || str[i+2] == (char)0x94)) {
                break;
            }
            i++; 
        }
    } 
    
    printf("The given string has %d words (%d starts with uppercase, %d starts with lowercase)\n", 
           total, upper, lower); 
}
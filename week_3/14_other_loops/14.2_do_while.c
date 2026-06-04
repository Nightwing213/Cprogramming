/*
    intorducing do...while loop

*/
#include <stdio.h>

int main(void){
    char input;
    int number;
    int option;
    do{
        printf("Enter an uppercase charater: ");
        scanf(" %c", &input);
    } while(input < 'A' || input > 'Z');

    //printf("You character is %c\n", input);
    do{
        printf("Enter an postive Number: ");
        scanf("%d", &number);
    } while(number <= 0); // do opposite condition
    do{
        printf("Option 1 (one line) or 2 (multiple lines): ");
        scanf("%d", &option);
    } while(option < 1 || option > 2);
    for(int i = 0; i < number; i++){
        if(option = 1){
            printf("%c",input);
        }else{
            printf("%c\n", input);
        }
    }

    printf("You character is %c\n", input);
    printf("You number is %d\n", number);
    printf("You option is %d\n", option);
    

    

    return 0;
}
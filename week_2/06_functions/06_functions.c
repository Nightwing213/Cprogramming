/*Functions in C
Alert: exam on monday first half study codes in codespace.
Notes:
Equal sign in the second postion for comparison operators.
Functions: are used to modularize programs
Use C standard library functions

*/

#include <stdio.h>
// function prototypes - short  description of functions
void two(void);
void one_three(void);

/*void two(void){  
    puts("two");
}*/
  
void one_three(void){
  puts("one");
  two();
  puts("three");
}
void two(void){  
    puts("two");
}
  
int main(void){
printf("starting now:\n");
  one_three();
  printf("done!\n");
    

    return 0;
}
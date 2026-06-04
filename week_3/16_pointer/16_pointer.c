/*

intro pointers

*/
#include <stdio.h>

int main (void){

    int luck = 100;

    luck += 5;
    
    printf("The address of luck: %p\n", &luck);
    // create a pointer variable (stores memory address)
    // data_type * pointer_variable_name;

    //Integer pointer
    int* luck_ptr = &luck;  // = NULL or 0 
    printf("The value of luck_ptr: %p\n", &luck_ptr);

    // access the data the pointer is pointer to
    // * - dereferencing operator
    printf("Dereference luck_ptr: %d\n", *luck_ptr);

    // modify the data through the pointer
    *luck_ptr = 200;
    printf("The value of luck: %d\n", luck);

    

    return 0;
}
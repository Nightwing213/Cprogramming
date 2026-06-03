
/*
NOTES 

int variable: 
    char - tyoe is used for storing characters such as letter and punctuation marks. %c
    short (int)
    int
    long (int)
    long long (int)
floating-point number:
    float
    double
    long double
exponential notation e or E
single quotes for characters only
bool type
    include <stdbool.h>

*/



#include <stdio.h>
#include <stdbool.h>

// function prototype
bool isGreaterOrEqual(int n1,int n2);

int largest(int n1, int n2, int n3);

int main(void){
// function call
printf("%d\n", isGreaterOrEqual(3, 5));
printf("%d\n", isGreaterOrEqual(5, 2));

printf("The largest %d\n", largest(10, 11, 12));
printf("The largest %d\n", largest(12, 11, 9));
printf("The largest %d\n", largest(1, 11, 9));
    return 0;
}
// function definition
bool isGreaterOrEqual(int n1,int n2) {
    return (n1 >= n2);
}

int largest(int n1, int n2, int n3){
    if(isGreaterOrEqual(n1, n2) && isGreaterOrEqual(n1, n3)){
        return n1;
    }
    if(isGreaterOrEqual(n2, n3)){
        return n2;
    
    }else{
        return n3;
    }
}
/*
 NOTES :)
 counter-controlled iteration:

 addititon assignment
 c = c + n == c += n 
 subtraction assignment
 c = c - n == c -= n
 divison
 c = c / n == c /= n
 multiply
 c = c * n == c *= n
 remainder
 c = c % n == c %= n
 increment
 ++
 decrement
 --
 preincrement/decrement:
 ++c, --c 
 postincrement/decrement:
 c++, c--
 sentinel-controlled iteration:

 calculate the sum of entered grades
 for loop
 for(int; cond; iner){
        1   2   4
 statements;
 3
 }
 
*/
#include <stdio.h>


int main(void){
 /* int x = 4, y = 0, z = 0, k = 2;
    y += x++ + 1;
    z -= ++y + 2;
    k *= --z;
    printf("%d %d %d %d\n", x, y, z, k);*/
    int current_student = 1;
    int grade_input = 0;
    int total_grade = 0;
    printf("Enter the grade for student %d (-1 to exit): ", current_student);
    scanf("%d", &grade_input);

    // sentinel loop
    while (grade_input != -1) {
        total_grade += grade_input;
        current_student++;
        printf("Enter the grade for student %d (-1 to exit): ", current_student);
        scanf("%d", &grade_input);
    }
    printf("The total grade is %d\n", total_grade);
    printf("The average grade is %lf\n", (double) total_grade / (current_student -1));
    return 0;
}

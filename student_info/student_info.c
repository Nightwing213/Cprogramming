/*
The program prints student's info in the specific format:
*/
#include <stdio.h>
int main (void){
    int coruseID = 2271;
    int studentID = 2709;
    printf("Name: \t\t\t\tChris Imhoff\n");
    printf("Course ID: \t\t\t%d\n", coruseID);
    printf("Student ID: \t\t\t%d\n", studentID);
    printf("StudenID - Course ID is: \t%d\n", studentID - coruseID);
    return 0;
}


#include <stdio.h>



void printCourseWithNumber(int course_number){

    printf("You are in COP %d course\n", course_number);
}
/*void printCoruse(void){
    printf("You are in COP 2271 course \n");

}*/
void printCoruse(void){
    printCourseWithNumber(2271);

}

int main(void){
    // Call printCourse function
    printCoruse();
    printCoruse();

    int number =1234;
    printCourseWithNumber(number);
   // printCourseWithNumber(2280);

    return 0;
}
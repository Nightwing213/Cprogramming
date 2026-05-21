/*
Seconds to minutes to hours covertor
65 sec -> 0 hrs 1 min 5 secs
3695 seconds -> 1 hr 1 min 35 secs
*/
#include <stdio.h>

void secondsToHMS(int seconds){
 int minutes = 0;
    int remaining_seconds = 0;
    int hours = 0;
    int remaining_mins = 0;
if (seconds < 0) {
        puts("The number of seconds cannot be negative");
    }
    else{
    // calcaulate the number of minutes
    minutes = seconds/60;
    remaining_seconds = seconds % 60;  //seconds - (minutes*60);
    
    // calcaulate the number of hours
    hours = minutes/60;
    remaining_mins = minutes % 60;
    
    // print the result
    printf("%d seconds is ", seconds);
    printf("%d minutes and %d seconds \n", minutes, remaining_seconds);
    printf("or %d hours, %d mintues, and %d seconds \n", hours, remaining_mins, remaining_seconds);
    }

}


int main(void){
    int seconds = 0;
   /* int minutes = 0;
    int remaining_seconds = 0;
    int hours = 0;
    int remaining_mins = 0;*/
    // get the number of seconds
    puts("Enter the number of seconds");
    scanf("%d",&seconds);
   /* if (seconds < 0) {
        puts("The number of seconds cannot be negative");
    }
    else{
    // calcaulate the number of minutes
    minutes = seconds/60;
    remaining_seconds = seconds % 60;  //seconds - (minutes*60);
    
    // calcaulate the number of hours
    hours = minutes/60;
    remaining_mins = minutes % 60;
    
    // print the result
    printf("%d seconds is ", seconds);
    printf("%d minutes and %d seconds \n", minutes, remaining_seconds);
    printf("or %d hours, %d mintues, and %d seconds \n", hours, remaining_mins, remaining_seconds);
    }*/



    secondsToHMS(seconds);
    secondsToHMS(seconds * 2);
    secondsToHMS(seconds * 3);

    return 0;
}
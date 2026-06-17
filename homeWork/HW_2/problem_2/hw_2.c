#include<stdio.h>

int main(void){
    int temp;
    printf("what is the temperature outside?\n");
    if(scanf("%d", &temp)!=1){
        return 1;
    }
    if (temp >= 80){
        printf("Swimming\n");
    } else if (temp >= 60) {
        printf("Soccer\n");
    } else if (temp >= 40) {
        printf("Volleyball\n");
    } else {
        printf("Skiing\n");
    }
return 0;
}
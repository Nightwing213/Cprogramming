#include<stdio.h>

int main(void){
    int Radius_of_Playgroud; 
    int Width_of_Walkway;
    int Larger_Circle_Radius; 
    int Area_of_Playground;
    int Area_of_larger_Circle; 
    int Area_of_Walkway;
    int PI = 3;  

    printf("\bEnter the radius of the circular playground: ");
    scanf("%d", &Radius_of_Playgroud);

    printf("\bEnter the width of the walkway: ");
    scanf("%d", &Width_of_Walkway);

    Larger_Circle_Radius = Radius_of_Playgroud + Width_of_Walkway;

    Area_of_Playground = PI * Radius_of_Playgroud * Radius_of_Playgroud;
    Area_of_larger_Circle = PI * Larger_Circle_Radius * Larger_Circle_Radius;

    Area_of_Walkway = Area_of_larger_Circle - Area_of_Playground;

    printf("\bThe area of the walkway is: %d\n", Area_of_Walkway);

    return 0;
}
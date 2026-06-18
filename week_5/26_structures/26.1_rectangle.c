#include <stdio.h>

// Create rectangle sturcture
typedef struct{
    double width, height;
} Rectangle;

Rectangle createRectangle(double w, double h);
double getPerimeter(Rectangle* r);

int main(void){

Rectangle rect = createRectangle(15.4, 12.3);

printf("%.2lf, %.2lf\n", rect.width, rect.height);
printf("Perimeter: %.2lf\n", getPerimeter(&rect));

return 0;
}

Rectangle createRectangle(double w, double h){
    Rectangle r = {w, h};
    return r;
}
double getPerimeter(Rectangle* r){
    return 2 * (r->width + r->height);
}
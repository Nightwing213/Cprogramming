
#include <stdio.h>

double fahrenheitToKelvin(double fahrenheit);

int main(void) {
    printf("%.3f\n", fahrenheitToKelvin(123));
    printf("%.3f\n", fahrenheitToKelvin(76));
    printf("%.3f\n", fahrenheitToKelvin(0));
    printf("%.3f\n", fahrenheitToKelvin(89));

    return 0;
}
double fahrenheitToKelvin(double fahrenheit){
    double kelvin;
    kelvin = ((fahrenheit - 32.0)*5.0 / 9.0) + 273.15;
    return kelvin;
}
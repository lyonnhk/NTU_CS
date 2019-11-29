#include <stdio.h>

int main(){
    float fahrenheit;
    float celcius;

    printf("Enter the temperature in degrees F: \n");
    scanf("%f", &fahrenheit);

    celcius = (fahrenheit-32)*(5.0/9.0);

    printf("Converted degree in C: %.2f \n", celcius);
    return 0;
}
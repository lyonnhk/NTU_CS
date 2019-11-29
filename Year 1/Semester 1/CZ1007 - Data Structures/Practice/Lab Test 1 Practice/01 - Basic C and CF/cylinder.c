#include <stdio.h>
#define PI 3.1416

int main(){
    
    int radius;
    int height;
    float volume;
    float surfaceArea;

    printf("Enter the radius: \n");
    scanf("%d", &radius);
    printf("Enter the height: \n");
    scanf("%d", &height);

    volume = PI*pow(radius, 2)*height;
    surfaceArea = (2*PI*radius*height) + (2*PI*pow(radius, 2));

    printf("The volume is: %.2f \n", volume);
    printf("The surface area is: %.2f \n", surfaceArea);
    return 0;
}
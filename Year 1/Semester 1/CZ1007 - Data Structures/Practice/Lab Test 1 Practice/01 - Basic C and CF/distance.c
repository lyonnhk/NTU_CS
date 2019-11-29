#include <stdio.h>
#include <math.h>

int main(){
    int x1;
    int x2;
    int y1;
    int y2;
    float calculatedDistance;

    printf("Enter first point x1 y1: \n");
    scanf("%d %d", &x1, &y1);
    printf("Enter second point x2 y2: \n");
    scanf("%d %d", &x2, &y2);

    calculatedDistance = sqrt(pow(x1-x2,2)+pow(y1-y2,2));

    printf("The distance is %.2f", calculatedDistance);
    return 0;
}
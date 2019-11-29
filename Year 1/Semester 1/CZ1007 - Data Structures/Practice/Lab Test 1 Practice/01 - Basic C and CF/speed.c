#include <stdio.h>

int main(){
    int distance;
    int timeT;
    float speedPerSec;

    printf("Enter distance (in km): \n");
    scanf("%d", &distance);
    printf("Enter time (in sec): \n");
    scanf("%d", &timeT);

    speedPerSec = (float)distance/timeT;

    printf("The speed is %.2f km/sec", speedPerSec);
    return 0;
}
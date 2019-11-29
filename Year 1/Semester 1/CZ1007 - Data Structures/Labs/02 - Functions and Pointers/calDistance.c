#include <stdio.h>
#include <math.h>
void inputXY(double *x1, double *y1, double *x2, double *y2);
void outputResult(double dist);
double calDistance1(double x1, double y1, double x2, double y2);
void calDistance2(double x1, double y1, double x2, double y2, double *dist); 

int main(){
    double x1, y1, x2, y2, distance = -1;

    inputXY(&x1, &y1, &x2, &y2);
    distance = calDistance1(x1, y1, x2, y2);
    printf("calDistance1(): ");
    outputResult(distance);
    printf("calDistance2(): ");
    outputResult(distance);
    return;
}

void inputXY(double *x1, double *y1, double *x2, double *y2){
    printf("Input x1 y1 x2 y2: \n");
    scanf("%lf %lf %lf %lf", x1, y1, x2, y2);
    return;
}

void outputResult(double dist){
    printf("%.2f \n", dist);
    return;
}

double calDistance1(double x1, double y1, double x2, double y2){
    double distance;
    distance = sqrt( pow( (x2 - x1), 2) + pow( (y2 - y1), 2) );
    return distance;
}

void calDistance2(double x1, double y1, double x2, double y2, double *dist){
	x1 -= x2;
    x1 *= x1;
    y1 -= y2;
    y1 *= y1;
    *dist = sqrt(x1 + y1);
    return;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void numDigits();
int numDigits1(int num);
void numDigits2(int num, int *result);
void digitPos();
int digitPos1(int num, int digit);
void digitPos2(int num, int digit, int *result);
void square();
int square1(int num);
void square2(int num, int *result);
void calDistance();
void inputXY(double *x1, double *y1, double *x2, double *y2);
void outputResult(double dist);
double calDistance1(double x1, double y1, double x2, double y2);
void calDistance2(double x1, double y1, double x2, double y2, double *dist);

int main()
{
    int choice;
    int number, digit, result = 0;
    do{
        printf("\nPerform the following functions ITERATIVELY: \n");
        printf("1: numDigits1()\n");
        printf("2: numDigits2()\n");
        printf("3: digitPos1()\n");
        printf("4: digitPos2()\n");
        printf("5: square1()\n");
        printf("6: square2()\n");
        printf("7: calDistance1()\n");
        printf("8: quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter the number: \n");
                scanf("%d", &number);
                printf("numDigits1(): %d \n", numDigits1(number));
                break;
            case 2:
                printf("Enter the number: \n");
                scanf("%d", &number);
                numDigits2(number, &result);
                printf("numDigits2(): %d \n", result);
                break;
            case 3:
                printf("Enter the number: \n");
                scanf("%d", &number);
                printf("Enter the digit: \n");
                scanf("%d", &digit);
                printf("digitPos1(): %d \n", digitPos1(number, digit));
                break;
            case 4:
                printf("Enter the number: \n");
                scanf("%d", &number);
                printf("Enter the digit: \n");
                scanf("%d", &digit);
                digitPos2(number, digit, &result);
                printf("digitPos2(): %d \n", result);
                break;
            case 5:
                printf("Enter the number: \n");
                scanf("%d", &number);
                printf("square1(): %d \n", square1(number));
                break;
            case 6:
                printf("Enter the number: \n");
                scanf("%d", &number);
                square2(number, &result);
                printf("square2(): %d \n", result);
                break;
            case 7:
                calDistance();
                break;
            default:
                printf("Program terminating ..... \n");
                break;
        }

    }while(choice < 8);
    return 0;
}

void calDistance(){
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
    return;
}

void square(){
    int number, result = 0;

    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("square1(): %d \n", square1(number));
    square2(number, &result);
    printf("square2(): %d \n", result);
    return;
}

int square1(int num){
    int sum = 0, count = 0, n = 1;
    if(num >= 0){
        while(count < num){
            if (n % 2 == 1){
                sum += n;
                count++;
            }
            n++;
        }
    }
    return sum;
}

void square2(int num, int *result){
    *result = square1(num);
    return;
}

void digitPos(){
    int number, digit, result = 0;

    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("Enter the digit: \n");
    scanf("%d", &digit);
    numDigits2(number, &result);
    printf("digitPos1(): %d \n", digitPos1(number, digit));
    digitPos2(number, digit, &result);
    printf("digitPos2(): %d \n", result);
    return;
}

int digitPos1(int num, int digit){
    int count = 0, reset = 1;
    if (num >= 0){
        while(num > 0){
            int n;
            n = num % 10;
            count++;
            if(n == digit){
                reset = 0;
                break;
            }
            num = num / 10;
        }
        if(reset == 1){
            count = 0;
        }
    }
    return count;
}

void digitPos2(int num, int digit, int *result){
    *result = digitPos1(num, digit);
    return;
}

void numDigits(){
    int number, result = 0;

    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("numDigits1(): %d \n", numDigits1(number));
    numDigits2(number, &result);
    printf("numDigits2(): %d \n", result);
    return;
}

int numDigits1(int num){
    int count = 0;
    if (num >= 0){
        while(num>0){
            int n;
            n = num % 10;
            count++;
            num = num / 10;
        }
    }
    return count;
}

void numDigits2(int num, int *result){
    *result = numDigits1(num);
    return;
}

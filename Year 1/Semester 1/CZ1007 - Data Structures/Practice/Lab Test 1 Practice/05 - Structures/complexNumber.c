#include <stdio.h>
#include <stdlib.h>
#include <math.h>
Complex add(Complex c1, Complex c2);
Complex mul(Complex c1, Complex c2);
Complex sub(Complex *c1, Complex *c2);
Complex div(Complex *c1, Complex *c2); 
typedef struct {
	double real;
	double imag;
} Complex;


int main(){
    int choice;
    char dummychar;
    Complex input1, input2, result;
    do{
        printf("Complex number operations:\n");
        printf("1 - addition\n");
        printf("2 - subtraction\n");
        printf("3 - multiplication\n");
        printf("4 - division\n");
        printf("5 - quit\n");
        printf("Enter your choice:\n");
        scanf("%d", &choice);
        if(choice == 5){
            return 0;
        }
        printf("Enter complex number 1:\n");
        scanf("%lf %lf", &input1.real, &input1.imag);
        printf("Enter complex number 2:\n");
        scanf("%lf %lf", &input2.real, &input2.imag);
        switch(choice){
            case 1:
                result = add(input1, input2);
                break;
            case 2:
                result = sub(&input1, &input2);
                break;
            case 3:
                result = mul(input1, input2);
                break;
            case 4:
                result = div(&input1, &input2);
                break;
        }
        printf("complex(): real %.2f image %.2f \n", result.real, result.imag);
    }while(choice < 5);
	return 0;
}

typedef struct{
	double real;
	double imag;
} Complex;

Complex add(Complex c1, Complex c2){
	Complex temp;
	temp.real = c1.real + c2.real;
	temp.imag = c1.imag + c2.imag;
	return temp;
}
Complex mul(Complex c1, Complex c2){
	Complex temp;
	temp.real = (c1.real * c2.real) - (c1.imag * c2.imag);
	temp.imag = (c1.real * c2.real) + (c1.imag * c2.imag);
	return temp;
}
Complex sub(Complex *c1, Complex *c2){
	Complex temp;
	temp.real = c1->real - c2->real;
	temp.imag = c1->imag - c2->imag;
	return temp;
}
Complex div(Complex *c1, Complex *c2){
	Complex temp;
	temp.real = ((c1->real * c2->real) + (c1->imag * c2->imag)) / ((c2->real * c2->real) + (c2->imag * c2->imag));
	temp.imag = ((c1->imag * c2->real) - (c1->real * c2->imag)) / ((c2->real * c2->real) + (c2->imag * c2->imag));
	return temp;
}
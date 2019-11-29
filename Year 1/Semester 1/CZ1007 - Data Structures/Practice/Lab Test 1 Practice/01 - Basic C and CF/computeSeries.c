#include <stdio.h>

int main(){
    int n, denominator = 1;
    float x, result = 1.0, numerator = 1.0;

    printf("Enter x: \n");
    scanf("%f", &x);

    for(n = 1; n <= 10; n++){
        for(int c = 1; c <= n; c++){
            denominator *= c;
        }
        //printf("%.2f^%d = %.2f , denominator = %d \n", x, n, pow(x,n), denominator);
        result += pow(x,n)/denominator;
        denominator = 1;
    }

    printf("Result = %.2f \n", result);
	return 0;
}
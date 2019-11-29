#include <stdio.h>
#define INIT_VALUE 999
int extEvenDigits1(int num);
void extEvenDigits2(int num, int *result);
int main()
{
   int number, result = INIT_VALUE;
   
   printf("Enter a number: \n");
   scanf("%d", &number);
   printf("extEvenDigits1(): %d\n", extEvenDigits1(number));        
   extEvenDigits2(number, &result);
   printf("extEvenDigits2(): %d\n", result);
   return 0;
}
int extEvenDigits1(int num) 
{  
    int result = 0, multiplier = 1;
    while (num != 0){
        int n = num % 10;
        if(n % 2 == 0){
            result += n*multiplier;
            multiplier *= 10;
        }
        num = num/10;
    }
    if(result == 0){
        result = -1;
    }
    return result;
}
void extEvenDigits2(int num, int *result) 
{  
    *result = extEvenDigits1(num);
    return;
}
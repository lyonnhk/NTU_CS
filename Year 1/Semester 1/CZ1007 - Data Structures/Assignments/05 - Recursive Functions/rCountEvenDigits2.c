#include <stdio.h> 
void rCountEvenDigits2(int num, int *result);
int main()
{
   int number, result;
   
   printf("Enter the number: \n");
   scanf("%d", &number);
   rCountEvenDigits2(number, &result);
   printf("rCountEvenDigits2(): %d\n", result); 
   return 0;
}
void rCountEvenDigits2(int num, int *result) 
{
    if(num<10){
        if(num%2 == 0){
            *result = 1;
        }else{
            *result = 0;
        }
    }else{
        if(num%2 == 0){
            rCountEvenDigits2(num/10, result);
            *result += 1;
        }else{
            rCountEvenDigits2(num/10, result);
        }
    }
}
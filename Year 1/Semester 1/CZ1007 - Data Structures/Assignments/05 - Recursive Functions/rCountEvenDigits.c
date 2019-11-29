#include <stdio.h>
int rCountEvenDigits1(int num); 
int main()
{
   int number;
   
   printf("Enter the number: \n");
   scanf("%d", &number);
   printf("rCountEvenDigits1(): %d\n", rCountEvenDigits1(number));
   return 0;
}
int rCountEvenDigits1(int num) 
{
    if(num<10){
        if(num%2 == 0){
            return 1;
        }else{
            return 0;
        }
    }else{
        if(num%2 == 0){
            return rCountEvenDigits1(num/10) + 1;
        }else{
            return rCountEvenDigits1(num/10);
        }
    }
}
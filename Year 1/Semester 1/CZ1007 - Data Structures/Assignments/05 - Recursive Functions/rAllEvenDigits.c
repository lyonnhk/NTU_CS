#include <stdio.h>
#define INIT_VALUE 999
int rAllEvenDigits1(int num);  
int main()
{
   int number, result=INIT_VALUE;

   printf("Enter a number: \n");
   scanf("%d", &number);
   result = rAllEvenDigits1(number);
   if (result == 1)
      printf("rAllEvenDigits1(): yes\n");
   else if (result == 0)
      printf("rAllEvenDigits1(): no\n");
   else
      printf("rAllevenDigits1(): error\n");
   return 0;
}
int rAllEvenDigits1(int num) 
{
    if (num < 10){
        if(num%2 == 0){
            return 1;
        }else{
            return 0;
        }
    }else{
        if((num%10)%2 == 0){
            if (rAllEvenDigits1(num/10) == 1){
                return 1;
            }else{
                return 0;
            }
        }else{
            return 0;
        }
    }
}
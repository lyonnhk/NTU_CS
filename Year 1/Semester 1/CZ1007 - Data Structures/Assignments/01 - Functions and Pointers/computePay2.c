#include <stdio.h>
double computePay1(int noOfHours, int payRate);
void computePay2(int noOfHours, int payRate, double *grossPay);
int main()
{
   int noOfHours, payRate;
   double grossPay;
           
   printf("Enter number of hours: \n");
   scanf("%d", &noOfHours);
   printf("Enter hourly pay rate: \n");
   scanf("%d", &payRate);
   printf("computePay1(): %.2f\n", computePay1(noOfHours, payRate));
   computePay2(noOfHours, payRate, &grossPay);
   printf("computePay2(): %.2f\n", grossPay);
   return 0;
}      
double computePay1(int noOfHours, int payRate)
{
    double pay = 0.0;
    if(noOfHours>160){
        pay += 160*payRate;
        noOfHours -= 160;
        pay += noOfHours*(payRate*1.5);
    }else{
        pay = noOfHours*payRate;
    }

    return pay;
}
void computePay2(int noOfHours, int payRate, double *grossPay)
{
    double pay = 0.0;
    if(noOfHours>160){
        pay += 160*payRate;
        noOfHours -= 160;
        pay += noOfHours*(payRate*1.5);
    }else{
        pay = noOfHours*payRate;
    }
    *grossPay = pay;
    return;
}
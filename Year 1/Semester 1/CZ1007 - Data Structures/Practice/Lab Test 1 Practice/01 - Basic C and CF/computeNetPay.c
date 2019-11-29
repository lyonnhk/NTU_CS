#include <stdio.h>

int main(){
    int hours;
    float tax, grossPay, netPay, basicHours = 40, basicRate = 6.0;

    printf("Enter hours of work: \n");
    scanf("%d", &hours);

    if(hours > 0){
        if(hours > 40){
            grossPay = basicHours*basicRate;
            hours -= basicHours;
            grossPay += hours*(basicRate*1.5);
        }else {
            grossPay = hours*basicRate;
        }

        if(grossPay < 1000){
            tax = grossPay*0.10;
        }else if (grossPay > 1000 && grossPay <= 1500){
            tax = 1000*0.10;
            tax += (grossPay - 1000)*0.20;
        }else{
            tax = 1000*0.10;
            tax += (grossPay - 1000)*0.20;
            if (grossPay > 0){
                tax += (grossPay - 500)*0.30;
            }
        }
        netPay = grossPay - tax;
        printf("Gross pay = %.2f \n", grossPay);
        printf("Tax = %.2f \n", tax);
        printf("Net pay = %.2f \n", netPay);
    }else{
        printf("Invalid working hours.");
    }
    return 0;
}
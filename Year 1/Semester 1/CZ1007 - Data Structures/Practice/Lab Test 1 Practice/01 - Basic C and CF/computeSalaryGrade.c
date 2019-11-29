#include <stdio.h>

int main(){
    int salary, merit;

    printf("Enter the salary: \n");
    scanf("%d", &salary);
    printf("Enter the merit: \n");
    scanf("%d", &merit);

    if (salary >= 700 && salary <= 899 && merit >= 20){
        printf("The grade: A \n");
    }else if (salary >= 600 && salary <= 799 && merit >= 10){
        printf("The grade: B \n");
    }else if (salary >= 500 && salary <= 649){
        printf("The grade: C \n");
    }else {
        printf("Salary range is below $500");
    }

    return 0;
}
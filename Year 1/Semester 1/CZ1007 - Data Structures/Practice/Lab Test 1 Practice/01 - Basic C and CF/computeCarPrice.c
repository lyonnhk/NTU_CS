#include <stdio.h>

int main(){
    int list, coe = 0, cat;
    double discounted, luxury = 0, gst, total;

    printf("Please enter the list price: \n");
    scanf("%d", &list);
    printf("Please enter the category: \n");
    scanf("%d", &cat);

    switch(cat){
        case 1:
            coe = 70000;
            break;
        case 2:
            coe = 80000;
            break;
        case 3:
            coe = 23000;
            break;
        case 4:
            coe = 600;
            break;
        default:
            break;
    }
    list = (list * 0.9) * 1.03;
    if(list > 100000){
        list *= 1.1;
    }
    total = coe + list;

    printf("Total price is $%.2lf \n", total);
    return 0;
}
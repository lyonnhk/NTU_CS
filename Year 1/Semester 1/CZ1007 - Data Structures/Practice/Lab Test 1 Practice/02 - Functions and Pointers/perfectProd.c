#include <stdio.h>
int perfectProd1(int num);
void perfectProd2(int num, int *prod); 

int main(){
    int number, result = 0;

    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("Calling perfectProd1() \n");
    printf("perfectProd1(): %d \n", perfectProd1(number));
    printf("Calling perfectProd2() \n");
    perfectProd2(number, &result);
    printf("perfectProd2(): %d \n", result);
	return 0;
}

int perfectProd1(int num){
	int total = 1;
	for(int i  = 1; i < num; i++){
			int sum = 0, j = 1;
			while(j < i){
				if(i % j == 0){
					sum += j;
				}
				j++;
			}
			if(sum == i){
				printf("Perfect number: %d \n", sum);
				total *= sum;
			}
	 }
	return total;
}

void perfectProd2(int num, int *prod){
	*prod = 1;
	for(int i  = 1; i < num; i++){
			int sum = 0, j = 1;
			while(j < i){
				if(i % j == 0){
					sum += j;
				}
				j++;
			}
			if(sum == i){
				printf("Perfect number: %d \n", sum);
				*prod *= sum;
			}
	 }
}
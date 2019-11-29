#include <stdio.h>
#define INIT_VALUE 999
int extOddDigits1(int num);
void extOddDigits2(int num, int *result); 

int main(){
    int number, result = INIT_VALUE;

    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("extOddDigits1(): %d \n", extOddDigits1(number));
    extOddDigits2(number, &result);
    printf("extOddDigits2(): %d \n", result);
	return 0;
}

int extOddDigits1(int num){
	int newNum = -1, count = 0, multiplier = 10;
	while(num>0){
		if((num%10)%2 == 1){
			if(newNum == -1){
				newNum = num%10;
				count++;
			}else{
				newNum += multiplier*(num%10);
				count++;
				multiplier *= 10;
			}
		}
		num /= 10;
	}
	return newNum;
}

void extOddDigits2(int num,int *result){
	int count = 0, multiplier = 10;
	while(num>0){
		if((num%10)%2 == 1){
			if(*result == 999){
				*result = num%10;
				count++;
			}else{
				*result += multiplier*(num%10);
				count++;
				multiplier *= 10;
			}
		}
		num /= 10;
	}
	if(*result == 999){
		*result = -1;
	}
}
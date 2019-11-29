#include <stdio.h>
int numDigits1(int num);
void numDigits2 (int num, int *result);

int main(){
    int number, result = 0;

    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("numDigits1(): %d \n", numDigits1(number));
    numDigits2(number, &result);
    printf("numDigits2(): %d \n", result);
    return;
}


int numDigits1(int num){
    int count = 0;
    if (num >= 0){
        while(num>0){
            int n;
            n = num % 10;
            count++;
            num = num / 10;
        }
    }
    return count;
}

void numDigits2(int num, int *result){
    //*result = numDigits1(num);
	
	*result = 0;
	do{
		(*result)++;
		num /= 10;
	}while(num > 0);
	
    return;
}
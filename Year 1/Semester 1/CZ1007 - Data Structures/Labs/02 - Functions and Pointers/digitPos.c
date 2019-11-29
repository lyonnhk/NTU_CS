#include <stdio.h>
int digitPos1(int num, int digit);
void digitPos2 (int num, int digit, int *result);

int main(){
    int number, digit, result = 0;

    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("Enter the digit: \n");
    scanf("%d", &digit);
    numDigits2(number, &result);
    printf("digitPos1(): %d \n", digitPos1(number, digit));
    digitPos2(number, digit, &result);
    printf("digitPos2(): %d \n", result);
    return;
}

int digitPos1(int num, int digit){
    int count = 0, reset = 1;
    if (num >= 0){
        while(num > 0){
            int n;
            n = num % 10;
            count++;
            if(n == digit){
                reset = 0;
                break;
            }
            num = num / 10;
        }
        if(reset == 1){
            count = 0;
        }
    }
    return count;
}

void digitPos2(int num, int digit, int *result){
    //*result = digitPos1(num, digit);
	
	int pos = 0;
    *result = 0;
    do {
        pos++;
        if (num%10 == digit){
            *result = pos;
            break;
        }
        num /= 10;
    } while (num > 0);
    return;
}
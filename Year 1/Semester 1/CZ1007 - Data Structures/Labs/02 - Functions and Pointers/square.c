#include <stdio.h>
int square1(int num);
void square2(int num, int *result);

int main(){
    int number, result = 0;

    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("square1(): %d \n", square1(number));
    square2(number, &result);
    printf("square2(): %d \n", result);
    return;
}

int square1(int num){
    int sum = 0, count = 0, n = 1;
    if(num >= 0){
        while(count < num){
            if (n % 2 == 1){
                sum += n;
                count++;
            }
            n++;
        }
    }
    return sum;
}

void square2(int num, int *result){
    //*result = square1(num);
	
	int i = 0;
    int k = 1;
    *result = 0;
    while(i < num){
        *result += k;
        k += 2;
        i++;
    }
    return;
}
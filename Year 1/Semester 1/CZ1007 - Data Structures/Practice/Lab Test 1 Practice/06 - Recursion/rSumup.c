#include <stdio.h>
int rSumup1(int n);
void rSumup2(int n, int *result);

int main(){
    int n, result;

    printf("Enter a number: \n");
    scanf("%d", &n);
    printf("rSumup1(): %d \n", rSumup1(n));
    rSumup2(n, &result);
    printf("rSumup2(): %d \n", result);
	return 0;
}

int rSumup1(int n){
	int sum = 0;
	if(n == 1){
		sum = 1;
		return sum;
	}else{
		sum = n + rSumup1(n-1);
		return sum;
	}
}
void rSumup2(int n, int *result){
*result = 0;
	if(n == 1){
		*result = 1;
	}else{
		*result = n + rSumup1(n-1);
	}
}
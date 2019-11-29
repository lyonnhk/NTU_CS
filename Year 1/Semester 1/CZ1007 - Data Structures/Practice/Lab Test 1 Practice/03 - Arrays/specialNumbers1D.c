#include <stdio.h>
void specialNumbers1D(int ar[], int num, int *size); 

int main(){
    int a[20], i, size = 0, num;

    printf("Enter a number (between 100 and 999): \n");
    scanf("%d", &num);
    specialNumbers1DD(a, num, &size);
    printf("specialNumbers1D(): ");
    for(i = 0; i < size; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
	return 0;
}

void specialNumbers1DD(int ar[], int num, int *size){
	*size = 0;
	for(int i = 101; i < num; i++){
		int temp = i, sum = 0;
		while(temp>0){
			int multiple;
			for(int j = 1;  j<=3; j++ ){
				multiple *= temp%10;
			}
			sum += multiple;
			temp /= 10;
		}
		if(i == sum){
			ar[*size] = i;
			(*size)++;
		}
	}
}
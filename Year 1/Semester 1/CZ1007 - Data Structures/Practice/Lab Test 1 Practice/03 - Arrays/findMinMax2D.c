#include <stdio.h>
#define SIZE 5
void findMinMax2D(int ar[SIZE][SIZE], int *min, int *max); 

int main(){
    int A[5][5];
    int i, j, min, max;

    printf("Enter the matrix data (%dx%d): \n", SIZE, SIZE);
    for(i = 0; i<5; i++){
        for(j = 0; j<5; j++){
            scanf("%d", &A[i][j]);
        }
    }
    findMinMax2DD(A, &min, &max);
    printf("min = %d \nmax = %d", min, max);
	return 0;
}

void findMinMax2DD(int ar[SIZE][SIZE], int *min, int *max){
	*min = ar[0][0];
	*max = ar[0][0];
	for(int i = 0; i<5; i++){
		for(int j = 0; j<5; j++){
			if(ar[i][j] < *min){
				*min = ar[i][j];
			}
			if(ar[i][j] > *max){
				*max = ar[i][j];
			}
		}
	}
}
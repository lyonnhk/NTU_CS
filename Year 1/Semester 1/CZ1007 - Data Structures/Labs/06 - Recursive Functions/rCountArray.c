#include <stdio.h>
#define SIZE 20
int rCountArray(int array[], int n, int a); 

int main(){
    int array[SIZE];
    int index, count, target, size;
    count = 0;

    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d numbers: \n", size);
    for(index = 0; index < size; index++){
        scanf("%d", &array[index]);
    }
    printf("Enter the target number: \n");
    scanf("%d", &target);
    count = rCountArray(array, size, target);
    printf("rCountArray(): %d \n", count);
}

int rCountArray(int array[], int n, int a){
    if(n == 0){
        if(array[n] == a){
            return 1;
        }else{
            return 0;
        }
    }else{
        if(array[n] == a){
            return rCountArray(array, n-1, a) + 1;
        }else{
            return rCountArray(array, n-1, a);
        }
    }
}
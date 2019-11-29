#include <stdio.h>
void swapMinMax1D(int ar[], int size);
int main() 
{
   int ar[50],i,size;
   
   printf("Enter array size: \n");
   scanf("%d", &size);
   printf("Enter %d data: \n", size);
   for (i=0; i<size; i++) 
      scanf("%d",ar+i);
   swapMinMax1D(ar, size);
   printf("swapMinMax1D(): ");
   for (i=0; i<size; i++) 
      printf("%d ",*(ar+i)); 
   return 0;
}
void swapMinMax1D(int ar[], int size)
{
    int i, min = 0, max = 0, temp = 0;
    for(i = 0; i < size; i++){
        if(ar[i] > ar[max] || ar[i] == ar[max]){
            if(ar[min] > ar[i] || ar[min] == ar[i]){
                min = i;
            }
            max = i;
        }else if(ar[min] > ar[i] || ar[min] == ar[i]){
            min = i;
        }
    }
    temp = ar[min];
    ar[min] = ar[max];
    ar[max] = temp;
}
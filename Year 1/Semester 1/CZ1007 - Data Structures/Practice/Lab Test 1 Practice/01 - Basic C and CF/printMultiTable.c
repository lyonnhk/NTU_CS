#include <stdio.h>

int main(){
    int row, col;
    int i, input;

    printf("Enter an input number (between 1 and 9): \n");
    scanf("%d", &input);
    printf("Multiplication Table: \n");

    if(input > 0){
        row = 1, col = 1;
        printf("\t");
        while(row <= input){
            printf("\t%d", row);
            row++;
        }
        printf("\n");
        for(row = 1; row <= input; row++){
            printf("\t%d\t", row);
            for(col = 1; col <= input; col++){
                if(col <= row){
                    i = row * col;
                    printf("%d\t", i);
                }
            }
            printf("\n");
        }

    }else{
        printf("Invalid input. Enter a positive number. \n");
    }
	return 0;
}
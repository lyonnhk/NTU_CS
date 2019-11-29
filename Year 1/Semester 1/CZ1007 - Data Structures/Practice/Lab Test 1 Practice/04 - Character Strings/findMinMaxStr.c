#include <stdio.h>
#include <string.h>
#define SIZE 10
void findMinMaxStr(char word[][40], char *first, char *last, int size); 

int main(){
    char word[SIZE][40];
    char first[40], last[40];
    int i, size;

    printf("Enter size: \n");
    scanf("%d", &size);
    printf("Enter %d words: \n", size);
    for(i = 0; i<size; i++){
        scanf("%s", word[i]);
    }
    findMinMaxStrr(word, first, last, size);
    printf("First word = %s, Last word = %s \n", first, last);
	return 0;
}

void findMinMaxStrr(char word[][40], char *first, char *last, int size){

	strcpy(first, word[0]);
	strcpy(last, word[0]);
	int i, result = -1, result2 = -1;
	for(i = 0; i<size; i++){
		result = strcmp(word[i], first);
		result2 = strcmp(word[i], last);
		if(result < 0){
			strcpy(first, word[i]);
		}else if(result2 > 0){
			strcpy(last, word[i]);
		}
		if(result2 > 0){
			strcpy(last, word[i]);
		}else if(result < 0){
			strcpy(first, word[i]);
		}
	}
}
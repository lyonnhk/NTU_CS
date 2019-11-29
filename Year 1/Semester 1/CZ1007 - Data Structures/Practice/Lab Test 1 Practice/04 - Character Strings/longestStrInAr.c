#include <stdio.h>
#include <string.h>
#define N 20
char *longestStrInAr(char str[N][40], int size, int *length);

int main(){
    int i, size, length;
    char str[N][40], first[40], last[40], *p;
    char dummychar;

    printf("Enter array size: \n");
    scanf("%d", &size);
    scanf("%c", &dummychar);
    for(i = 0; i<size; i++){
        printf("Enter string %d: \n", i+1);
        gets(str[i]);
    }
    p = longestStrInAr(str, size, &length);
    printf("longest: %s \nlength: %d \n", p, length);
	return 0;
}

char *longestStrInAr(char str[N][40], int size, int *length){
	int i, j, count = 0, pos = 0;
	*length = 0;
	for(i = 0; i<size; i++){
		for(j = 0; str[i][j] != '\0'; j++){
			count++;
		}
		if(*length < count){
			*length = count;
			pos = i;
		}
		count = 0;
	}
	return str[pos];
}
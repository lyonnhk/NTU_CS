#include <stdio.h>
#define INIT_VALUE 999
int findSubstring(char *str, char *substr);

int main(){
    char str[40], substr[40];
    int result = INIT_VALUE;

    printf("Enter the string: \n");
    gets(str);
    printf("Enter the substring: \n");
    gets(substr);
    result = findSubstringg(str, substr);
    if(result == 1){
        printf("findSubstring(): Is a substring \n");
    }else if(result == 0){
        printf("findSubstring(): Not a substring \n");
    }else{
        printf("findSubstring(): An error \n");
    }
	return 0;
}

int findSubstringg(char *str, char *substr){
	int substrLen, count = 0, i, j = 0;
	for(substrLen = 0; substr[substrLen] != '\0'; ++substrLen);

	for(i = 0; str[i] != '\0'; i++){
		if(str[i] == substr[j]){
			count++;
			if((j == (substrLen-1)) && (count == substrLen)){
				return 1;
			}
			j++;
		}else{
			j = 0;
			count = 0;
		}
	}
	return 0;
}
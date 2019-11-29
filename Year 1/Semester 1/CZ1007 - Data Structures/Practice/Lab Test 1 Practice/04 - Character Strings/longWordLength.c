#include <stdio.h>
int longWordLength(char *s); 

int main(){
    char str[80];

    printf("Enter a string: \n");
    gets(str);
    printf("longWordLength(): %d \n", longWordLength(str));
	return 0;
}

int longWordLength(char *s){
	int longestCount = 0, count = 0, i = 0;
	for(i = 0; s[i] != '\0'; i++){
		if(((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) && s[i] != ' ' ){
			count++;
		}else if(s[i] == ' '){
			if(longestCount < count){
				longestCount = count;
				count = 0;
			}
			count = 0;
		}
	}
	if(longestCount < count){
		longestCount = count;
	}
	return longestCount;
}
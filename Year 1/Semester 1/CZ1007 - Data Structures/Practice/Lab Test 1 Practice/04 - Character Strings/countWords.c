#include <stdio.h>
int countWords(char *s); 

int main(){
    char str[50];

    printf("Enter the string: \n");
    gets(str);
    printf("countWords(): %d", countWords(str));
	return 0;
}

int countWords(char *s){
	int i, words = 1;
	for(i = 0; s[i] != '\0'; i++){
		if(s[i] == ' ' && s[i+1] != '\0'){
			words++;
		}
	}
	return words;
}
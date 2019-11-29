#include <stdio.h>
#include <ctype.h>
void convertCaseStr(char *str); 

int main(){
	char str[80];

    printf("Enter a string: \n");
    gets(str);
    convertCaseStrr(str);
    printf("convertCaseStr(): %s \n", str);
	return 0;
}

void convertCaseStrr(char *str){
	for(int i = 0; str[i] != '\0'; i++){
		if(str[i] >= 'a' && str[i] <= 'z'){
			str[i] = str[i]-32;
		}else if(str[i] >= 'A' && str[i] <= 'Z'){
			str[i] = str[i]+32;
		}
	}
}
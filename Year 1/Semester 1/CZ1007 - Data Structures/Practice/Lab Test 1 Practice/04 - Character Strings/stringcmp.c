#include <stdio.h>
#define INIT_VALUE 999
int stringcmp(char *s1, char *s2); 

int main(){
    char source[80], target[80];
    int result = INIT_VALUE;

    printf("Enter a source string: \n");
    gets(source);
    printf("Enter a target string: \n");
    gets(target);
    result = stringCmpp(source, target);
    if(result == 1){
        printf("stringcmp(): greater than");
    }else if(result == 0){
        printf("stringcmp(): equal");
    }else if(result == -1){
        printf("stringcmp(): less than");
    }else{
        printf("stringcmp(): error");
    }
    printf("\n");
	return 0;
}

int stringCmpp(char *s1, char *s2){
	int i, s1Size = 0, s2Size = 0, cmp = 1;
	for(s1Size = 0; s1[s1Size] != '\0'; s1Size++);
	for(s2Size = 0; s2[s2Size] != '\0'; s2Size++);

	if(s1Size == s2Size){
		cmp = 0;
		for(i = 0; i<s1Size; i++){
			if(s1[i] > s2[i] && cmp == 0){
				cmp = 1;
			}else if (s1[i] < s2[i] && cmp == 0){
				cmp = -1;
			}else{
				cmp = 0;
			}
		}
	}else if(s1Size < s2Size){
		cmp = -1;
		for(i = 0; i<s1Size; i++){
			if (s1[i] >= s2[i] && cmp == -1){
				cmp = 1;
			}else{
				cmp = -1;
			}
		}
	}
	return cmp;
}

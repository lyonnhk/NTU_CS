#include <stdio.h>
void insertChar(char *str1, char *str2, char ch); 

int main(){
    char a[80], b[80];
    char ch;

    printf("Enter a string: \n");
    gets(a);
    printf("Enter a character to be inserted: \n");
    ch = getchar();
    insertCharr(a, b, ch);
    printf("insertChar(): \n");
    puts(b);
	return 0;
}

void insertCharr(char *str1, char *str2, char ch){
	int i = 0, j = 0, k = 0;;
	do{
		str2[k] = str1[i];
		j++;
		i++;
		k++;
		if(j == 3){
			str2[k] = ch;
			k++;
			j = 0;
		}
	}while(str1[i] != '\0');
	str2[k] = '\0';
}
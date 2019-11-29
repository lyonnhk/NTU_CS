#include <stdio.h>

int main(){
    char ch;

    printf("Enter a character: \n");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z'){
        printf("Lower case letter");
    }else if(ch >= 'A' && ch <= 'Z'){
        printf("Upper case letter");
    }else if(ch >= '0' && ch <= '9'){
        printf("Digit");
    }else{
        printf("Other symbols/characters");
    }

    return 0;
}
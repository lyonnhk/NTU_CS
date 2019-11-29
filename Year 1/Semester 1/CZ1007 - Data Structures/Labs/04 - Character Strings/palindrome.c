#include <stdio.h>
#define INIT_VALUE -1000
int palindrome(char *str);

int main(){
    char str[80];
    int result = INIT_VALUE2;

    printf("Enter a string: \n");
    gets(str);
    result = palindrome(str);
    if(result == 1){
        printf("palindrome(): A palindrome \n");
    }else if(result == 0){
        printf("palindrome(): Not a palindrome \n");
    }else{
        printf("An error \n");
    }
}

int palindrome(char *str){
    int len, i, palindrome = 1;
    for(len = 0; str[len] != '\0'; ++len);
    for(i = 0; i < len/2; i++){
        if(str[i] != str[len-1-i]){
            palindrome = 0;
        }
    }
    return palindrome;
}
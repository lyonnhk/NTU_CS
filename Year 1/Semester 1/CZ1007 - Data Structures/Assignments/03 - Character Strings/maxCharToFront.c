#include <stdio.h>
void maxCharToFront(char *str);
int main() 
{
   char str[80];
   
   printf("Enter a string: \n");
   gets(str); 
   printf("maxCharToFront(): ");  
   maxCharToFront(str); 
   puts(str);
   return 0;
}
void maxCharToFront(char *str) 
{
    int i, highest = 0;
    char replace;
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] > str[highest]){
            highest = i;
        }
    }
    replace = str[highest];
    for(i = highest; i > 0; i--){
        str[i] = str[i-1];
    }
    str[0] = replace;
}
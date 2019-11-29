#include <stdio.h>
int countSubstring(char str[], char substr[]);
int main() 
{
   char str[80],substr[80];
 
   printf("Enter the string: \n"); 
   gets(str); 
   printf("Enter the substring: \n"); 
   gets(substr);
   printf("countSubstring(): %d\n", countSubstring(str, substr));     
   return 0;
}
int countSubstring(char str[], char substr[])
{
    int len, subStrLen, counter = 0, compare;
    for(len = 0; str[len]; ++len);
    for(subStrLen = 0; substr[subStrLen]; ++subStrLen);
    for(int i = 0; i < len; i++){
        compare = 0;
        if(str[i] == substr[0]){
            for(int j = 0; j < subStrLen; j++){
                if (str[i+j] == substr[j]){
                    compare++;
                }
            }
            if(compare == subStrLen){
                counter++;
            }
        }
    }
    return counter;
}
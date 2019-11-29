#include <stdio.h>
typedef struct {
   char source;
   char code;
} Rule;
void createTable(Rule *table, int *size);
void printTable(Rule *table, int size);
void encodeChar(Rule *table, int size, char *s, char *t);
int main() 
{
   char s[80], t[80], dummychar;
   int size, choice;
   Rule table[100];
     
   printf("Select one of the following options:\n");
   printf("1: createTable()\n");     
   printf("2: printTable()\n");
   printf("3: encodeChar()\n");      
   printf("4: exit()\n");    
   do {
      printf("Enter your choice: \n");
      scanf("%d", &choice);  
      switch (choice) {
         case 1:           
            printf("createTable(): \n");
            createTable(table, &size);           
            break;               
         case 2:           
            printf("printTable(): \n");
            printTable(table, size);           
            break;               
         case 3:       
            scanf("%c",&dummychar);
            printf("Source string: \n");
            gets(s);
            encodeChar(table,size,s,t);
            printf("Encoded string: %s\n", t);   
            break;   
         default: 
            break;
      } 
   } while (choice < 4);
   return 0;
}
void printTable(Rule *table, int size)
{
   int i;

   for (i=0; i<size; i++)
   {
      printf("%d: %c->%c\n", i+1, table->source, table->code);
      table++;
   }
}
void createTable(Rule *table, int *size)
{
    printf("Enter number of rules: \n");
    scanf("%d", size);
    for(int i = 0; i< (*size); i++){
        printf("Enter rule %d: \n", i+1);
        printf("Enter source character: \n");
        scanf("\n");
        gets(&table[i].source);
        printf("Enter code character: \n");
        gets(&table[i].code);
    }
}
void encodeChar(Rule *table, int size, char *s, char *t) 
{
    int i = 0;
    for(; s[i] != '\0'; i++){
        for(int j = 0; table[j].source != '\0'; j++){
            if(s[i] == table[j].source){
                t[i] = table[j].code;
                break;
            }else{
                t[i] = s[i];
            }
        }
    }
    t[i] = '\0';
}
#include <stdio.h>
#include <string.h>
#define MAX 100
typedef struct {
   char name[20];
   char telno[20];
} PhoneBk;
void printPB(PhoneBk *p, int size);
int readin(PhoneBk *p);
void search(PhoneBk *p, int size, char *target);
int main()
{
   PhoneBk s[MAX];
   char t[20];
   int size=0, choice, dummychar;
    
   printf("Select one of the following options: \n");
   printf("1: readin()\n");     
   printf("2: search()\n");
   printf("3: printPB()\n");
   printf("4: exit()\n");      
   do {
      printf("Enter your choice: \n");
      scanf("%d", &choice);
      switch (choice) {
         case 1:    
            scanf("%c", &dummychar);       
            size = readin(s); 
            break;
         case 2: 
            scanf("%c", &dummychar);  
            printf("Enter search name: \n");
            gets(t);
            search(s,size,t);                   
            break;
         case 3: 
            printPB(s, size);
            break;         
      }
   } while (choice < 4);
   return 0;
}
void printPB(PhoneBk *p, int size){
    printf("The phonebook list: \n");
    if(size > 0){
        for(int i = 0; i < size; i++){
            printf("Name: %s \n", p[i].name);
            printf("Telno: %s \n", p[i].telno);
        }
    }else{
        printf("Empty phonebook \n");
    }
}

int readin(PhoneBk *p){
    int size = 0;
    do{
        printf("Enter name: \n");
        scanf("\n");
        gets(p[size].name);
        if(strcmp(p[size].name, "#") != 0){
            printf("Enter tel: \n");
            scanf("%s", p[size].telno);
            size++;
        }else{
            break;
        }
    }while(1);
    return size;
}

void search(PhoneBk *p, int size, char *target){
    if(size > 0){
        for(int i = 0; i < size; i++){
            if(strcmp(p[i].name, target) == 0){
                printf("Name = %s, Tel = %s \n", p[i].name, p[i].telno);
                return;
            }
        }
    }
    printf("Name not found! \n");
}
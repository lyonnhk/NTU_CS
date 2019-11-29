#include <stdio.h>
typedef struct {
	char name[20];
	int age;
} Person;
void readData(Person *p);
Person findMiddleAge(Person *p); 

int main(){
    Person man[3], middle;

    readData(man);
    middle = findMiddleAge(man);
    printf("findMiddleAge(): %s %d \n", middle.name, middle.age);
	return 0;
}

void readData(Person *p){
	int i;
	char dummychar;
	for(i = 0; i<3; i++){
		printf("Enter person %d: \n", i+1);
		scanf("%s %d", &p[i].name, &p[i].age);
		scanf("%c", &dummychar);
	}
}
Person findMiddleAge(Person *p){
	int i;
	int lowestPos = 0, highestPos = 0, middlePos = 0, temp;
	for(i = 0; i<3; i++){
		if(p[i].age < p[lowestPos].age){
			temp = lowestPos;
			lowestPos = i;
			if(p[temp].age > p[middlePos].age){
				highestPos = middlePos;
				middlePos = temp;
			}
		}else if(p[i].age > p[highestPos].age){
			temp = highestPos;
			highestPos = i;
			if(p[temp].age > p[middlePos].age){
				lowestPos = middlePos;
				middlePos = temp;
			}
		}else{
			middlePos = i;
		}
	}
	return p[middlePos];
}
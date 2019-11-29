#include <stdio.h>
int rAge(int studRank); 

int main(){
    int studRank;

    printf("Enter the student rank: \n");
    scanf("%d", &studRank);
    printf("rAge(): %d \n", rAgee(studRank));
	return 0;
}

int rAgee(int studRank){
	if(studRank == 1){
		return 10;
	}else{
		return 2 + rAgee(studRank-1);
	}
}
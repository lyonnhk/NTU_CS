#include <stdio.h>
#include <string.h>
struct student{
 char name[20]; /* student name */
 double testScore; /* test score */
 double examScore; /* exam score */
 double total; /* total = (testScore+examScore)/2 */
};
double average(); 

int main(){
	printf("average(): &.2f\n" , average());
}

double average(){
    struct student Studs;
    int count = 0;
    double average = 0.0;
    while(1){
        printf("Enter student name: \n");
        scanf("\n");
        gets(&Studs.name);
        if( (strcmp(&Studs.name, "END")) == 0){
            double retVal = average/count;
            return retVal;
        }
        printf("Enter test score: \n");
        scanf("%lf", &Studs.testScore);
        printf("Enter exam score: \n");
        scanf("%lf", &Studs.examScore);
        Studs.total = (Studs.testScore + Studs.examScore)/2;
        printf("%s total = %.2lf \n", Studs.name, Studs.total);
        count += 1;
        average += Studs.total;
    }
}
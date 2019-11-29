// CX1007 Data Structures
// Week 9 Lab Tutorial - DynamicData-Linked Lists
// Template for Q2, Q3, and Q4

//#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

////////////////////////////////////////////////////////////

typedef struct _listnode{
	int item;
	struct _listnode *next;
} ListNode;

//////////////////////////////////////////////////////

int searchList(ListNode *head, int value);

//////////////////////////////////////////////////////

void main()
{
	ListNode *head, *p, *temp;
	int n;


	head=NULL;
	p=NULL;		// pointing to the last node in the list
	printf("Enter a list of numbers, terminated by the value -1:\n");

 ////////////////////////////////////////////////////////////////////

 // Question 2
 //Write your program code here
    scanf("%d", &n);
    while(n != -1){
        if(head == NULL){
            head = malloc(sizeof(ListNode));
            temp = head;
        }else{
            temp->next = malloc(sizeof(ListNode));
            temp = temp->next;
        }
        temp->item = n;
        scanf("%d", &n);
    }
    temp->next = NULL;

    p = head;
    printf("Current list: ");
    while(p != NULL){
        printf("%d ", p->item);
        p = p->next;
    }
    printf("\n");
//////////////////////////////////////////////////////////////////////

//search for a value in the list. Q3

	printf("Enter value to search for:");
	scanf("%d", &n);
	searchList(head,n);

/////////////////////////////////////////////////////////

    //free up memory for question 4
	//this part is wrong. It will cause problems.
/*	p = head;
	while (p!= NULL) {
		free(p);
		p=p->next;
	}
*/


    // Question 4
	//rewrite the free up using temporary pointer temp.
	
    p = head;
	while (p != NULL) {
        temp = p->next;
		free(p);
		p = temp;
	}
    p = temp = head = NULL;
/////////////////////////////////////////////////////////

}

////////////////////////////////////////////////////////////

int searchList(ListNode *head, int value)
{

////////////////////////////////////////////////////////////////////

 // Question 3
 //Write your program code here
    int index = 0;
    while(head != NULL){
        if(head->item == value){
            printf("Value %d found at index %d \n", value, index);
            return 0;
        }
        index++;
        head = head->next;
    }
    return 0;
//////////////////////////////////////////////////////////////////////
}
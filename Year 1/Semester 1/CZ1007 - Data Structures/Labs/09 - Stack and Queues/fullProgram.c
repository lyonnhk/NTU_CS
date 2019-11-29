//CE1007/CZ1007 Data Structures
// Week 11 Lab Tutorial - Stacks and Queues

////////////////////////////////////////////////////////////

#include "stdio.h"
#include <stdlib.h>

//////////////////////////////////   linked list //////////////////////////////////////////////

typedef struct _listnode{
	int item;
	struct _listnode *next;
} ListNode;

typedef struct _linkedlist{
	int size;
	ListNode *head;
	ListNode *tail;
} LinkedList;

////////////////////////////////// stack    //////////////////////////////////////////////
typedef struct stack{
	LinkedList ll;
} Stack;

//////////////////////////////////// queue ////////////////////////////////////////////

typedef struct _queue{
	LinkedList ll;
} Queue;

////////////////////////////////////////////////////////////////////////////////
void printList(ListNode *head);
ListNode * findNode(LinkedList *ll, int index);
int insertNode(LinkedList *ll, int index, int value);
int removeNode(LinkedList *ll, int index);

//////////////////////////////////////////////////

void push(Stack *s, int item);
int pop(Stack *s);
int peek(Stack *s);
int isEmptyStack(Stack *s);

//////////////////////////////////////////////////

void enqueue(Queue *q, int item);
int dequeue(Queue *q);
int isEmptyQueue(Queue *s);

///////////////////////////////////////////////////////////////
// four questions
void removeUntil(Stack *s, int value);
void recursiveReverse(Queue *q);
int palindrome(char *word);
int balanced(char *expression);

//////////////////////////////////////////////////////////////////
/////

int main()
{
	Stack s;
	Queue q;
	int item[] = { 1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1 };
	int i;
	char *word1 = "A man a plan a canal Panama";
	char *word2 = "Superman in the sky";

	//for question 1
	//initialize the stack
	s.ll.head = NULL;
	s.ll.size = 0;
	s.ll.tail = NULL;

	for (i = 0; i<11; i++)
		push(&s, item[i]);

	printList(s.ll.head);
	removeUntil(&s, 5);
	printList(s.ll.head);

	//for question 2
	//initialize the queue
	q.ll.head = NULL;
	q.ll.size = 0;
	q.ll.tail = NULL;

	for (i = 0; i<10; i++)
		enqueue(&q, i);
	printList(q.ll.head);
	recursiveReverse(&q);
	printList(q.ll.head);

	//for question 3
	palindrome(word1); //*word1="A man a plan a canal Panama";
	palindrome(word2);// *word2="Superman in the sky";


	//for question 4
	if (balanced("()")) printf("not balanced!\n");
	else
		printf("balanced!\n");

	if (balanced("[()]")) printf("not balanced!\n");
	else
		printf("balanced!\n");

	if (balanced("{[]()[]}")) printf("not balanced!\n");
	else
		printf("balanced!\n");

	if (balanced("[({{)])")) printf("not balanced!\n");
	else
		printf("balanced!\n");

	return 0;
}

////////////////////////////////////////////////////////////////
//Question 1 

void removeUntil(Stack *s, int value){
    while(peek(s) != value){
        pop(s);
    }
}

////////////////////////////////////////////////////////////
//Question 2
// queue > linkedlist(head, tail, size) > next
void recursiveReverse(Queue *q){
    //ListNode *a = q->ll->head;
    if(isEmptyQueue(q)){
        return;
    }else{
        int frontItem;
        frontItem = dequeue(q);
        recursiveReverse(q);
        enqueue(q, frontItem);
    }
}

////////////////////////////////////////////////////////////
//Question 3

int palindrome(char *word){
    Queue q;
	q.ll.head = NULL;
	q.ll.size = 0;
	q.ll.tail = NULL;

    Stack s;
    s.ll.head = NULL;
	s.ll.size = 0;
	s.ll.tail = NULL;

    int i;
    for(i = 0; word[i] != '\0'; i++){
        if(word[i] != ' '){
            if(word[i] >= 'A' && word[i] <= 'Z'){
                enqueue(&q, word[i]+32);
                //printf("%c", word[i]+32);
            }else{
                enqueue(&q, word[i]);
                //printf("%c", word[i]);
            }
        }
    }

    int isOdd = (q.ll.size%2 == 0) ? 0 : 1;
    int newSize = isOdd == 1 ? q.ll.size+1 : q.ll.size;

    for(i = newSize/2; i>0; i--){
        if(isOdd == 1 && i == 1){
            dequeue(&q);
            //push(&s, peek(&s)); // NO PEEK FUNCTION
        }else{
            push(&s, dequeue(&q));
        }
    }

    while(!isEmptyStack(&s)){
        if(pop(&s) != dequeue(&q)){
            //printf("\nA: %c B: %c \n", a, b);
            printf("The string is not a palindrome\n");
            return -1;
        }
    }
    printf("The string is a palindrome\n");
    return 0;
}



//////////////////////////////////////////////////////////// 
//Question 4 

int balanced(char *expression){

	// write your code here
	Stack s; 
	s.ll.head = NULL; 
	s.ll.tail = NULL; 
	s.ll.size = 0; 

	// Check one character at a time 
	// If we see an opening bracket, store it in a stack 
	// If we see a closing bracket, check stack for matching opening bracket (should be on top) 
	// The moment we see a mismatch, expression is not balanced, return 
	// If we finish looking at the expression and the stack is empty, it's balanced

	printf("%s\n", expression); 

	while (*expression){ 

		if (*expression == '(' || *expression == '[' || *expression == '{'){ 
			push(&s, *expression); 
		} 

		else if (*expression == ')'){
			if (isEmptyStack(&s) || pop(&s) != '(')
				return -1; 			
		} 

		else if (*expression == ']'){ 
			if (isEmptyStack(&s) || pop(&s) != '[')
				return -1; 			
		} 

		else if (*expression == '}'){ 
			if (isEmptyStack(&s) || pop(&s) != '{') 
				return -1 ; 			
		} 

		expression++;

	 } 

	if (isEmptyStack(&s)) return 0;
	else
		return -1;
}

////////////////////////////////////////////////////////////////////////////////

void push(Stack *s, int item){
	insertNode(&(s->ll), 0, item);
}

int pop(Stack *s){
	int item;

	item = ((s->ll).head)->item;
	removeNode(&(s->ll), 0);
	return item;
}

int peek(Stack *s){
	return ((s->ll).head)->item;
}

int isEmptyStack(Stack *s){
	if ((s->ll).size == 0)
		return 1;
	return 0;
}


////////////////////////////////////////////////////////////////////////////////

void enqueue(Queue *q, int item){
	insertNode(&(q->ll), q->ll.size, item);
}

int dequeue(Queue *q){
	int item;
	item = ((q->ll).head)->item;
	removeNode(&(q->ll), 0);
	return item;
}

int isEmptyQueue(Queue *q){
	if ((q->ll).size == 0)
		return 1;
	return 0;
}



////////////////////////////////////////////////////////////////////////////////

void printList(ListNode *head){

	ListNode *temp = head;

	if (temp == NULL)
		return;

	while (temp != NULL){
		printf("%d ", temp->item);
		temp = temp->next;
	}
	printf("\n");
}

ListNode * findNode(LinkedList *ll, int index){

	ListNode *temp;

	if (ll == NULL || index < 0 || index >= ll->size)
		return NULL;

	temp = ll->head;

	if (temp == NULL || index < 0)
		return NULL;

	while (index > 0){
		temp = temp->next;
		if (temp == NULL)
			return NULL;
		index--;
	}

	return temp;
}

int insertNode(LinkedList *ll, int index, int value){

	ListNode *pre, *cur;

	if (ll == NULL || index < 0 || index > ll->size + 1)
		return -1;

	// If empty list or inserting first node, need to update head pointer
	if (ll->head == NULL || index == 0){
		cur = ll->head;
		ll->head = malloc(sizeof(ListNode));
		ll->tail = ll->head;
		ll->head->item = value;
		ll->head->next = cur;
		ll->size++;
		return 0;
	}

	// Inserting as new last node
	if (index == ll->size){
		pre = ll->tail;
		cur = pre->next;
		pre->next = malloc(sizeof(ListNode));
		ll->tail = pre->next;
		pre->next->item = value;
		pre->next->next = cur;
		ll->size++;
		return 0;
	}

	// Find the nodes before and at the target position
	// Create a new node and reconnect the links
	if ((pre = findNode(ll, index - 1)) != NULL){
		cur = pre->next;
		pre->next = malloc(sizeof(ListNode));

		if (index == ll->size)
			ll->tail = pre->next;

		pre->next->item = value;
		pre->next->next = cur;
		ll->size++;
		return 0;
	}

	return -1;
}

int removeNode(LinkedList *ll, int index){

	ListNode *pre, *cur;

	// Highest index we can remove is size-1
	if (ll == NULL || index < 0 || index >= ll->size)
		return -1;

	// If removing first node, need to update head pointer
	if (index == 0){
		cur = ll->head->next;
		free(ll->head);
		ll->head = cur;
		ll->size--;

		if (ll->size == 0)
			ll->tail = 0;

		return 0;
	}

	// Find the nodes before and after the target position
	// Free the target node and reconnect the links
	if ((pre = findNode(ll, index - 1)) != NULL){

		// Removing the last node, update the tail pointer
		if (index == ll->size - 1){
			ll->tail = pre;
			free(pre->next);
			pre->next = NULL;
		}
		else{
			cur = pre->next->next;
			free(pre->next);
			pre->next = cur;
		}
		ll->size--;
		return 0;
	}

	return -1;
}
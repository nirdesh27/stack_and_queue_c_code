#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node* next;
}stack;
stack* createStack(){return NULL;} 
void push(stack **top,int data){ stack * temp;
temp=(stack*)malloc(sizeof(stack));
temp->data=data;
temp->next=*top;
*top=temp;
}
int isEmpty(stack* top){return top==NULL;}
int pop(stack** top){  int data;
stack *temp;
if(isEmpty(*top)) printf("not any element to pop");
temp=*top;
*top=(*top)->next;
data=temp->data;
free(temp);
return data;
}
int top(stack *top){if(isEmpty(top)) return;
return top->data;}
int main(){
	stack* s=createStack();
	push(&s,1);
	push(&s,2);
	push(&s,3);
	push(&s,4);
	int m=pop(&s);
	printf("\t%d",top(s));
}
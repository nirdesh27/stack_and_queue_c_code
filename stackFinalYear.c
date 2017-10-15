#include<stdio.h>
#include<stdlib.h>
typedef struct stack{
	int capacity;
	int top;
	int * array;
}stack;
stack * createStack(int capacity){
	stack* s= (stack*)malloc(sizeof(stack));
	s->top=-1;
	s->capacity= capacity;
	s->array=(int *)malloc(sizeof(int)*s->capacity);
	return s;
}
int isFull(stack* s){
	return s->top==s->capacity-1;
}
int isEmpty(stack* s){
	return s->top==-1;
}
void push(stack* s , int data){
	if(isFull(s)){printf("stack is full\n");}
	else {
		s->array[++s->top]=data;
	}
}
int pop(stack* s){
	if(isEmpty(s)){printf("stakck is empty\n");return -1;}
	else {
		return s->array[s->top--];
	}
}
void deleteStack(stack* s){
	if(s){
		if(s->array)
			free(s->array);
		free(s);
	}
}
int main(){
	stack* s=createStack(5);
	push(s,10);
	push(s,20);
	push(s,30);
	push(s,40);
	push(s,50);
	push(s,90);
	int i;
	for(i=0;i<=5;i++){
		printf("%d\n",pop(s));
	}
	push(s,15);
	printf("%d\n",pop(s));
}
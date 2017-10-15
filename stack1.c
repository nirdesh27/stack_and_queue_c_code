#include<stdio.h>
#include<stdlib.h>
typedef struct stack{
int top;
int capacity;
int *array;
}stack;
 stack* createStack(int capacity){
	 stack* s=(stack*)malloc(sizeof(stack));
	 s->top=-1;
	 s->capacity=capacity;
	 s->array=(int*)malloc(sizeof(int)*s->capacity);
	 return s;
 }
 int isFull(stack *s){
	 return (s->top==s->capacity-1);
 }
 int isEmpty(stack *s){ return (s->top== -1);}
 /*push(stack *s,int value){
	 if(!isFull(s)) s->array[++s->top]=value;
	 else printf("\tstack is full");
 }*/
push(stack *s,int value){if(isFull(s))
	 doubleStack(s);
 s->array[++s->top]=value;}
 
 int pop(stack *s){if(!isEmpty(s)) return s->array[s->top--];
 printf("\tstack is underflow..");
 }
 
 int peek(stack *s){if(!isEmpty(s)) return s->array[s->top];
 printf("\t stack is underflow...");
 }
 doubleStack(stack *s){s->capacity *=2;
 s->array=realloc(s->array,s->capacity);}
 void deleteStack(stack *s){if(s){ if(s->array) free(s->array); free(s);}  printf("memory is cleaned...");}
 int main(){int i=0;int arr[8];
	 stack *s =createStack(8);
	 push(s,1);
	 push(s,2);
	 push(s,3);
	push(s,4);
	 push(s,5);
	push(s,6);
	push(s,7);
	push(s,8);
	//push(s,9);
	//push(s,10);
	
	int m=pop(s);
	printf("%d\t",m);
	/* if(isEmpty(s)) printf("stack is empty..");
	 else printf("not empty..");*/
	 while(!isEmpty(s)&&i<7){arr[i]=pop(s);i++;}
	 for(i=0;i<7;i++)printf("%d\t",arr[i]);
	 deleteStack(s);
 }
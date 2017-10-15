#include"stacklink.h"
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int int_min=420;
int isEmpty(stack *s){return s==NULL;}

void push(stack *s,int value){
stack* newnode=(stack*)malloc(sizeof(stack));
newnode->value=value;
if(s==NULL)
{newnode->next=NULL;}
else
{newnode->next=s;}
s=newnode;
}

int pop(stack* s){stack *temp=s;
int popvalue=int_min;
if(!isEmpty(s)){s=s->next;
popvalue=temp->value;
free(temp);}
return popvalue;
}

int peek(stack* s){if(!isEmpty(s))return s->value;
else
return int_min;
}

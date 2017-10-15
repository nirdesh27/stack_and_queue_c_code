#include<stdio.h>
#include<stdlib.h>
typedef struct node{int data;
 struct node* next;
 }list;
typedef struct queue{ list* front;
 list* rear;
 }queue;
 
 typedef struct stack{
	 queue* q1;
 queue* q2;
 }stack;
 stack **createstack(){
	 stack *s=(stack*)malloc(sizeof(stack));
	 
 return s;
 }
queue * createQueue(){
	queue *q;
list * temp;
q=(queue*)malloc(sizeof(queue));
if(!q) return NULL;
temp=(list*)malloc(sizeof(list));
q->front=q->rear=NULL;
return q;
}
int isEmpty(queue* q){return (q->front==NULL);}
void enqueue(queue* q,int data){
  list* newNode=(list*)malloc(sizeof(list));
  if(!newNode) return ;
  newNode->data=data;
  newNode->next=NULL;
  if(q->rear) q->rear->next=newNode;
  q->rear=newNode;
  if(q->front==NULL) q->front=q->rear;
}
int dequeue(queue* q){
	int data=0;
	list* temp;
	if(isEmpty(q)) {printf("queue is empty."); return ;}
	else {
		temp=q->front;
		data=q->front->data;
		q->front=q->front->next;
		free(temp);
	}
	return data;
	
}
push(stack ** s,int data){if(!isEmpty(&(s->q1))) 
	enqueue(&(s->q2),data);
else
	enqueue(&(s->q1),data);
}
/*deleteQueue(queue* q){
	list* temp=q->front;
	while()
}*/
 int main(){ int i=0;int n;
 
	 /*queue* q=createQueue(); scanf("%d",&n);
 enqueue(q,n);
 while(i<5){scanf("%d",&n);enqueue(q,n);i++;}
 i=0;
 while(i<5){printf("\t%d",dequeue(q)); i++;}*/
 /*enqueue(q,10);
enqueue(q,11);
enqueue(q,12);
enqueue(q,13);
enqueue(q,14);*/
stack *s=createstack();
push(&s,11);
push(&s,12);
 
 }

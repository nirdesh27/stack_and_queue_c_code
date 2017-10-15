#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node* leftchild;
	struct node* rightchild;
	struct node* parent;
}node;
typedef struct tree{
	node* root;
	int size;
}binaryTree;
typedef struct queue{
	int capacity;
	int front;
	int rear;
	int numberofelements;
	node** array;
	
}queue;
queue* createQueue(int capacity){queue* q=(queue*)malloc(sizeof(queue));
q->capacity=capacity;
q->front=0;
q->rear=0;
q->numberofelements=0;
q->array=(node**)malloc(sizeof(node*)*capacity);
return q;}
int size(queue* q){return q->numberofelements;}
int isEmpty(queue* q){return (q->front==q->rear)&&(q->numberofelements!=q->capacity);}
int isFull(queue* q){return size(q)==q->capacity;}
enqueue(queue* q,node* data){if(isFull(q)){printf("queue is full");
return ;}
q->array[q->rear]=data;
q->rear=(q->rear+1)%q->capacity;
//q->rear++;
q->numberofelements=q->numberofelements+1;
}
node* dequeue(queue *q){
	if(isEmpty(q)){printf("queueu is empty...");
	return ;}
	node* data=q->array[q->front];
	q->front=(q->front+1)%q->capacity;
	//q->front++;
	q->numberofelements--;
	return data;
}
//int size(queue* q){return ((q->capacity)-q->front+q->rear+1)%q->capacity;}
/*int peek(queue* q){
	if(isEmpty(q)) return;
	return q->array[q->front];
}*/
deleteQueue(queue* q){
	if(q){
		if(q->array) free(q->array);
		free(q->array);
	}
}
int main(){
	queue* q=createQueue(1);
	/*node* root1=(node*)malloc(sizeof(node));
	root1->data=1;
	root1->parent=NULL;
	root1->leftchild=NULL;
	root1->rightchild=NULL;
	
	enqueue(q,root1);
	//enqueue(q,root1);
	node* r=dequeue(q);dequeue(q);
	printf("%d",r->data);
	if(!isEmpty(q)) printf("emt...");*/
	binaryTree* t=(binaryTree*)malloc(sizeof(binaryTree));
	t->root=(node*)malloc(sizeof(node));
	(t->root)->data=10;
	(t->root)->parent=(t->root)->leftchild=(t->root)->rightchild=NULL;
}
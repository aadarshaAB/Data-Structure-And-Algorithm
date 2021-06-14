#include<stdio.h>
#define size 5
struct queue
{
	int item[size];
	int front;
	int rear;
}q;
void enqueue(struct queue *q,int num)
{
	
	if(q->rear==size-1)
	{
		printf("\nQueue is overflow\n");
	}
	else
	{
		q->rear=q->rear+1;
		q->item[q->rear]=num;
	}
}
void dequeue(struct queue *q)
{
	int dq;
	if((q->rear)<(q->front))
	{
		printf("\nQueue is underflow\n");
	}
	else
	{
		dq=q->item[q->front];
		printf("\nDequeu item is:%d",dq);
		q->front=q->front+1;
	}
}
void display(struct queue *q)
{
	int i=1;
	if(q->rear==-1)
	{
		printf("\nQueue is empty");
	}
	else
	{
		printf("\nThe content of queue is\n");
		for(i=q->front;i<=q->rear;i++)
		{
			printf("\n| %d |",q->item[i]);
		}
	}
	
}
int main()
{
	int num,choice;
	q.front=0;
	q.rear=-1;
	printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
	while(1)
	{
	 printf("\nEnter your choice:");
    scanf("%d",&choice);
switch(choice)
{
    case 1:
    printf("\nEnter the number you want to add:");
    scanf("%d",&num);
    enqueue(&q,num);
    break;
    case 2:
    dequeue(&q);
    break;
    case 3:
    display(&q);
    break;
    case 4:
    exit(0);
}	
}
return 0;

}


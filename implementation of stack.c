#include<stdio.h>
#define size 5
struct stack
{
	int item[size];
	int top;
}s;
void push(struct stack *s,int num)
{
	if(s->top==size-1)
	{
		printf("\nstack overflow");
	}
	else
	{
		s->top=s->top+1;
		s->item[s->top]=num;
	}
}
void pop(struct stack *s)
{
	int dt;
	if(s->top==-1)
	{
		printf("\nstack underflow");
	}
else
{
	dt=s->item[s->top];
	s->top=s->top-1;
	printf("\nPoped item is:%d",dt);
	
}
}
void display(struct stack *s)
{
	int i;
	if(s->top==-1)
	{
		printf("\nThe content of stack is empty");
	}
	else{
	for(i=s->top;i>=0;i--)
	{
		printf("\n| %d |",s->item[i]);
	}
   }
}
int main()
{
	int num,choice;
	s.top=-1;
	printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
	while(1)
	{
		printf("\nEnter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter a number to push:");
				scanf("%d",&num);
				push(&s,num);
				break;
			case 2:
				pop(&s);
				break;
			case 3:
				display(&s);
				break;
			case 4:
				exit(0);
		}
	}
	return 0;
}


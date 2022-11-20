#include<stdio.h>
int queue[100],choice,repeat = 4,rear,front,max,t,item,i;


void enque()
{
		printf("enter item \n");
	scanf("%d",&item);
	if(rear==(max-1))
	{
			 printf("queue is full");
			 
	}
	else if(front==-1&&rear ==-1)
	{
		front = 0;
		rear = rear+1;
	queue[rear] = item;
	}
	else{
	
	rear = rear+1;
	queue[rear] = item;
	}
}

int deque()
{
	
	if(front==-1&&rear==-1)
	{
		return printf("queue is underflow");
	}
	else if(front==rear)
	{
		front = rear =-1;
	}
	else
	front = front+1;
}

void display()
{
	if(front ==-1&&rear==-1)
	printf("stack is underflow");
	else
	{
		for( i = front; i<=rear;i++)
		printf("%d ",queue[i]);
	}
}
	

int main()
{
	front = rear = -1;
 max;
printf("enter the max of stack \n");
scanf("%d",&max);
	 repeat = 4;
	while(repeat==4)
	{
		printf("enter 1 to push,2 to pop, 3 to display \n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			
			enque();
			break;
			case 2:
			deque();
			
			break;
			case 3:
		
			display();
			break;
		}
		printf("enter 4 to repeat,5 to exit \n");
		scanf("%d",&repeat);
	}
	return 0;
}

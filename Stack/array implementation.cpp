#include<stdio.h>
int stack[100],choice,repeat = 4,top,max,t,item,i;
void push(void);
int pop(void);
void display(void);

void push()
{
	if(top==(max-1))
	{
		printf("stack is full");
	}
	else
	{
	printf("enter item");
	scanf("%d",&item);
		top = top+1;
		stack[top] = item;
	}
}

int pop()
{
	int it;
	if(top==-1)
	{
		printf("stack is underflow");
	}
	else
	{
		it = stack[top];
		top = top-1;
	
	}
	return it;
}
void display()
{
	if(top==-1)
	printf("stack is underflow");
	else
	{
		for( i = top;i>=0;i--)
		printf("%d ",stack[i]);
	}
}
	

int main()
{
	top = -1;
 max;
printf("enter the max of stack");
scanf("%d",&max);
	 repeat = 4;
	while(repeat==4)
	{
		printf("enter 1 to push,2 to pop, 3 to display");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			
			push();
			break;
			case 2:
			t  = pop();
			printf("element poped is %d",t);
			break;
			case 3:
		
			display();
			break;
		}
		printf("enter 4 to repeat,5 to exit");
		scanf("%d",&repeat);
	}
	return 0;
}


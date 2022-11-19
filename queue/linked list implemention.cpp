#include <iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node *next;

};
struct node *front=NULL,*rear,*temp; 
void enque()
{
	int val;
	cout<<"enter the value"<<endl;
	cin>>val;
	
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	if(newnode == NULL)
	printf("queue is overflow");
	else
	{
		newnode->data = val;
		newnode->next = NULL;
		if(front==NULL)
		{
			front  = newnode;
		}
		else
		{
			rear = front;
			while(rear->next!=NULL)
			{
				rear = rear->next;
			}
			rear->next = newnode;
		}
	}
}

void deque()
{
	temp = front;
	if(front==NULL)
	{
		cout<<"queue is underflow"<<endl;
	}
	else if(front->next==NULL)
	{
		front = NULL;
	}
	else
	{
		front = front->next;
	}
	free(temp);
}
void print()
{
	temp = front;
	if(front==NULL)
	cout<<"queue is empty"<<endl;
	else
	{
		while(temp->next!=NULL)
		{
			cout<<temp->data<<endl;
			temp = temp->next;
		
		}
			cout<<temp->data<<endl;
	}
}

int main()
{
	
	 int count=1;
	 while(count)
	 {
	 	int ch;
	cout<<"enter 1 for enque,2 for deque,3 to print"<<endl;
	 cin>>ch;
	 	switch(ch)
	 	{
		 
	 		case 1:
	 		enque();
	 		break;
			case 2:
	 		deque();
	 		break;
			 case 3:
	 		print();
			 break;
		}
	
	 }
		cout<<"enter 4 to continue"<<endl;
	 cin>>count;
	
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *newnode, *head=NULL, *last;
void create()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		newnode = (struct node*)malloc(sizeof(struct node));
		printf("enter the data value to crreate ll");
		scanf("%d",&newnode ->data);
		newnode ->next = NULL;
		if(head ==NULL)
		{
			last  = head = newnode;
		}
		else
		last->next = newnode;
		last  = newnode;
	}
}
void printll()
{
	struct node *temp;
	temp = head;
	while(temp!=NULL)
	{
		printf("%d  ",temp ->data);
		temp = temp ->next;
	}
}
void insertbegin()
{
	int i = 1;
	while(i==1)
	{
		newnode = (struct node*)malloc(sizeof(struct node));
		printf("enter the element to be added in begging");
		scanf("%d",&newnode ->data);
		
		if(head == NULL)
		{
			head = newnode;
		}
		newnode->next = head;
		head = newnode;
		printf("press 1 for continue");
		scanf("%d", &i);
		
	}
}
void insertend()
{
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("enter data of last node");
	scanf("%d",&newnode->data);
	if(head==NULL)
	{
		head = newnode;
		
	}
	else
	{
		newnode->next=NULL;
		struct node *temp;
		temp = head;
		while(temp ->next!= NULL)
		{
			temp=temp->next;
		}
		temp->next= newnode;
		
	}
}
void insertgivenloc()
{
	struct node *temp;
	temp=head;
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("enter data");
	scanf("%d", &newnode->data);
	int i=1;
	int loc;
	printf("entrr the location");
	scanf("%d",&loc);
	while(i<loc-1)
	{
	temp=temp->next;
	i=i+1;
	}
	newnode->next=temp->next;
	temp->next=newnode;
}



void delstart()
{
	printf("list after delition in beggining");
	struct node *temp1 =head;
	if(head==NULL)
	{
		printf("list is empty");
	}
	else if(head->next ==NULL)
	{
		head = NULL;
		free(temp1);	
	}
	else
	{
		head = head->next;
		temp1-> next =NULL;
		free(temp1);
	}
}
void del_end()
{
	printf("list after delition in end");
	struct node *temp1 =head, *temp2;
	if(head==NULL)
	{
		printf("list is empty");
	}
	else if(head->next ==NULL)
	{
		head = NULL;
		free(temp1);	
	}
	else
	{
		while(temp1->next!=NULL)
		{
			temp2 = temp1;
			temp1 = temp1->next;
		}
		temp2->next  = NULL;
		free(temp1);
	}
	
}
void delloc()
{
	
	int  loc, i = 1;
	struct node *temp1 = head,*temp2;
	printf("enter the location");
	scanf("%d",&loc);
		printf("list at given location");
		if(head==NULL)
	{
		printf("list is empty");
	}
	else if(loc==1)
	{
	head = head->next;
	free(temp1);
	
	}
	else
	
	{
		temp1 = head;
		while(i<loc)
		{
			temp2 = temp1;
			temp1  = temp1->next;
			i++;
		}
		temp2->next = temp1->next;
		temp1->next = NULL;
		free(temp1);		
		}	
}
int main()
{
	create();
	printll();
	printf("\n insertion operations \n");
	insertbegin();
	printll();
	 insertend();
	 printll();
	insertgivenloc();
	printll();
	
		printf("\n deletion  operations \n");
		delstart();
	printf("\n");
	printll();
	del_end();
	printf("\n");
	printll();
	delloc();
	printf("\n");
	printll();

	return 0;
}

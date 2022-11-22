#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node *left, *right;
};
struct node *create()
{
	int x;
	struct node *newnode();
	newnode = (struct node*)malloc(sizeof(struct node))//use new keyword in case of class
	printf("enter data and -1 for no newnode");
	scanf("%d",&x);
	if(x==-1)
	return 0;
	newnode ->data = x;
	printf("enter left child of %d",x);
	newnode->left=create();
	printf("enter right child of %d",x);
	newnode->right=create();
	return newnode;
}

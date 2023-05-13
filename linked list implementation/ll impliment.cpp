#include<iostream>
using namespace std;

class node
{
	public:
		
	int data;
	node *next;
	
	node(int data)
	{
		this->data = data;
		next = NULL;
	}
};
node* makell()
{
	int data;
	cout<<"enter data and -1 to end list";
	cin>>data;
	node *head = NULL;
	node *tail = NULL;
	while(data!= -1)
	{
		node *newnode = new node(data);
		if(head==NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
		tail -> next = newnode;
		tail = tail -> next;
		}
		cin>>data;
	}
	return head;
}
void print(node *head) {
	while(head != NULL) {
		cout << head -> data << " ";
		head = head -> next;
	}
}
 int main()
 {
 	node *head = makell();
 	print(head);
 }

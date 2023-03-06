	#include<stdio.h>
	#include<stdlib.h>
	struct node //Node Definition
	{
		int data;
		struct node *left,*right; 
	};
	
	struct node *create(int data)
	{
		struct node *root;
		root=(struct node*)malloc(sizeof(struct node));
		root->data=data;
		root->left=NULL;
		root->right=NULL;
		return root;
	}
	
	struct node *insert(struct node*root,int key)//inserting newnode in bst
	{
		if(root==NULL)
		{
			return create(key);
		}
		else if(key< root->data)
		{
			root->left=insert(root->left,key);
		}
		else
		{
			root->right=insert(root->right,key);
		}
		return root;
	}
	
	void inorder(struct node *root) //inorder traversal
	{
	 if (root != NULL) 
		 {
		 // Traverse left
		 inorder(root->left);
		 // Traverse root
		 printf("%d -> ", root->data);
		 // Traverse right
		 inorder(root->right);
		 }
	}
	
	struct node * search(struct node *root, int key)
		{
		if(root==NULL)
		 return root;
		if(root->data ==key )
		 return root;
		else if(key<root->data)
		 return search(root->left,key);
		 else
		 return search(root->right,key);
	 }
	 
	struct node *findminimum(struct node *root)//for find next greater element than root to delete
	{
			while(root->left!=NULL)
			{
			root=root->left;
			}
		return root;
	}
	
	struct node *delete1(struct node *root,int key)//function to delete node
	{
		if(root==NULL)
		{
			return NULL;
		}
		else if(key<root->data)
		root->left=delete1(root->left,key);
		else if(key>root->data)
		root->right=delete1(root->right,key);
		else
		{
			if(root->left==NULL && root->right==NULL)
			{
				free(root);
				root=NULL;
				return root;
			}
			else if(root->left==NULL)
			{
				struct node*temp=root;
				root=root->right;
				free(temp);
				return root;
			}
			 else if(root->right==NULL)
			{
				struct node*temp=root;
				root=root->left;
				free(temp);
				return root;
			}
			else
			{
				struct node *temp=findminimum(root->right);
				root->data=temp->data;
				root->right=delete1(root->right,temp->data);
			}
		}
	}
	
	//main function
	int main()
	{
		struct node *root = NULL;
		 root = insert(root, 8);
		 root = insert(root, 3);
		 root = insert(root, 1);
		 root = insert(root, 6);
		 root = insert(root, 7);
		 root = insert(root, 10);
		 root = insert(root, 14);
		 root = insert(root, 4);
		 root = insert(root, 2);
		 printf("Inorder traversal: ");
		 inorder(root);
		 struct node *temp = search(root,15);
		 if(temp==NULL)
		 printf("\nsearch unsuccessful\n");
		 else
		 printf("\nsearch successful\n");
		 temp=findminimum(root);
		 printf("%d\n",temp->data);
		 
		 delete1(root,1);
		 inorder(root);
	 
	 return 0;
	}

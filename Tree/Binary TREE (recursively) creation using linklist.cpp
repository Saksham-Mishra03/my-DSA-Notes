#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    
    // constructor to initalize class with default values
    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node *builttree()
{
    int d;
    cin>>d;
    if(d == -1)
    {
        return NULL;
    }
    node *root = new node(d);
    cout<<"enter left child and -1 for null";
    root->left = builttree();
    cout<<"enter right child and -1 for null";
    root->right = builttree();
    return root;
}

int main()
{   
    cout<<"enter root node";
    node* root = builttree();
}

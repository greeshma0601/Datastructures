#include<bits/stdc++.h>
using namespace std;
struct node {
int data;
struct node * right, * left;
};
struct node *newNode(int item)
{
    struct node *temp =  new node;
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;}
struct node* insert(struct node* node, int data);
void inorder(node *root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        node *root;
        node *tmp;
        root = NULL;
        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            int k;
            cin>>k;
            root = insert(root, k);
        }
        inorder(root);
        cout<<endl;
}
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* The structure of a BST node is as follows:
struct node {
  int data;
  struct node * right, * left;
}; */
/* This function should insert a new node with given data and
   return root of the modified tree  */
struct node* insert(struct node* node, int data) 
{ 
    /* If the tree is empty, return a new node */
    if (node == NULL) return newNode(data); 
  
    /* Otherwise, recur down the tree */
    if (data < node->data) 
        node->left  = insert(node->left, data); 
    else if (data > node->data) 
        node->right = insert(node->right, data); 
    
  
    /* return the (unchanged) node pointer */
    return node; 
} 

/*struct node* insert(struct node* root, int data)
{
    // Your code here
    struct node *t,*p;
    t=(struct node*)malloc(sizeof(struct node*));
    t->data=data;
    t->right=t->left=NULL;
    p=root;
    if(root==NULL)
    {
        root=t;
    }
    else
    {
        struct node *cur;
        cur=root;
        while(cur)
        {
            p=cur;
            if(cur->data>t->data)
            {
                cur=cur->left;
            }
            else if(cur->data<t->data)
            {
                cur=cur->right;
            }
            else{}
        }
        if(t->data>p->data)
        {p->right=t;}
        else if(t->data<p->data)
        {p->left=t;}
        else{return root;}
    }
    
    return root;
}*/

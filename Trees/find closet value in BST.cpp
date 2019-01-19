#include<bits/stdc++.h>
using namespace std;
struct Node {
int data;
struct Node * right, * left;
};
int maxDiff(Node* , int );
void insert(Node ** tree, int val)
{
    Node *temp = NULL;
    if(!(*tree))
    {
        temp = (Node *)malloc(sizeof(Node));
        temp->left = temp->right = NULL;
        temp->data = val;
        *tree = temp;
        return;
    }
    if(val < (*tree)->data)
    {
        insert(&(*tree)->left, val);
    }
    else if(val > (*tree)->data)
    {
        insert(&(*tree)->right, val);
    }
}
int getCountOfNode(Node *root, int l, int h)
{
    if (!root) return 0;
    if (root->data == h && root->data == l)
        return 1;
    if (root->data <= h && root->data >= l)
         return 1 + getCountOfNode(root->left, l, h) +
                    getCountOfNode(root->right, l, h);
    else if (root->data < l)
         return getCountOfNode(root->right, l, h);
    else return getCountOfNode(root->left, l, h);
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Node *root;
        Node *tmp;
    //int i;
        root = NULL;
        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            int k;
            cin>>k;
            insert(&root, k);
        }
        int s;
        cin>>s;
     cout<<maxDiff(root,s);
     cout<<endl;
    }
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*The Node structure is
struct Node {
int data;
Node * right, * left;
};*/
/*You are required to complete below method */
void call(Node*,int,int,int &);
void call(Node *ptr,int k,int mindif,int &minkey)
{
//    if(ptr==NULL)return;
//    if(ptr->data==k){minkey=k;return;}
if(ptr!=NULL){
    if(mindif>(abs(ptr->data-k)))
    {
        mindif=abs(ptr->data-k);
        minkey=ptr->data;
    }
    if(ptr->left==NULL and ptr->right==NULL)
    return;
    if(k<=ptr->data)
    {
        call(ptr->left,k,mindif,minkey);
    }
    //else
    if(k>=ptr->data)
    {
         call(ptr->right,k,mindif,minkey);
    }
    return;
}
return;
}

int maxDiff(Node *root, int m)
{
    //Your code here
 int mindif=INT_MAX;
 int minkey=0;
 call(root,m,mindif,minkey);
 return (minkey);
}

/*void call(Node*,int,int,int &);
void call(Node *root,int N,int mindiff,int &no)
{
if(root!=NULL)
{
if(mindiff>abs(N-root->data))
{
mindiff=abs(N-root->data);
no=root->data;
}
if(root->left==NULL && root->right==NULL)
return;
if(N>=root->data)
call(root->right,N,mindiff,no);
if(N<=root->data)
call(root->left,N,mindiff,no);
return;

}
return;
}
int maxDiff(Node *root, int k)
{
int mindiff=INT_MAX;
int no=0;
call(root,k,mindiff,no);
return no;
}*/

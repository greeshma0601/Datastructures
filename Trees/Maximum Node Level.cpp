/*
Maximum Node Level
Find the level in a binary tree which has the maximum number of nodes. The root is at level 0.

Note: The Input/Output format and Example given are used for system's internal purpose, and should be used by a user for Expected Output only. As it is a function problem, hence a user should not read any input from stdin/console. The task is to complete the function specified, and not to write the full code.

Input:
The first line consists of T test cases. The first line of every test case consists of N, denoting the number of edges in the tree. The second and third line of every test case consists of N, nodes of the binary tree.

Output:
Print the level number with maximum nodes.

Constraints:
1<=T<=100
1<=N<=100

Example:
Input:
2
3
1 2 L 1 3 R 2 4 L
3
1 3 L 1 2 R 2 4 R

Output:
1
1


*/

{
#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *left,*right;
};
Node *newNode(int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
 
    return (temp);
}
void insert(Node *root,int a1,int a2,char lr){
	if(root==NULL){
		return;
	}
	if(root->data==a1){
		switch(lr){
			case 'L':root->left=newNode(a2);
			break;
			case 'R':root->right=newNode(a2);
			break;
		}
	}
	else{
		insert(root->left,a1,a2,lr);
		insert(root->right,a1,a2,lr);
	}
}
void inorder(Node *root){
	if(root==NULL)
		return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
int maxNodeLevel(Node *root1);
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int t;
	cin>>t;
	while(t-->0)
	{
		int n;
		cin>>n;
		int m=n;
		Node *root1=NULL;
		while(n-->0){
			int a1,a2;
			cin>>a1>>a2;
			char lr;
			scanf(" %c",&lr);
			if(root1==NULL){
				root1=newNode(a1);
				switch(lr){
					case 'L':root1->left=newNode(a2);
					break;
					case 'R':root1->right=newNode(a2);
					break;
				}
			}
			else{
				insert(root1,a1,a2,lr);
			}
		}
			cout<<maxNodeLevel(root1)<<"
";
	}
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*Complete the function below
Node is as follows:
struct Node{
	int data;
	Node *left,*right;
};
*/
/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*Complete the function below
Node is as follows:
struct Node{
	int data;
	Node *left,*right;
};
*/
int maxNodeLevel(Node *root)
{
 // Add your code here
 queue<Node*> q;
 q.push(root);
 int max=0;
 int level=0;
 int i=0;
 while(!q.empty())
 {
     int k=q.size();
     if(max<k)
    {
            max=k;
            level=i;
    }
     while(k--)
     {
         Node* temp=q.front();
         q.pop();
         if(temp->left)
         q.push(temp->left);
         if(temp->right)
         q.push(temp->right);
     }
     i++;
     
 }
     
 return level;
}

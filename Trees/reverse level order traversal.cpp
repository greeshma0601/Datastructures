/*Reverse Level Order Traversal
Write a function to print Reverse Level Order Traversal of a tree. For below tree, function should print 4 5 2  3 1 .
                                              
                                           

 

Input:
The task is to complete the method which takes one argument, root of the Tree. The struct node has a data part which stores the data, pointer to left child and pointer to right child.
There are multiple test cases. For each test case, this method will be called individually.


Output:
The function should print reverse level order traversal of the tree.

Constraints:
1 <=T<= 30
1 <=Number of nodes<= 100
1 <=Data of a node<= 1000

Example:
Input:
2
2
1 2 R 1 3 L
4
10 20 L 10 30 R 20 40 L 20 60 R
 

Output:
3 2 1
40 60 20 30 10
 

There are two test casess.  First case represents a tree with 3 nodes and 2 edges where root is 1, left child of 1 is 3 and right child of 1 is 2.   Second test case represents a tree with 4 edges and 5 nodes.
*/
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* newNode(int data)
{
    struct Node* Node = (struct Node*)
                        malloc(sizeof(struct Node));
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;
    return(Node);
}
void reversePrint(Node *root);
/* Driver program to test above functions*/
int main()
{
   int t;
  scanf("%d
", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d
",&n);
     Node *root = NULL;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
      //  cout << n1 << " " << n2 << " " << (char)lr << endl;
        if (m.find(n1) == m.end())
        {
           parent = newNode(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];
        Node *child = newNode(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
   reversePrint(root);
   cout<<endl;
  }
    return 0;
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* A tree Node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              /* A tree node has data, pointer to left child
   and a pointer to right child  
struct node
{
    int data;
    struct node* left;
    struct node* right;
}; */

// use a stack and queue

void reversePrint(Node *root)
{
if(root==NULL)
  return ;
stack<Node*> s;
queue<Node*> q;

q.push(root);

    while(q.empty() == false ) {
           Node *temp = q.front();
           q.pop();
           s.push(temp);
            if(temp->right)
                q.push(temp->right);
            if(temp->left)
                q.push(temp->left);
        
    }    
   
    while(s.empty() == false)
    {  
        Node *t = s.top();
        cout<<t->data<<" ";
        s.pop();
    }
    
}

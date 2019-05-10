/*
Delete a node from BST Submissions: 16645   Accuracy: 34.76%   Difficulty: Medium   Marks: 4
Associated Course(s):   Interview Preparation   Geeks Classes DSA- Tutorials
            
Problems
Given a Binary Search Tree (BST) and a node no 'x' , your need to delete the node 'x' from the BST .

Input Format:
The first line of the input contains an integer 'T' denoting the number of test cases. Then 'T' test cases follow. Each test case consists of three lines. Description of  test cases is as follows:
The First line of each test case contains an integer 'N' which denotes the no of nodes in the BST.   .
The Second line of each test case contains 'N' space separated values  of the nodes in the BST.
The Third line of each test case contains an integer 'x' the value of the node to be deleted from the BST.

Output Format:
For each testcase, in a new line, print the inorder traversal.

Your Task:
You are required to complete the function deleteNode which takes two arguments. The first being the root of the tree, and an integer 'x' denoting the node to be deleted from the BST . The function returns a pointer to the root of the modified BST .

Constraints:
1 <= T <= 50
1 <= N <= 50

Example:
Input
1
7
2 81 87 42 66 90 45 
81
Output
2 42 45 66 87 90
*/
int minVal(Node* root){
    Node* curr = root;
    while(curr->left!=NULL){
        curr=curr->left;
    }
    return curr->data;
}
Node * deleteNode(Node *root,  int x){
    if(root== NULL){
        return root;
    }
    if(x<root->data){
         root->left = deleteNode(root->left,x);
    }
    else if(x>root->data){
        root->right= deleteNode(root->right,x);
    }
    else{
        if(root->right==NULL){
            Node* temp =root->left;
            return temp;
        }
        if(root->left==NULL){
            Node* temp =root->right;
            return temp;
        }
        int m = minVal(root->right);
        deleteNode(root,m);
        root->data=m;
    }
    return root;
}

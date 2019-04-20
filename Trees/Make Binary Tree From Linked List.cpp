/*
Make Binary Tree From Linked List Submissions: 5142   Accuracy: 45.76%   Difficulty: Medium   Marks: 4
Associated Course(s):   Geeks Classes DSA   Geeks Classes in Noida
         
Problems
Given a Linked List Representation of Complete Binary Tree. The task is to construct the Binary tree.

Note : The complete binary tree is represented as a linked list in a way where if root node is stored at position i, its left, and right children are stored at position 2*i+1, 2*i+2 respectively.
 










 


 

Input:
First line of input contains number of testcases T. For each testcase, first line of input contains length of linked list and next line contains linked list elements.

Output:
Output of each test case will be the level order traversal of the the constructed binary tree.

User Task:
The task is to complete the function convert() which takes head of linked list and root of the tree as the reference.

Constraints:
1 <= T <= 100
1 <= N <= 103
1 <= Ki <= 103

Example(To be used only for expected output ) :
Input
1
5
1 2 3 4 5

Output: 
1 2 3 4 5

*/
void convert(node *head,TreeNode * &root)
{
  //Your code here
  unordered_map<int,TreeNode* > myMap;
  int k=0;
  node* temp=head;
  while(temp!=NULL)
  {
      TreeNode* tempTree=new TreeNode;
      tempTree->data=temp->data;
      tempTree->left=NULL;
      tempTree->right=NULL;
      
      myMap[k]=tempTree;
      k++;
      
      temp=temp->next;
  }
  for(auto it=myMap.begin();it!=myMap.end();it++)
  {
      int left=it->first*2+1;
      int right=it->first*2+2;
      TreeNode* currentNode=it->second;
      if(it->first==0)
      { 
          root=currentNode;
      }
      if(myMap.find(left)!=myMap.end())
      {
          currentNode->left=myMap[left];
      }
      if(myMap.find(right)!=myMap.end())
      {
          currentNode->right=myMap[right];
      }
  }
}

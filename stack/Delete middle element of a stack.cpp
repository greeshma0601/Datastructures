/*
Delete middle element of a stack Submissions: 2561   Accuracy: 46.1%   Difficulty: Easy   Marks: 2
       
Problems
Discussions
Given a stack with push(), pop(), empty() operations, delete middle of it without using any additional data structure.

Input Format:
The first line contains an integer T, the number of test cases. For each test case, the first line contains an integer sizeOfStack denoting the stack size. Next line contains space separated integers that will be pushed into the stack.

Output Format:
For each test case, in a new line, print the stack elements. If stack size if 1 then just print the top element.

Your Task:
This is a function problem. The input is already taken by the driver code. You only need to complete the function DeleteMid that returns the modified stack.

Constraints:
1 <= T <= 100
1 <= sizeOfStack <= 100

Example:
Input
2
5
1 2 3 4 5
7
1 2 3 4 5 6 7
Output
5 4 2 1
7 6 5 3 2 1

*/

stack<int> DeleteMid(stack<int>st,int n,int curr=0)
{
  
  //Your code here
    // If stack is empty or all items 
   // are traversed 
   if (st.empty() || curr == n) 
     return st; 
  
   // Remove current item 
   int x = st.top(); 
   st.pop(); 
  
   // Remove other items 
 st=DeleteMid(st, n, curr+1); 
  
   // Put all items back except middle 
   if (curr != n/2) 
     st.push(x); 
     return st;

}

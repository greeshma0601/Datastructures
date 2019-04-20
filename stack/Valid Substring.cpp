/*
Valid Substring Submissions: 7089   Accuracy: 31.22%   Difficulty: Easy   Marks: 2
        
Problems
Given a string S consisting only of opening and closing parenthesis 'ie '('  and ')', find out the length of the longest valid substring.

NOTE: Length of smallest the valid substring ( ) is 2.

 

Input
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. 
The first line of each test case contains a string S consisting only of ( and ).


Output

Print out the length of the longest valid substring.

Constraints
1 <= T <= 100
0 <   S  <= 110

 

Examples 

Input
4
(()(
()()((
((()()())))
()(())(

Output
2
4
10
6
 
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int findMaxLen(string str) 
{ 
    int n = str.length(); 
  
    // Create a stack and push -1 as initial index to it. 
    stack<int> stk; 
    stk.push(-1); 
  
    // Initialize result 
    int result = 0; 
  
    // Traverse all characters of given string 
    for (int i=0; i<n; i++) 
    { 
        // If opening bracket, push index of it 
        if (str[i] == '(') 
          stk.push(i); 
  
        else // If closing bracket, i.e.,str[i] = ')' 
        { 
            // Pop the previous opening bracket's index 
            stk.pop(); 
  
            // Check if this length formed with base of 
            // current valid substring is more than max  
            // so far 
            if (!stk.empty()) 
                result = max(result, i - stk.top()); 
  
            // If stack is empty. push current index as  
            // base for next valid substring (if any) 
            else stk.push(i); 
        } 
    } 
  
    return result; 
} 
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 string s;cin>>s;
 int r=findMaxLen(s);
 cout<<r<<endl;
 }
	//code
	return 0;
}

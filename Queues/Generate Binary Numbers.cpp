/*
Generate Binary Numbers Submissions: 6459   Accuracy: 55.06%   Difficulty: Basic   Marks: 1
Associated Course(s):   Geeks Classes in Noida   Geeks Classes DSA
        
Problems
Given a number N. The task is to generate and print all binary numbers with decimal values from 1 to N.

Input:
The first line of input contains an integer T denoting the number of test cases. There will be a single line for each testcase which contains N.

Output:
Print all binary numbers with decimal values from 1 to N in a single line.

Constraints:
1 ≤ T ≤ 106
1 ≤ N ≤ 106

Example:
Input:
2
2
5

Output:
1 10
1 10 11 100 101

Explanation:
Testcase 1: Binary numbers from 1 to 2 are 1 and 10.
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// This function uses queue data structure to print binary numbers 
void generatePrintBinary(int n) 
{ 
    // Create an empty queue of strings 
    queue<string> q; 
  
    // Enqueue the first binary number 
    q.push("1"); 
  
    // This loops is like BFS of a tree with 1 as root 
    // 0 as left child and 1 as right child and so on 
    while (n--) 
    { 
        // print the front of queue 
        string s1 = q.front(); 
        q.pop(); 
        cout << s1 << " "; 
  
        string s2 = s1;  // Store s1 before changing it 
    
        // Append "0" to s1 and enqueue it 
        q.push(s1.append("0")); 
  
        // Append "1" to s2 and enqueue it. Note that s2 contains 
        // the previous front 
        q.push(s2.append("1")); 
    } 
} 
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
  generatePrintBinary(n); cout<<endl;
 }
	//code
	return 0;
}

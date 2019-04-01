/*
Sum of dependencies in a graph Submissions: 5074   Accuracy: 63.12%   Difficulty: Basic   Marks: 1
      
Problems
Given a directed graph with n nodes. If there is an edge from u to v then u depends on v. Our task is to find out the sum of dependencies for every node.


 

Example:
For the graph in diagram, A depends on C and D i.e. 2, B depends on D i.e. 1, C depends on D i.e. 1
and D depends on none.
Hence answer -> 0 + 1 + 1 + 2 = 4


Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. The first line of each test case contains two integers N and E denoting the no of vertices and edges of the graph. Then in the next line are E pairs u and v denoting an edge from u to v.

Output:
For each test case in a new line print the required output.

Constraints:
1<=T<=100
1<=N,E<=150

Example:
Input:
2
4 4 
0 2 0 3 1 3 2 3
4 3 
0 2 0 1 0 3
Output:
4
3
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int n,e,i;cin>>n>>e;
 int a[2*e];for(i=0;i<2*e;i++)cin>>a[i];
 cout<<e<<endl;
 }
	//code
	return 0;
}

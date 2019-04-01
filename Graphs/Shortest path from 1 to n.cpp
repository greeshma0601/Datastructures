/*
Shortest path from 1 to n
Consider a directed graph whose vertices are numbered from 1 to n. There is an edge from a vertex i to a vertex j iff either j = i + 1 or j = 3i. The task is to find the minimum number of edges in a path in G from vertex 1 to vertex n.

Input:  
The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows.

Each test case contains a value of n. 

Output:  
Print the number of edges in the shortest path from 1 to n.

Constraints:
1<=T<=30
1<=n <=1000

Example:
Input:
2
9
4

Output:
2
2

 

*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int doit(int n){

if (n<2) return 0;
if (n==2) return 1;
return (n%3)+1+doit(n/3);
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int n,i;cin>>n;
 cout<<doit(n)<<endl;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 }
	//code
	return 0;
}

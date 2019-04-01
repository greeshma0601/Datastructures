/*
Let n be 100 for example:
Since the task is to minimize number of edges, 
we would prefer to follow 3*i.  

Let us follow multiple of 3.

1 => 3 => 9 => 27 => 81, now we can't follow multiple
of 3. So we will have to follow i+1. This solution gives
a long path.

What if we begin from end, and we reduce by 1 if 
the value is not multiple of 3, else we divide by 3.
100 => 99 => 33 => 11 => 10 => 9 => 3 => 1

So we need total 7 edges.


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

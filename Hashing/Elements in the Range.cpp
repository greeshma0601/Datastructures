/*
Elements in the Range Submissions: 2673   Accuracy: 38.5%   Difficulty: Basic   Marks: 1
     
Problems
An array containing positive elements is given. ‘A’ and ‘B’ are two numbers defining a range. Write a function to check if the array contains all elements in the given range.

Input:
The first line of input contains an integer T denoting the number of test cases. Each test case contains space separated integers n, A and B which denotes the number of elements in the array a[] and the range [A, B]. Next line contains space separated n elements in the array a[].

Output:
Print "Yes" if all the elements in the range are present else print "No".

Constraints:
1<=T<=100
1<=n<=1000
1<= A < B<=1000
1<=a[i]<=1000​

Example:
Input:
1
7 2 5
1 4 5 2 7 8 3

Output:
Yes
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
 int n,i,l,r;cin>>n>>l>>r;unordered_set<int>s;
 int a[n];for(i=0;i<n;i++){cin>>a[i];s.insert(a[i]);}
 int m=r-l+1;
 int b[m];
 for(i=0;i<m;i++)
 {
     b[i]=l;
     l++;
   
 }
 int f=1;
 for(i=0;i<m;i++)
 {
     if(s.find(b[i]) == s.end())
     {
         f=0;break;
     }
 }
 if(f)cout<<"Yes"<<endl;
 else cout<<"No"<<endl;
 }
	//code
	return 0;
}

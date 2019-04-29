/*
Rearrange an array such that arr[i] = i
Given an array of size N that has elements ranging from 0 to N-1. All elements may not be present in the array. If element is not present then there will be -1 present

in the array. Rearrange the array such that A[i] = i, and if i is not present, display -1 at that place.

Input:
The first line of the input contains a single integer T, denoting the number of test cases. Then T test case follows. Each test case contains 2 lines:-
The size of the array N
Elements of the array separated by spaces

Output:
For each testcase, print the modified array.

Constraints:
1<=T<=100
1<=N<=1000
0<=A[i]<=N-1

Example:

Input:
2
10
-1 -1 6 1 9 3 2 -1 4 -1
20
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19

Output:
-1 1 2 3 4 -1 6 -1 -1 9
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19

 
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
 int n,i;cin>>n;map<int,int>mp;
 int a[n];for(i=0;i<n;i++){cin>>a[i];if(a[i]!=-1){mp[a[i]]=i;}}//int i=0;
 for(i=0;i<n;i++)
 {
     if(mp.find(i)!=mp.end())
     a[i]=i;
     else
     a[i]=-1;
     //i++;
 
     cout<<a[i]<<" ";
 }
 cout<<endl;
 
     
 }
	//code
	return 0;
}

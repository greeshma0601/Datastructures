/*
In First But Second Submissions: 5460   Accuracy: 30.74%   Difficulty: Medium   Marks: 4
Associated Course(s):   Interview Preparation
         
Problems
Given two arrays A and B of positive integers. Your task is to find numbers which are present in the first array, but not present in the second array.

Input:
The first line of input contains an integer T denoting the number of test cases. Each test case contains space separated integers N and M which denotes the number of elements in the array A and B. Next two line contains space separated array elements.

Output:
Print space separated numbers present in the first array but not in the second.
 
Constraints:
1 <= T <= 100
1 <= N, M <= 107
1 <= Ai,Bi <= 1018

Example:
Input:
2
6 5
1 2 3 4 5 10
2 3 1 0 5
5 5
4 3 5 9 11
4 9 3 11 10

Output:
4 10 
5

Explanation:
Testcase 1: 4 and 10 are present in first array while not in second array.
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
 long long int n1,n2,i;cin>>n1>>n2;long long int x;
 long long int a[n1];vector<int>v;
 for(i=0;i<n1;i++)cin>>a[i];
 unordered_set<int>s;
 for(i=0;i<n2;i++){cin>>x;s.insert(x);}
 for(i=0;i<n1;i++)
 {
    if(s.find(a[i]) == s.end())
     {
         cout<<a[i]<<" ";
     }
 }
 cout<<endl;
 }
	//code
	return 0;
}

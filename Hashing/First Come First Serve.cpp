/*
First Come First Serve Submissions: 1050   Accuracy: 52.96%   Difficulty: Basic   Marks: 1
      
Problems
CodeMart is an online shopping platform and it is distributing gift vouchers to its esteemed users. The voucher can be redeemed by providing a fixed amount of shopping credits.Each credit is sent by a user one by one. Since there is a huge rush of people you are required to manage the users on the basis of first come first serve. The user which comes first and has k occurrences of credits is given the voucher first. You are given an array with the id's of the users in chronological order of the credits sent by them. You are required to print the id of the user which will be served first. If no such user meets the condition print "-1".    

Input:
The first line of input contains an integer T denoting the number of test cases. Each test case contains two integers n and k where n denoted the number of elements in the array a[]. Next line contains space separated n elements in the array a[].

Output:
Output a single integer which is the number of first k occurrences. Output "-1" if no such number exists.

Constraints:
1<=T<=10
1<=n<=1000
1<=a[i]<=100000
1<=k<=100

Example:
Input:
2
7 2
1 7 4 3 4 8 7
6 1
4 1 6 1 6 4
Output:
7
-1
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
 int n,i,k;cin>>n>>k;
 int a[n];
 unordered_map<int,int>mp;int f=0,c=-1;
 for(i=0;i<n;i++){cin>>a[i];mp[a[i]]++;}
/* for(auto it=mp.begin();it!=mp.end();it++)cout<<it->first<<" ";cout<<endl;
 for(auto it=mp.begin();it!=mp.end();it++)*/
 
 for(i=0;i<n;i++)
 {
 if(mp[a[i]]==k){c=a[i];break;}
 }
 cout<<c<<endl;
 }
	//code
	return 0;
}

/*
Smallest number on left
Given an array of integers, find the nearest smaller number for every element such that the smaller element is on left side.If no small element present on the left print -1.

Input:

The first line of input contains T test cases. 

The first line of each test case contains the number of elements in the array.

The second line of each test case contains the elements of the array.

Output:

Print the n elements.
Constraints:

1<=T<=100

1<=N<=100

0<=A[i]<10000
Example:

Input:

2

3

1 6 2

6

1 5 0 3 4 5

Output:

-1 1 1

-1 1 -1 0 3 4

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
 int n,i;cin>>n;
 int a[n];for(i=0;i<n;i++)cin>>a[i];
 if(n == 1)cout<<"-1";else{
 stack<int>s;
 s.push(a[0]);
 cout<<"-1"<<" ";
 for(i=1;i<n;i++)
 {
   
     if(a[i]>s.top())
     {
         cout<<s.top()<<" ";
         s.push(a[i]);
     }
     else
     {
         while(!s.empty() && a[i]<=s.top())
         {
             s.pop();
         }
         if(s.empty()){
             cout<<"-1"<<" ";
         }
         else
         {
             cout<<s.top()<<" ";
         }
         s.push(a[i]);
     }
 }
 }
 cout<<endl;
 }
	//code
	return 0;
}

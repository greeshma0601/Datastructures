/*
Delete array elements which are smaller than next or become smaller
Given an array arr[] and a number k. The task is to delete k elements which are smaller than next element (i.e., we delete arr[i] if arr[i] < arr[i+1]) or become smaller than next because next element is deleted.

Input:
The first line contains an integer T, the number of test cases. For each test case, the first line contains an integer n, denoting the size of the array. Next line contains n space separated integers, followed by an integer k, denoting the number of elements to be deleted from the array.

Output:
For each test case, the output is the array arr[] after deleting the k elements from the array if possible, else print the left array as it is.

Constraints:
1<=T<=100
2<=n<=100
1<=k<=100

Example:
Input
4
3
3 100 1
1
5
20 10 25 30 40
2
5
23 45 11 77 18
3
2
2 5
2
Output
100 1
25 30 40
77 18
5

Explanation:
1. arr[0] < arr[1] means 3 is less than 100, so delete 3.
2. First we delete 10 because it follows arr[i] < arr[i+1]. Then we delete 20 because 25 is moved next to it and it also starts following the condition.
3. We delete 23, 45 and 11 as they follow the condition arr[i] < arr[i+1].
4.  As after deleting 2, we are left with 5 only and hence 5 is the answer.

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
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 int i,n;
 cin>>n;
 int a[n];
 for(i=0;i<n;i++)
 cin>>a[i];
 int k,j=0;
 cin>>k;
 stack<int>s1;
 stack<int>s2;
 
 for(i=0;i<n;i++)
 {
     if(s1.empty() || a[i]<s1.top())
     {
         s1.push(a[i]);
     }
     else
     {
         while(!s1.empty() && j<k && s1.top()<a[i])
         {
             s1.pop();
             j++;
         }
         s1.push(a[i]);
     }
 }
 while(!s1.empty())
 {
     s2.push(s1.top());
     s1.pop();
 }
 while(!s2.empty())
 {
     cout<<s2.top()<<" ";
 
     s2.pop();
 }
  cout<<endl;   
 }
	//code
	return 0;
}

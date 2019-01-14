/*
Count pairs with given sum
Given an array of integers, and an integer  ‘K’ , find the count of pairs of elements in the array whose sum is equal to 'K'.

Input:
First line of the input contains an integer T, denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains 2 space separated integers N and K denoting the size of array and the sum respectively. Second line of each test case contains N space separated integers denoting the elements of the array.

Output:
Print the count of pairs of elements in the array whose sum is equal to the K.

Constraints:
1<=T<=50
1<=N<=50
1<=K<=50
1<=A[i]<=100

Example:
Input
2
4 6
1  5  7 1
4 2
1 1 1 1
Output
2
6
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
     int n,sum,i;
     cin>>n>>sum;
     int a[n];
     for(i=0;i<n;i++)
     cin>>a[i];
     
     unordered_map<int,int> m;
     for(i=0;i<n;i++)
     m[a[i]]++;
     int tc=0;
     for(i=0;i<n;i++)
    {
        tc=tc+m[sum-a[i]];
        if(sum-a[i]==a[i])
        tc--;
    }
    cout<<(tc/2)<<endl;;
     
    
 }
	//code
	return 0;
}

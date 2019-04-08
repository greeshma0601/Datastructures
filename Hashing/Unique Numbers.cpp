/*

Unique Numbers Submissions: 3175   Accuracy: 44.82%   Difficulty: Basic   Marks: 1
      
Problems
In given range, print all numbers having unique digits. e.g. In range 1 to 20 should print all numbers except 11.

Input:
First line consists of T test cases.
The only line of every test case consists of two integers m and n separated by a space.

Output:
For each test case print all unique numbers separated by space.

Constraints:
1<=T<=100
1<=m,n<1000

Example:
Input:
1
10 20
Output:
10 12 13 14 15 16 17 18 19 20
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool check(int n)
{
    map<char,int>m;
    string s=to_string(n);
   // cout<<s<<endl;
    for(int i=0;i<s.length();i++)
    {
        m[s[i]]++;
    }
    for(auto it=m.begin();it!=m.end();it++)
    {
        if(it->second>1)
        return 0;
    }
    return 1;
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 int a,b;
 cin>>a>>b;
 for(int i=a;i<=b;i++)
 {
     if(check(i))
     cout<<i<<" ";
 }
 cout<<endl;
 }
	//code
	return 0;
}

/*
Remove repeated digits in a given number Submissions: 4708   Accuracy: 37.47%   Difficulty: Basic   Marks: 1
       
Problems
Given an integer N, remove consecutive repeated digits from it.

Input:

The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. The first line of each test case contains the integer N.

Output:

Print the number after removing consecutive digits. Print the answer for each test case in a new line.


Constraints:

1<= T <=100

1<= N <=1018


Example:

Input:

1

12224

Output:

124
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
 string s;
 cin>>s;stack<char>st;
 /*set<int>st;vector<char>v;
 for(int i=1;i<=s.length();i++)
 {
     if(s[i]!=s[i-1])v.push_back(s[i-1]);
    
 }
 for(auto it= v.begin();it!=v.end();it++)cout<<*it;
 cout<<endl;*/
 st.push(s[0]);cout<<s[0];
 for(int i=0;i<s.length();i++)
 {
     if(st.top() == s[i]){}else{cout<<s[i];st.push(s[i]);}
 }
 cout<<endl;
 }
	//code
	return 0;
}

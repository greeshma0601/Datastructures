/*
Reverse each word in a given string
Given a String of length N reverse each word in it. Words are separated by dots.

Input:
The first line contains T denoting the number of testcases. Then follows description of testcases. Each case contains a string containing dots and characters.
 

Output:
For each test case, output a String in single line containing the reversed words of the given String.

Constraints:
1<=T<=10
1<=Length of String<=2000


Example:
Input:
2
i.like.this.program.very.much
pqr.mno

Output:
i.ekil.siht.margorp.yrev.hcum
rqp.onm

 
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
 cin>>s;
 //string s1="";
 stack<char>st;int x,y;
 for(int i=0;i<=s.length();i++)
 {
     if(s[i]!='.' && s[i]!='\0' )
     {st.push(s[i]);}
     else 
     {
         x=st.size();
         while(x--)
         {
             cout<<st.top();
             st.pop();
         }
         if(s[i]!='\0')
         cout<<'.';
     }
 }
 cout<<endl;
 }
	//code
	return 0;
}

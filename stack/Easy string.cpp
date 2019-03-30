//COUNT THE NO. OF OCCURRENCES OF CHARACTER THEN PRINT THE COUNT AND THEN CHARACTER.

//Also, using stack might be a good idea!

/*
Easy string Submissions: 2436   Accuracy: 36.34%   Difficulty: Easy   Marks: 2
     
Problems
Compress the string when lower and upper case are same. In compressed string characters should be in lowercase.

for ex:     input    aaABBb

               output  3a3b

Input

The first line of the input contains a single integer T denoting the number of test cases.
The first line of each test case contains string s.
Output

For each test case, output the required string.

Constraints

    •    1 ≤ T ≤ 101

    •    1 ≤ |s|≤ 1000

Example

Input:

3

aabbB

abc

aaacca

Output:

2a3b

1a1b1c

3a2c1a

*/

#include<bits/stdc++.h>
#include<iostream>
#include<string>
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
 transform(s.begin(),s.end(),s.begin(),::tolower);
 //cout<<s<<endl;
 int i,c=1,n=s.length();
for(i=0;i<n;i++)
{
    if(s[i] == s[i+1])
    {
        c++;
    }
    else 
    {
        cout<<c<<s[i];
        c=1;
    }
}
cout<<endl;
     
 }
	//code
	return 0;
}

/*
Pattern Searching Submissions: 8389   Accuracy: 34.71%   Difficulty: Easy   Marks: 2
            
Given a text and a pattern. Find whether the pattern exist in the text or not. If it is present print "found" without quotes else print "not found"
without quotes.

Input:

The first line of input contains an integer T denoting the number of test cases. Each test case consist of a string in 'lowercase' only in a
separate line.

Output:

Print "found" or "not found" in a separate line.


Constraints:

1 ≤ T ≤ 30
1 ≤ |s| ≤ 100


Example:

Input
1
geeksforgeeks
geeks
Output
found

*/
#include<iostream>
using namespace std;
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {

string s,r; cin>>s>>r;
std::size_t f = s.find(r); 
if(f==std::string::npos)
cout<<"not found"<<endl; else cout<<"found"<<endl;
 }
	//code
	return 0;
}

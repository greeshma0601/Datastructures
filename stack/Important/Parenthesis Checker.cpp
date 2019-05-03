/*
Parenthesis Checker Submissions: 72954   Accuracy: 27.18%   Difficulty: Medium   Marks: 4
Associated Course(s):   Interview Preparation   Geeks Classes DSA More
                   
Problems
Given an expression string exp. Examine whether the pairs and the orders of “{“,”}”,”(“,”)”,”[“,”]” are correct in exp.
For example, the program should print 'balanced' for exp = “[()]{}{[()()]()}” and 'not balanced' for exp = “[(])”

Input:
The first line of input contains an integer T denoting the number of test cases.  Each test case consists of a string of expression, in a separate line.

Output:
Print 'balanced' without quotes if the pair of parenthesis is balanced else print 'not balanced' in a separate line.

Constraints:
1 ≤ T ≤ 100
1 ≤ |s| ≤ 105

Example:
Input:
3
{([])}
()
([]

Output:
balanced
balanced
not balanced
*/
#include<bits/stdc++.h>
using namespace std;
bool checkbracket(string str)
{
    stack<char> s;
    char x;
    for(int i=0;i<str.length();i++)
    {
        if(str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            s.push(str[i]);
            continue;
        }
        if(s.empty()){
            return false;
        }
        switch(str[i])
        {
            case ')':
                    x=s.top();
                    if(x == '{' || x=='[')
                        return false;
                    s.pop();
                    break;
            case '}':
                    x=s.top();
                    if(x == '(' || x=='[')
                        return false;
                    s.pop();
                    break;
            case ']': x=s.top();
                        if(x == '(' || x=='{')
                         return false;
                        s.pop();
                    break;
        }
    }
    if(s.empty()) return true;
    return false;
    
}
int main() {
	//code
	int test;
	cin>>test;
	while(test!=0)
	{
	string str;
	cin>>str;
	if(checkbracket(str))
	    cout<<"balanced"<<endl;
	else
	    cout<<"not balanced"<<endl;
	test--;
	}
	return 0;
}

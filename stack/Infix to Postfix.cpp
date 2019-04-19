/*
Infix to Postfix Submissions: 9058   Accuracy: 42.63%   Difficulty: Medium   Marks: 4
Associated Course(s):   Geeks Classes in Noida   Geeks Classes DSA
        
Problems
Given an infix expression in the form of a string str. Conver this infix expression to postfix expression.

Infix expression: The expression of the form a op b. When an operator is in-between every pair of operands.
Postfix expression: The expression of the form a b op. When an operator is followed for every pair of operands.
Input:
The first line of input contains an integer T denoting the number of test cases. The next T lines contains an infix expression.The expression contains all characters and ^,*,/,+,-.

Output:
For each testcase, in a new line, output the infix expression to postfix expression.

Constraints:
1 <= T <= 100
1 <= length of str <= 103

Example:
Input:
2
a+b*(c^d-e)^(f+g*h)-i
A*(B+C)/D

Output:
abcd^e-fgh*+^*+i-
ABC+*D/


*/

#include <bits/stdc++.h>
using namespace std;

stack<char>st;

int isprec(char ch)
{
    if(ch=='^')
        return 3;
    else if(ch=='*' || ch=='/')
        return 2;
    else if(ch=='+' || ch=='-')
        return 1;
    else
        return -1;
}

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='(')
                st.push(str[i]);
            else if(str[i]==')')
            {
                while(!st.empty()&&st.top()!='(')
                {
                    cout<<st.top();
                    st.pop();
                }
                
                st.pop();
            }
            else if( (tolower(str[i])>='a') && (tolower(str[i])<='z') )
                cout<<str[i];
            else
            {
                
                    while(!st.empty() && isprec(str[i]) <= isprec(st.top()))
                    {
                        cout<<st.top();
                        st.pop();
                    }
                    st.push(str[i]);
                //}
            }
        }
        while(!st.empty())
        {
            cout<<st.top();
            st.pop();
        }
        cout<<endl;
    }
	return 0;
}

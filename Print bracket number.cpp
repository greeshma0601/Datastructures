/*Input:
3​
(a+(b*c))+(d/e)​
((())(()))
((((()
Output:
1 2 2 1 3 3
1 2 3 3 2 4 5 5 4 1
1 2 3 4 5 5*/
#include<cstring>
#include <iostream>
#include<stack>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int l1=0,i;
	    stack<int> st;
	    int len=s.length();
	    for(i=0;i<len;i++)
	    {
	        if(s[i]=='(')
	        {
	            l1++;
	            st.push(l1);
	            cout<<l1<<" ";
	        }
	        if(s[i]==')')
	        {
	           cout<<st.top()<<" ";
	           st.pop();
	        }
	    }
	    cout<<endl;
	    
	}
	return 0;
}

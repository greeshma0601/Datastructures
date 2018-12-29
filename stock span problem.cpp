#include <iostream>
#include<stack>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n;
	    int p[n],s[n];
	    for(i=0;i<n;i++)
	    cin>>p[i];
	    stack<int> st;
	    s[0]=1;
	    st.push(0);
	    for(i=1;i<n;i++)
	    {
	        while(!st.empty() && p[st.top()]<=p[i])
	        {st.pop();}
//	        s[i]=((st.empty))?(i+1):(i-st.top());
 s[i] = (st.empty())?(i+1):(i-st.top());
	        st.push(i);
	    }
	    for(i=0;i<n;i++)
	    cout<<s[i]<<" ";
	    cout<<endl;
	}
	return 0;
}

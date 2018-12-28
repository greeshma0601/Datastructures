#include<bits/stdc++.h>
using namespace std;
void reverse(char *str, int len);
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char str[10000];
        cin>>str;
        long long int len=strlen(str);
        reverse(str,len);
        cout<<str;
        cout<<endl;
    }
        return 0;
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

void reverse(char *str, int len)
{
// Your code goes here
int i;
stack<char> s;
for(i=0;i<len;i++)
{
    s.push(str[i]);
}
for(i=0;i<len;i++)
{
    str[i]=s.top();
    s.pop();
}
str[i]='\0';
}

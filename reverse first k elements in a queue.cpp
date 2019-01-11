{
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;
#define ll long long
queue<ll> modifyQueue(queue<ll> q, int k);
int main(){
    ll t;
    cin>>t;
    while(t-->0){
        ll n,k;
        cin>>n>>k;
        queue<ll> q;
        while(n-->0){
            ll a;
            cin>>a;
            q.push(a);
        }
        queue<ll> ans=modifyQueue(q,k);
        while(!ans.empty()){
            int a=ans.front();
            ans.pop();
            cout<<a<<" ";
        }
        cout<<endl;
    }
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
queue<ll> modifyQueue(queue<ll> q, int p)
{
    //add code here.
    
     int x = q.size();
     int j=x;
    int y=p;
    int k;
    int a[x+1];
    k=0;
    while(x--)
    {
        a[k++]=q.front();
        q.pop();
    }
    int e=k;
    k=p-1;
    while(k>=0)
    {
        q.push(a[k]);
        k--;
    }
   /* for(int i=0;i<k;i++)
    cout<<a[i]<<" ";*/
    int qs=j-y+1;
    int w=qs-1;
    while(w--)
    {
        q.push(a[y]);
        y++;
    }
    return q;
    
}

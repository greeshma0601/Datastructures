#include<iostream>
#include<stack>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;cin >> t;
    while(t--){
        int n;
    stack <long long int> mystack;
    cin >> n;
    long long int arr[n],ans[n];
    for(int i = 0;i < n;++i)
        ans[i] = -1;
    for(int i = 0;i < n;++i)
        cin >> arr[i];
    for(int i = 0;i < n;++i)
    {
            while(!mystack.empty() && arr[i] > arr[mystack.top()])
            {
                int a = mystack.top();
                mystack.pop();
                ans[a] = arr[i];
            }
        mystack.push(i);
    }
    for(int i = 0;i < n;++i)
        cout << ans[i] << " ";
        cout << endl;
    }
    
    return 0;
}

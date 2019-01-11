/*
Queue Reversal
Given a Queue q containing n elements, you need to reverse the Queue. Your task is to complete the function rev(), that reverses the n elements of the queue.

Input: 
The first line of input contains an integer T denoting the Test cases. Then T test cases follow. The first line contains n which is the number of elements which will be reversed. Second line contains n space seperated elements.

Output:
Prints the required anser.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 10^5
1 ≤ elements of Queue ≤ 10^5

Example:
Input : 
2
6
4 3 1 10 2 6
4
4 3 2 1 

Output : 
6 2 10 1 3 4
1 2 3 4

*/


{
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;
queue<long long int> rev(queue<long long int> q);
int main()
{
    long long int test;
    cin>>test; 
    while(test--)
    {
    queue<long long int> q; 
    long long int n, var; 
    cin>>n; 
    while(n--)
    {
        cin>>var; 
        q.push(var);
    }
    queue<long long int> a=rev(q); 
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl; 
    }
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//function Template for C++
queue<long long int> rev(queue<long long int> q)
{
    // add code here.
    long long int x = q.size();
    long long int y=x;
    int k;
    int a[x];
    k=0;
    while(x--)
    {
        a[k++]=q.front();
        q.pop();
    }
    k--;
    while(y--)
    {
        q.push(a[k]);
        k--;
    }
    return q;
    
}

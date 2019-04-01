/*
DFS of Graph Submissions: 14606   Accuracy: 49.62%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation
          
Problems
Given N edges of a graph. The task is to do depth first traversal of the graph.
Note: Please use recursive approach.

Input:
First line of input contains number of testcases T. For each testcase, first line contains number of edges and next line contains N pairs of integers (X and Y each) where X Y means an edge from X to Y.

Output:
For each testcase, print the nodes while doing DFS starting from node 1.

Your task:
The task is to complete the function dfs() which should do the depth first traversal of given graph and prints the node in DFS order.

Constraints:
1 <= T <= 100
1 <= N <= 500

Example:
Input:
1
4
1 2 1 3 1 4 3 5

Output:
1 2 3 5 4    // dfs from node 1

Explanation:
Testcase 1: There is  one test cases.  First line of each test case represent an integer N denoting number of edges and then in the next line N pairs of values a and b are fed which denotes there is an edge from a to b.
 
*/
{
#include<bits/stdc++.h>
using namespace std;
void dfs(int s,vector<int> g[],bool vis[]);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        bool vis[100001];
        vector<int> g[100001];
        memset(g,0,sizeof g);
        memset(vis,false,sizeof vis);
        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        dfs(1,g,vis);
        cout<<endl;
    }
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* You have to complete this function
which prints out the depth first level traversal of the 
graph starting from node s
the vector<int> g[i] represent the adjacency 
list of the ith node of the graph
 */
void dfs(int s, vector<int> g[], bool vis[])
{
    
    // Your code here
    vis[s]=true;
    cout<<s<<" ";
    vector<int>::iterator i;
    for( i=g[s].begin();i!=g[s].end();++i)
    {
        if(!vis[*i])
        {
            dfs(*i,g,vis);
        }
    }
}

/*
BFS of graph Submissions: 16855   Accuracy: 42.71%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation
                 
Problems
Given N, number of edges for a graph. The task is to do Breadth First Search of this graph.

Input:
First line of input contains number of testcases T. For each testcase, first line of input contains N, for which 2*N numbers (N pairs as X Y) are given in the next line which represents an edge from X to Y.

Output:
For each testcase, print the BFS of the graph starting from 1.

Note : The expected output button always produces BFS starting from node 1.

User Task:
Since, this is a functional problem, your task is to complete the function bfs() which do BFS of the given graph starting from node 1 and prints the nodes in BFS order.

Constraints:
1 <= T <= 100
1 <= N <= 100

Example:
Input:
1
4
1 2 1 3 1 4 3 5

Output:
1 2 3 4 5    // BFS from node 1

Explanation:
Testcase 1: There is  one test cases.  First line of each test case represent an integer N denoting no of edges and then in the next line N pairs of values a and b are fed which denotes there is a unidirectional edge from a to b .
 
*/

#include<bits/stdc++.h>
using namespace std;
bool vis[1001];
vector<int> g[1001];
void bfs(int s,vector<int> adj[],bool vis[]);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        memset(g,0,sizeof g);
        memset(vis,false,sizeof vis);
        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
        }
        bfs(1,g,vis);
        cout<<endl;
    }
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* You have to complete this function*/
void bfs(int s,vector<int> adj[],bool vis[])
{
    queue<int> q;
    q.push(s);
    vis[s]=true;
    while(!q.empty()){
        int node = q.front();
        cout<<node<<" ";
        q.pop();
        for(auto i:adj[node]){
            if(!vis[i]){
                vis[i]=true;
                q.push(i);
            }
        }
    }
}

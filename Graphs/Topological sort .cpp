/*
Topological sort Submissions: 14440   Accuracy: 40%   Difficulty: Medium   Marks: 4
Associated Course(s):   Interview Preparation   Geeks Classes DSA More
                 
Problems
Given a directed graph, you need to complete the function topoSort which returns an array having the topologically sorted elements of the array and takes two arguments. The first argument is the Graph graph represented as adjacency list and the second is the number of vertices N.

Note : There can be multiple topological sorts of a Graph.  The driver program that calls your function doesn't match your output element by element, but checks whether the output produced by your function is a valid topological sort or not.

Input:
The first line of input takes the number of test cases then T test cases follow . Each test case contains two lines. The first  line of each test case  contains two integers E and N representing no of edges and the number of vertices. Then in the next line are E  pairs of integers u, v representing an edge from u to v in the graph.

Output:
For each test case output will be 1 if the topological sort is done correctly else it will be 0 .

Constraints:
1 <= T <= 50
1 <= E, N <= 50
0 <= u, v

Example:
Input
1
6 6 
5 0 5 2 2 3 4 0 4 1 1 3

Output:
1

Explanation:
Testcase 1: The output 1 denotes that the order is valid.  So, if you have implemented your function correctly, then output would be 1 for all test cases.
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> graph[10001];
int * topoSort(vector<int> graph[],int N);
int main()
{
int T;
cin>>T;
while(T--)
{
    memset(graph,0,sizeof graph);
    int N,E;
    cin>>E>>N;
    for(int i=0;i<E;i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
    }
    int *res = topoSort(graph,N);
    bool valid =true;
    for(int i=0;i<N;i++)
    {
        int n=graph[res[i]].size();
        for(int j=0;j<graph[res[i]].size();j++)
        {
            for(int k=i+1;k<N;k++)
            {
                if(res[k]==graph[res[i] ] [j] )
                    n--;
            }
        }
        if(n!=0)
        {
            valid =false;
            break;
        }
    }
    if(valid==false)
        cout<<0<<endl;
    else
        cout<<1<<endl;
}
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* You need to complete this function */
void topologicalsort(int v,bool visited[],stack<int>&s)
{
    visited[v]=true;
    for(auto i=graph[v].begin();i!=graph[v].end();i++)
    {
        if(!visited[*i])
        topologicalsort(*i,visited,s);
    }
    s.push(v);
}
int * topoSort(vector<int> graph[], int n)
{
   // Your code here
   stack<int>s;
   int i;
   bool *visited=new bool[n];
   int *a=new int[n];
   for(i=0;i<n;i++)
  visited[i]=false;
   for(i=0;i<n;i++)
   if(!visited[i])
   topologicalsort(i,visited,s);
   i=0;
   while(!s.empty())
   {
       a[i++]=s.top();
       s.pop();
   }
   return a;
}

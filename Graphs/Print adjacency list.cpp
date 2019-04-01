/*
Print adjacency list Submissions: 10395   Accuracy: 37.72%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation
   
Problems
Given number of edges 'E' and vertices 'V' of a bidirectional graph. Your task is to build a graph through adjacency list and print the adjacency list for each vertex.

Input:
The first line of input is T denoting the number of testcases.Then first line of each of the T contains two positive integer V and E where 'V' is the number of vertex and 'E' is number of edges in graph. Next, 'E' line contains two positive numbers showing that there is an edge between these two vertex.

Output:
For each vertex, print their connected nodes in order you are pushing them inside the list . See the  given  example.

Constraints:
1 <= T <= 200
1 <= V <= 103
1 <= E = V*(V-1)

Example:
Input:
1
5 7
0 1
0 4
1 2
1 3
1 4
2 3
3 4

Output:
0-> 1-> 4 
1-> 0-> 2-> 3-> 4 
2-> 1-> 3 
3-> 1-> 2-> 4 
4-> 0-> 1-> 3

Explanation:
Testcase 1: Given graph has 5 nodes and 7 edges. After creating adjacency list of given graph, we have list as:
0-> 1-> 4 
1-> 0-> 2-> 3-> 4 
2-> 1-> 3 
3-> 1-> 2-> 4 
4-> 0-> 1-> 3
*/
// A simple representation of graph using STL 
#include<bits/stdc++.h> 
using namespace std; 

// A utility function to add an edge in an 
// undirected graph. 
void addEdge(vector<long long int> adj[], long long int u,long long  int v) 
{ 
	adj[u].push_back(v); 
	adj[v].push_back(u); 
} 

// A utility function to print the adjacency list 
// representation of graph 
void printGraph(vector<long long int> adj[],long long int V) 
{ 
	for (long long int v = 0; v < V; ++v) 
	{ 
	cout<<v;
		for (auto x : adj[v]) 
		cout << "-> " << x; 
		printf("\n"); 
	} 
} 

// Driver code 
int main() 
{ 
	int t;cin>>t;
	while(t--)
	{
	    
	long long int v,e;
	cin>>v>>e;
	vector<long long int> adj[v];
	for(long long int i=0;i<e;i++){
	    
	long long int v1,v2;
	cin>>v1>>v2;
	addEdge(adj, v1,v2); 
}
	printGraph(adj, v);
//	cout<<endl;
	}
	return 0; 
} 

/*
Find the number of islands Submissions: 16283   Accuracy: 38.66%   Difficulty: Medium   Marks: 4
Associated Course(s):   Geeks Classes DSA   Geeks Classes in Noida
                                  
Problems
A group of connected 1's forms an island. The task is to complete the method findIslands() which returns the number of islands present. The function takes three arguments the first is the boolean matrix A and then the next two arguments are N and M denoting the size(N*M) of the matrix A .

Input:
The first line of input will be the number of testcases T, then T test cases follow. The first line of each testcase contains two space separated integers N and M. Then in the next line are the NxM inputs of the matrix A separated by space .

Output:
For each testcase in a new line, print the number of islands present.

User Task:
Since this is a functional problem you don't have to worry about input, you just have to complete the function findIslands().

Constraints:
1 <= T <= 100
1 <= N, M <= 50
0 <= A[i][j] <= 1

Example(To be used only for expected output) :
Input
1
3 3
1 1 0 0 0 1 1 0 1

Output
2

Explanation:
Testcase 1: The graph will look like
1 1 0
0 0 1
1 0 1
Here, two islands will be formed
First island will be formed by elements {A[0][0] ,  A[0][1], A[1][2], A[2][2]}
Second island will be formed by {A[2][0]}.

*/

#include <bits/stdc++.h>
using namespace std;
#define MAX 1000  
int findIslands(int A[MAX][MAX],int N,int M);
int main() {
	// your code goes here
	int T;
	cin>>T;
	int A[MAX][MAX];
	while(T--)
	{
		int N,M;
		cin>>N>>M;
		memset(A,0,sizeof A);
		for(int i=0;i<N;i++)
		for(int j=0;j<M;j++)
		cin>>A[i][j];
		cout<<findIslands(A,N,M)<<endl;
	}
	return 0;
}
}

/*you are required to complete this method*/
void DFS(int a[MAX][MAX],int i,int j,int n,int m){
    if(i<0 || i>=n || j<0 || j>=m ||a[i][j]==0) return;
    
    a[i][j]=0;
    DFS(a,i+1,j,n,m);
    DFS(a,i-1,j,n,m);
    DFS(a,i,j+1,n,m);
    DFS(a,i,j-1,n,m);
    DFS(a,i+1,j+1,n,m);
    DFS(a,i-1,j-1,n,m);
    DFS(a,i-1,j+1,n,m);
    DFS(a,i+1,j-1,n,m);
}

int findIslands(int A[MAX][MAX], int N, int M)
{
//Your code here 
    int count=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++)
            {
                if(A[i][j]==1)
                 {  
                     DFS(A,i,j,N,M);
                      count++;
                 }
            }
    }
    return count;
}

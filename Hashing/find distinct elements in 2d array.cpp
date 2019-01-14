/*

Given a N x N matrix. Write a program to find count of all the distinct elements common to all rows of the matrix. Print count of such elements.

Input:
First line of input contains a single integer T which denotes the number of test cases. T test cases follows. First line of each test case contains a single integer N which denotes the dimension of matrix. Second line of each test case contains N*N space separated integers which denotes elements of the matrix.

Output:
For each test case, print count of all the distinct elements common to all rows of the matrix.

Constraints:
1 <= T <= 100
1 <= N <= 1000

Example:
Input:
2
4
2 1 4 3 1 2 3 2 3 6 2 3 5 2 5 3
5
12 1 14 3 16 14 2 1 3 35 14 1 14 3 11 14 25 3 2 1 1 18 3 21 14

Output:
2
3


*/

#include<iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;

int printDistinct(int a[1000][1000], int n)
{
    unordered_set<int> m;
    
    for(int i=0; i<n; i++)
        m.insert(a[0][i]);
    
    for(int i=1; i<n; i++){
        unordered_set<int> s;
        for(int j=0; j<n; j++)
            s.insert(a[i][j]);
         for(auto it=m.begin(); it!=m.end();){
        if(s.find(*it) == s.end()) it=m.erase(it);
        else it++;
    }   
     /*   for(auto it=m.begin(); it!=m.end(); it++){
            if(s.find(*it) == s.end())
                m.erase(*it);
        }*/
        
        if(m.size()==0)
            break;
    }
    
    return m.size();
}

int main()
 {
	//code
	int tc,n;
	cin >> tc;
	while(tc--){
	    cin >> n;
	    int a[1000][1000];
	    
	    for(int i=0; i<n; i++){
	        for(int j=0; j<n; j++)
	            cin >> a[i][j];
	    }
	    
	    cout << printDistinct(a,n) << "\n";
	}
	return 0;
}

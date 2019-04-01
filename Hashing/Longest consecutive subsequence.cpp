/*
1) Create an empty hash.
2) Insert all array elements to hash.
3) Do following for every element arr[i]
....a) Check if this element is the starting point of a 
       subsequence.  To check this, we simply look for
       arr[i] - 1 in hash, if not found, then this is
       the first element a subsequence.  
    
       If this element is a first element, then count 
       number of elements in the consecutive starting 
       with this element.

       If count is more than current res, then update    
       res.

Longest consecutive subsequence Submissions: 11111   Accuracy: 49.37%   Difficulty: Medium   Marks: 4
Associated Course(s):   Geeks Classes DSA   Geeks Classes in Noida
        
Problems
Given an array arr[] of positive integers. Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, the consecutive numbers can be in any order.

Input:
The first line of input contains T, number of test cases. First line of line each test case contains a single integer N.
Next line contains N integer array.

Output:
Print the output of each test case in a seprate line.

Constraints:
1 <= T <= 100
1 <= N <= 105
0 <= a[i] <= 105

Example:
Input:
2
7
2 6 1 9 4 5 3
7
1 9 3 10 4 20 2

Output:
6
4

Explanation:
Testcase 1:  The consecutive numbers here are 1, 2, 3, 4, 5, 6. These 6 numbers form the longest consecutive subsquence.

Testcase2: 1, 2, 3, 4 is the longest consecutive subsequence.
*/
// C++ program to find longest contiguous subsequence 
#include<bits/stdc++.h> 
using namespace std; 

// Returns length of the longest contiguous subsequence 
int findLongestConseqSubseq(int arr[], int n) 
{ 
	unordered_set<int> S; 
	int ans = 0; 

	// Hash all the array elements 
	for (int i = 0; i < n; i++) 
		S.insert(arr[i]); 

	// check each possible sequence from the start 
	// then update optimal length 
	for (int i=0; i<n; i++) 
	{ 
		// if current element is the starting 
		// element of a sequence 
		if (S.find(arr[i]-1) == S.end()) 
		{ 
			// Then check for next elements in the 
			// sequence 
			int j = arr[i]; 
			while (S.find(j) != S.end()) 
				j++; 

			// update optimal length if this length 
			// is more 
			ans = max(ans, j - arr[i]); 
		} 
	} 
	return ans; 
} 

// Driver program 
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
		cout<< findLongestConseqSubseq(a, n)<<endl; 
	}
	return 0; 
} 

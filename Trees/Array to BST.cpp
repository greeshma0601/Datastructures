/*
Array to BST Submissions: 16452   Accuracy: 31.73%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation
            
Problems
Given a sorted array. Write a program that creates a Balanced Binary Search Tree using array elements. If there are N elements in array, then floor(n/2)'th element should be chosen as root and same should be followed recursively.

Input:
The first line of input contains an integer T, denoting the number of test cases. The first line of each test case is N(size of array). The second line of each test case contains N input A[].

Output:
Print the preorder traversal of constructed BST.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 1000
1 ≤ A[i] ≤ 10000

Example:
Input:
1
7
1 2 3 4 5 6 7

Output:
4 2 1 3 6 5 7
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printpreorder(int *arr,int low,int high){
    if(low>high)return;
    int mid=(low+((high-low)/2));
    cout<<arr[mid]<<" ";
    printpreorder(arr,low,mid-1);
    printpreorder(arr,mid+1,high);
}
int main() {
	int tc;
	cin>>tc;
	while(tc--){
	    int size;
	    cin>>size;
	    int *arr=new int[size];
	    for(int i=0;i<size;i++)
	        cin>>arr[i];
	  printpreorder(arr,0,size-1);
	  cout<<endl;
	}
	return 0;
}
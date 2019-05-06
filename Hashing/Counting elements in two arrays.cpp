/*
Counting elements in two arrays Submissions: 6969   Accuracy: 42.52%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation
           
Problems
Given two unsorted arrays arr1[] and arr2[]. They may contain duplicates. For each element in arr1[] count elements less than or equal to it in array arr2[].

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains two integers m and n denoting the size of the two arrays. The following two lines will contain both the arrays respectively.

Output:
Print the count of elements less than or equal to it in arr2 for each element in arr1.

Constraints:
1<=T<=10^5
1<=m,n<=10^5
1<=arr1[i],arr2[j]<=10^5

Example:
Input:
2
6 6
1 2 3 4 7 9
0 1 2 1 1 4
5 7
4 8 7 5 1
4 48 3 0 1 1 5

Output:
4 5 5 6 6 6 
5 6 6 6 3
*/
// C++ implementation of For each element in 1st 
// array count elements less than or equal to it
// in 2nd array
#include <bits/stdc++.h>
 
using namespace std;
 
// function returns the index of largest element 
// smaller than equal to 'x' in 'arr'. For duplicates
// it returns the last index of occurrence of required
// element. If no such element exits then it returns -1. 
int binary_search(int arr[], int l, int h, int x);
// function to count for each element in 1st array,
// elements less than or equal to it in 2nd array
void countEleLessThanOrEqual(int arr1[], int arr2[], 
                             int m, int n);
// Driver program to test above
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int arr1[m],arr2[n];
        for(int i=0;i<m;i++)
        cin>>arr1[i];
        for(int j=0;j<n;j++)
        cin>>arr2[j];
        countEleLessThanOrEqual(arr1, arr2, m, n);
        cout<<endl;
    }
    return 0;
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

// function to count for each element in 1st array,
// elements less than or equal to it in 2nd array
void countEleLessThanOrEqual(int arr1[], int arr2[], 
                             int m, int n)
{
//Your code goes here
 sort(arr2, arr2+n);
    
    map<int, int> pat;
    
    for (int i=0; i<m; i++) {
        if (pat.find(arr1[i]) != pat.end()) {
            cout << pat[arr1[i]] << " ";
        } else {
            int ans = 0;
            for (int j=0; j<n; j++) {
                if (arr2[j] <= arr1[i]) ans++;
            }
            pat[arr1[i]] = ans;
            cout << ans << " ";
        }
    }
}

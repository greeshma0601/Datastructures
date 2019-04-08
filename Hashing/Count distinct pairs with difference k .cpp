/*
Count distinct pairs with difference k Submissions: 4560   Accuracy: 37.88%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation   Geeks Classes in Noida
        
Problems
Given an integer array and a non-negative integer k, count all distinct pairs with difference equal to k, i.e., A[ i ] - A[ j ] = k.


Input:

The first line of input consists number of the test cases. The description of T test cases is as follows:

The first line of each test case contains the size of the array, the second line has the elements of the array and the third line consists of the difference k.

Output:

In each separate line print the number of times difference k exists between the elements of the array.


Constraints:

1 ≤ T ≤ 100
1 ≤ N≤ 100
0≤K≤100
0 ≤ A[i] ≤ 10000


Example:

Input:

3
5 
1 5 4 1 2
0
3
1 1 1
0
3 
1 5 3
2

Output:

1
1
2
*/

#include<iostream>
#include<unordered_map>
using namespace std;
int main()
 {
	//code
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int arr[n];
	    unordered_map <int,int> m1;
	    int temp;
	    int a1=0;
	    for(int i=0;i<n;i++){
	        cin>>temp;
	        m1[temp]++;
	        if(m1[temp]<=2){
	            arr[a1++]=temp;
	        }
	    }
	    int k;cin>>k;
	    int count=0;
	    for(int i=0;i<a1-1;i++){
	        for(int j=i+1;j<a1;j++){
	            if(abs(arr[i]-arr[j])==k)count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}

/*
Star elements
Given an unsorted array. The task is to find all the star and super star elements in the array. Star are those elements which are strictly greater than all the elements on its right side. Super star are those elements which are strictly greater than all the elements on its left and right side.

Note: Assume first element (A[0]) is greater than all the elements on its left side, And last element (A[n-1]) is greater than all the elements on its right side.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains an Integer N denoting size of array and the second line contains N space separated elements.

Output:
For each test case, print the space separated star elements and then in new line print super star elements. If no super star element present in array then print "-1".

Constraints:
1<=T<=200
1<=N<=106
1<=A[i]<=106

Example:
Input:
2
6
4 2 5 7 2 1
3
8 6 5

Output:
7 2 1
7
8 6 5
8
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
 {
 int t1;
 cin>>t1;
 while(t1--)
 {
 int n,i;cin>>n;int r=0;
 int a[10000];
 for(i=0;i<n;i++)cin>>a[i];
 stack<int>s;int c=0,t,min;
 s.push(a[n-1]);min=s.top();
 for(i=n-2;i>=0;i--)
 {
      t=s.top();
      if(a[i]==t)
     {
         r++;
         c=t;
     }
    else if(a[i]>t){
         s.push(a[i]);
         min=s.top();
     }
     
    
 }
 while(!s.empty())
 {
     cout<<s.top()<<" ";
     s.pop();
 }
 cout<<endl;
 if(c == min)cout<<"-1"<<endl;else
 cout<<min<<endl;
 
 }
	//code
	return 0;
}
/*
O(1) space
#include<iostream>
#include <vector>
using namespace std;

int main()
 {
    int T;
    cin >> T;
    
    for(int i = 0; i < T; i++) {
        int n, buf, max, maxOcurrences;
        vector<int> list, results;
        cin >> n;
       
        for(int j = 0; j < n; j++) {
            cin >> buf;
            list.push_back(buf);
        }
        
        max = 0;
        maxOcurrences = 0;
        for(int j = n-1; j >= 0; j--) {
            if(list[j] > max) {
                max = list[j];
                maxOcurrences = 1;
                results.push_back(list[j]);
            }
            else if(list[j] == max) {
                maxOcurrences++;
            }
        }
        
        cout << results[results.size()-1];
        for(int j = results.size()-2; j >= 0; j--) {
            cout << " " << results[j] ;
        }
        cout << endl;
        if(maxOcurrences == 1)
            cout << max << endl;
        else
            cout << -1 << endl;
    }

	return 0;
}
*/

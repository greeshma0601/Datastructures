/*
Relative Sorting Submissions: 16928   Accuracy: 42.53%   Difficulty: Medium   Marks: 4
Associated Course(s):   Interview Preparation   Geeks Classes in Noida More
              
Problems
Discussions
Given two arrays A1[] and A2[] of size N and M respectively. The task is to sort A1 in such a way that the relative order among the elements will be same as those in A2. For the elements not present in A2, append them at last in sorted order. It is also given that the number of elements in A2[] are smaller than or equal to number of elements in A1[] and A2[] has all distinct elements.

Note: Expected time complexity is O(N log(N)).

Input:
First line of input contains number of testcases. For each testcase, first line of input contains length of arrays N and M and next two line contains N and M elements respectively.

Output:
Print the relatively sorted array.

Constraints:
1 ≤ T ≤ 100
1 ≤ N,M  ≤ 106
1 ≤ A1[], A2[] <= 106

Example:
Input:
1
11 4
2 1 2 5 7 1 9 3 6 8 8
2 1 8 3

Output:
2 2 1 1 8 8 3 5 6 7 9

Explanation:
Testcase 1: Array elements of A1[] are sorted according to A1[].
 
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,e;
        cin>>n>>k;
        int b[n];
        map<int,int>mp;
        for(i=0;i<n;i++)
        {
            cin>>e;
            mp[e]++;
        }
        for(i=0;i<k;i++)
        {
            cin>>e;
            if(mp[e] !=0)
            {
                int j=mp[e];
                while(j--)
                cout<<e<<" ";
                mp[e]=-1;
            }
        }
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second != -1)
            {
                while(it->second --)
                
                    cout<<it->first<<" ";
                
            }
        }
        mp.clear();
        cout<<endl;
    }
}
/*#include <bits/stdc++.h>
using namespace std;
int main() {
int T, N, M, k;
map<int,int> mp;
cin>>T;
while(T--) {
cin>>N>>M;
for(int i=0;i<N;i++){
cin>>k;
mp[k]++;
}
for(int i=0;i<M;i++){
cin>>k;
if(mp[k] != 0){
int j = mp[k];
while(j--)
cout<<k<<" ";
mp[k] = -1;
}
}
for(auto it=mp.begin();it!=mp.end();it++)
if((*it).second != -1)
while((*it).second--)
cout<<(*it).first<<" ";
cout<<endl;
mp.clear();
}
return 0;
}*/

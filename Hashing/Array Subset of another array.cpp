/*
Array Subset of another array Submissions: 12630   Accuracy: 45.48%   Difficulty: Easy   Marks: 2
Associated Course(s):   Interview Preparation   Geeks Classes in Noida More
             
Given two arrays: arr1[0..m-1] of size m and arr2[0..n-1] of size n. Task is to check whether arr2[] is a subset of arr1[] or not. Both the arrays can be both unsorted or sorted. It may be assumed that elements in both array are distinct.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an two integers m and n denoting the size of arr1 and arr2 respectively. The following two lines contains the space separated elements of arr1 and arr2 respectively.

Output:
Print "Yes"(without quotes) if arr2 is subset of arr1.
Print "No"(without quotes) if arr2 is not subset of arr1.

Constraints:
1 <= T <= 100
1 <= m,n <= 105
1 <= arr1[i], arr2[j] <= 105

Example:
Input:
3
6 4
11 1 13 21 3 7
11 3 7 1
6 3
1 2 3 4 5 6
1 2 4
5 3
10 5 2 23 19
19 5 3

Output:
Yes
Yes
No

Explanation:
Testcase 1: (11, 3, 7, 1) is a subset of first array.
*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i;
        cin>>n>>m;
       long long int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int max=a[0],min=a[0];
        for(i=0;i<n;i++)
        {
            if(a[i]>max)max=a[i];
            if(a[i]<min)min=a[i];
        }
        int h[max+1]={};
        for(i=0;i<n;i++)
        h[a[i]]++;
        bool b=true;
        for(i=0;i<m;i++)
        {
            int u;
            cin>>u;
            if(u>max){b=false;}
            else if(h[u]==0){b=false;}
        }
        if(b){cout<<"Yes"<<endl;}
        else {cout<<"No"<<endl;}
    }
}

/*    int t,a,b,num,len1,len2;
    map<int,int> m;
    cin>>t;
    while(t--)
    {
        m.clear();
        cin>>a>>b;
        for(int i=0;i<a;i++)
        {
            cin>>num;
            m[num]=num;
        }
        len1=m.size();
        for(int i=0;i<b;i++)
        {
            cin>>num;
            m[num]=num;
        }
        len2=m.size();
        if(len1==len2)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
	return 0;
}*/

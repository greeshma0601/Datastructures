/*
Non-Repeating Element
Find the first non-repeating element in a given array A of N integers.
Note: Array consists of only positive and negative integers and not zero.

Input:
The first line of input is an integer T, denoting the number of test cases. Each test case has subsequent two lines of input. First line is an integer N, denoting size of integer array A. Second line consists of N space separated integers of the array A.

Output:
For each testcase, print the required answer. If no such element exists, then print 0

Constraints:
1 <= T <= 100;
1 <= N <= 107;
-1016 <= Ai <= 1016
{Ai !=0 }

Example:
Input:
4
5
-1 2 -1 3 2
6
9 4 9 6 7 4
3
1 1 1
2
-3 2
Output:
3
6
0
-3

Explanation:
Testcase1: -1 and 2 are repeating whereas 3 is the only number occuring once. Hence, the output is 3.
Testcase2: There are 3 distinct integers, 9, 4 and 5, but they all are repeating. There is no non-repetitive element in the array. Hence, the output is 0.
Testcase3: -1 and 3 are non-repeating. -1 occurs before 3 in the array. Hence, the output is -1.
Testcase4: There are two distinct elements occuring only once in the array, with 6 occuring before 7. Hence, output is 6.
Testcase5: The only non-repeating element is -3. Hence, output is -3.


*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long 
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 ll int n,i;cin>>n;
 unordered_map<ll int,ll int>m;
ll int a[n];
 for(i=0;i<n;i++)
 {
 cin>>a[i];
 m[a[i]]++;
 }
 int f=0;
for(i=0;i<n;i++)
{
    /*auto it=m.find(a[i]);
    if(it!= m.end() )
    {
        if(it->second == 1)
        {cout<<it->first<<endl;f=1;break;}
    }
    if(f == 1)break;*/
    if(m[a[i]] == 1)
    {cout<<a[i]<<endl;f=1;break;}
    
}
     if(!f)
     cout<<0<<endl;
 }
	//code
	return 0;
}

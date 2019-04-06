/*
Maximum Rectangular Area in a Histogram
Find the largest rectangular area possible in a given histogram where the largest rectangle can be made of a number of contiguous bars. For simplicity, assume that all bars have same width and the width is 1 unit.

Input:
The first line contains an integer 'T' denoting the total number of test cases. T test-cases follow. In each test cases, the first line contains an integer 'N' denoting the size of array. The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array. The elements of the array represents the height of the bars.

Output:
For each test-case, in a separate line, the maximum rectangular area possible from the contiguous bars.

Constraints:
1 <= T <= 100
1 <= N <= 103
1 <= A[i] <= 1018

Example:
Input: 
1
7
6 2 5 4 5 1 6
Output:
12

Explanation:
Testcase1:


** For More Input/Output Examples Use 'Expected Output' option **

	return 0;
}


Test against custom input
Correct Answer.Correct Answer
Execution Time:0.59

Assume Width of all bars to be 1 for simplicity.
For every bar ‘x’, calculate the area with ‘x’ as the smallest bar in the rectangle.
To calculate area with ‘x’ as smallest bar, find index of the first smaller (smaller than ‘x’) bar on left of ‘x’ and index of first smaller bar on right of ‘x’. Assume these indexes as ‘left index’ and ‘right index’ respectively.
Traverse all bars from left to right, maintain a stack of bars. Every bar is pushed to stack once.
POP a bar from stack when a bar of smaller height is seen.
When a bar is popped, calculate the area with the popped bar as smallest bar.
Get the left and right indexes of the popped bar – the current index tells us the ‘right index’ and index of previous item in stack is the ‘left index’. 

The complete algorithm:

1) Create an empty stack.

2) Start from first bar, and do following for every bar ‘arr[i]’ where ‘i’ varies from 0 to n-1.
……a) If stack is empty or arr[i] is higher than the bar at top of stack, then push ‘i’ to stack.
……b) If this bar is smaller than the top of stack, then keep removing the top of stack while top of the stack is greater. Let the removed bar be arr[tp]. Calculate area of rectangle with arr[tp] as smallest bar. For arr[tp], the ‘left index’ is previous (previous to tp) item in stack and ‘right index’ is ‘i’ (current index).

3) If the stack is not empty, then one by one remove all bars from stack and do step 2.b for every removed bar.

*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
ll  maxrectarea(ll  a[],ll  n)
{
    stack<int>s;
    ll i=0;
    ll  maxarea=0;
    ll  area_with_top,stop;
    while(i<n)
    {
        if(s.empty() || a[i]>=a[s.top()])
        s.push(i++);
        else
        {
            stop=s.top();
            s.pop();
            area_with_top=a[stop]*(s.empty()?i:i-s.top()-1);
            if(maxarea<area_with_top)maxarea=area_with_top;
        }
    }
    while(!s.empty())
    {
         stop=s.top();
            s.pop();
            area_with_top=a[stop]*(s.empty()?i:i-s.top()-1);
            if(maxarea<area_with_top)maxarea=area_with_top;
    }
    return maxarea;
}
int main()
 {
 ll  t;
 cin>>t;
 while(t--)
 {
 ll  n,i;cin>>n;
 ll  a[n];for(i=0;i<n;i++)cin>>a[i];
 ll  maxarea=maxrectarea(a,n);
 cout<<maxarea<<endl;
 }
	//code
	return 0;
}

/*
Lucky Number Submissions: 2222   Accuracy: 24.96%   Difficulty: Easy   Marks: 2
         
Problems
A n digit number has n*(n+1)/2 sub-numbers.  For example, all possible sub-numbers of 975 are 9 7 5 97 75 975. A number is called Lucky if all sub-numbers have different digit product.  Digit product of a number is product of its digits.  

For example, the number 23 is Lucky.  Subsequences of it are 2, 3 and 23 and digit products are 2, 3 and 6 respectively (All digit products are different). 975 is also lucky.

 

Input:

The first line contains an integer T, depicting total number of test cases. 
Then following T lines contains an integer N .
Output:

Print 1 if number is lucky else print 0.

Constraints:

1<=T<=100

1<=N<=1010
Example:

Input:

2
324
323

Output:

1
0
*/
#include<iostream>
using namespace std;

int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    string s;
	    cin>>s;
	    int n = s.size();
	    map <int,int> m;
	    for(int i = 0; i<n; i++)
	    {
	        int num = 1;
	        for(int j = i; j<n; j++)
	        {
	            int d = int(s[j]) - int('0');
	            num = num*d;
	            if(m.find(num)==m.end())
	                m[num] = 1;
	            else
	                m[num]++;
	        }
	    }
	    int ans = 1;
	    for(auto itr = m.begin(); itr!=m.end(); itr++)
	    {
	        if(itr->second>1)
	        {
	            ans = 0;
	            break;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}

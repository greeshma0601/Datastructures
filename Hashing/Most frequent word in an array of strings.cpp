/*
Most frequent word in an array of strings Submissions: 6853   Accuracy: 33.77%   Difficulty: Basic   Marks: 1
Associated Course(s):   Geeks Classes in Noida
             
Problems
Given an array containing N words consisting of lowercase characters. Your task is to find the most frequent word in the array. If multiple words have same frequency, then print the word that comes first in lexicographical order.

Input:
The first line of the input contains a single integer T, denoting the number of test cases. Then T test case follows. Each test case contains 2 lines, the size of array N and N words separated by spaces.

Output:
For each testcase, output the most frequent word.

Constraints:
1 <= T <= 100
1 <= N <= 1000

Example:
Input:
3
3
geeks for geeks
2
hello world
3
world wide fund

Output:
geeks
hello
fund

Explanation:
Testcase 1: "geeks" comes 2 times.
Testcase 2: "hello" and "world" both have 1 frequency. We print hello as it comes first in lexicographical order.


*/

#include <iostream>
#include<sstream>
#include<map>
#include<string>
using namespace std;

void Most_frequent(string s)
{
    stringstream sso(s);
    map<string,int> mymap;
    string word;
    // sso<<s;
    
    while(!(sso.eof()))
    {
        sso>>word;
        // cout<<"hello";
        mymap[word]++;
        // cout<<word<<endl;
    }
    int l=0;
    // word="";
    map<string,int>::iterator it;
    // for(it=mymap.begin();it!=mymap.end();it++)
    // {
    //     cout<<it->first<<" ---> "<<it->second<<endl;
    // }
    for(it=mymap.begin();it!=mymap.end();it++)
    {
        if(it->second > l)
        {
        l=it->second;
        word=it->first;
        }
    }
    cout<<word<<endl;
    
}
int main() {
	//code
	// int tc;
    // int n;
	
    
     int tc;
     cin>>tc;
     
	
	    while(tc--)
        {
            int n;
            cin>>n;
           cin.ignore(256, '\n');
             string str;
	    getline(cin,str);
        // cin>>s;
        // cout<<str<<endl;
	    Most_frequent(str);
        }
	
	return 0;
}

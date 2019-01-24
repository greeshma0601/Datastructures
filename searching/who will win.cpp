/*
Who Will Win? Submissions: 8851   Accuracy: 26.87%   Difficulty: Basic   Marks: 1
        
Gautam and Subhash are two brothers. They are similar to each other in all respects except one. They have different ways of searching. When Gautam has to search for an item from a lot, he goes through all the items one by one and stops when he finds the item. However Subhash has an entirely different and interesting way of searching. However the search works only for items which are sorted. He goes to the middle of the lot, if he finds the desired item, he stops, if not, he checks whether the middle item is smaller or larger than the required item. If larger, he repeats the same process for the first half of the lot, otherwise second half. One day, the two brothers sit in a contest in which they have to find a name out of a sorted dictionary. Whoever finds out the name first will win the contest. The audience is very eager to know who will win and hence they want you to predict.

Input:

The first line of input takes the number of test cases, T.

The next T lines take the total number of names N, followed by M the position of the name to be searched, as well as the amount of time taken for each observation by Gautam G and Subhash S.

Output:

Print 1 in case Gautam will win, 2 in case Subhash will win, 0 in case of a draw in a separate line.

Constraints:

1<=T<=100

1<=N<=1000

1<=M<=N

1<=G<=100

1<=S<=100

Example:

Input:

3
10 8 10 25
10 8 10 30
10 8 10 12
Output:

2
2
2*/
#include<iostream>
using namespace std;


int bin_iter(int a[], int x, int low, int high){

    int mid= (high+low)/2;

    if(x==a[mid])
        return 1;

    if(low>high)
        return -1;

    if(x>a[mid])
        return 1+bin_iter(a,x,mid+1,high);

    else
        return 1+bin_iter(a,x,low,mid-1);


}

main(){
    int opt;
    cin>>opt;

    for(int k=0;k<opt;k++){
        int a[1005], n, x, lin_weight, bin_weight;

        cin >> n >> x >> lin_weight >> bin_weight;

        for(int i=1; i<=n; i++)
            a[i]=i;

        int lin= x; //linear search would need x observation (iteration) to find the xth element
        int bin= bin_iter(a,x,1,n); //bin iter is the number of observation (iteration) needed in binary search

        int lin_time= lin*lin_weight;
        int bin_time= bin* bin_weight;

        if(lin_time==bin_time)
            cout<< 0 << endl;

        else if(lin_time<bin_time)
            cout<< 1 << endl;

        else
            cout<< 2 <<endl;

    }


}


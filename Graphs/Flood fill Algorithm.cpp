/*
Flood fill Algorithm
Given a 2D screen, location of a pixel in the screen ie(x,y) and a color(K), your task is to replace color of the given pixel and all adjacent(excluding diagonally adjacent) same colored pixels with the given color K.

Example:

{{1, 1, 1, 1, 1, 1, 1, 1},
{1, 1, 1, 1, 1, 1, 0, 0},
{1, 0, 0, 1, 1, 0, 1, 1},
{1, 2, 2, 2, 2, 0, 1, 0},
{1, 1, 1, 2, 2, 0, 1, 0},
{1, 1, 1, 2, 2, 2, 2, 0},
{1, 1, 1, 1, 1, 2, 1, 1},
{1, 1, 1, 1, 1, 2, 2, 1},
 };

 x=4, y=4, color=3 

{{1, 1, 1, 1, 1, 1, 1, 1},
{1, 1, 1, 1, 1, 1, 0, 0},
{1, 0, 0, 1, 1, 0, 1, 1}, 
{1, 3, 3, 3, 3, 0, 1, 0},
{1, 1, 1, 3, 3, 0, 1, 0},
{1, 1, 1, 3, 3, 3, 3, 0},
{1, 1, 1, 1, 1, 3, 1, 1},
{1, 1, 1, 1, 1, 3, 3, 1}, };

Note: Use zero based indexing.

Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. The first line of each test case contains Two integers N and M denoting the size of the matrix. Then in the next line are N*M space separated values of the matrix. Then in the next line are three values x, y and K.

Output:
For each test case print the space separated values of the new matrix.

Constraints:
1 <= T <= 100
1 <= M[][] <= 100

Example:
Input:
3
3 4
0 1 1 0 1 1 1 1 0 1 2 3
0 1 5
2 2
1 1 1 1
0 1 8
4 4 
1 2 3 4 1 2 3 4 1 2 3 4 1 3 2 4
0 2 9

Output:
0 5 5 0 5 5 5 5 0 5 2 3
8 8 8 8
1 2 9 4 1 2 9 4 1 2 9 4 1 3 2 4
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
//#define M m
int n,m;
void floodfillalgo(int a[][101],int x,int y,int prevc,int newc)
{
    if(x<0 || x>=n || y<0 || y>=m)
    return;
    if(a[x][y]!=prevc)
    return;
    a[x][y]=newc;
    floodfillalgo(a,x+1,y,prevc,newc);
    floodfillalgo(a,x,y+1,prevc,newc);
    floodfillalgo(a,x-1,y,prevc,newc);
    floodfillalgo(a,x,y-1,prevc,newc);
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];

 cin>>n>>m;int i,j;int a[101][101];
 for(i=0;i<n;i++)
 for(j=0;j<m;j++)
 {
     cin>>a[i][j];
 }
 int x,y,newc;
 cin>>x>>y>>newc;
 int prevc=a[x][y];
 floodfillalgo(a,x,y,prevc,newc);
 for(i=0;i<n;i++)
 for(j=0;j<m;j++)
 cout<<a[i][j]<<" ";
 cout<<endl;
 }
	//code
	return 0;
}

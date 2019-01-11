/*
Example:
Input
1
5
1 2 1 3 2 1 4 2   
Output
3 4

Explanation:
Testcase1:
1 2    the stack will be {2}
1 3    the stack will be {2 3}
2       poped element will be 3 the stack will be {2}
1 4    the stack will be {2 4}
2       poped element will be 4  


*/

//{
#include<bits/stdc++.h>
using namespace std;
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
int main()
{
     int T;
    cin>>T;
    while(T--)
    {
        QueueStack *qs = new QueueStack();
        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            qs->push(a);
        }else if(QueryType==2){
            cout<<qs->pop()<<" ";
        }
        }
        cout<<endl;
    }
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */
/* The method push to push element into the stack */
void QueueStack :: push(int x)
{
        // Your Code
        if(q1.empty())
        {
            q2.push(x);
        }
        else
        {
            q1.push(x);
        }
}
/*The method pop which return the element poped out of the stack*/
int QueueStack :: pop()
{
        // Your Code 
        if(q1.empty() && q2.empty())
        return -1;
        else
        {
            if(q1.empty())
            {
                int s=q2.size();
                s--;
                while(s--)
                {
                    int x=q2.front();
                    q2.pop();
                    q1.push(x);
                }
                int y=q2.front();
                q2.pop();
                return y;
            }
            else
           //if(q1.empty())
            {
                int s=q1.size();
                s--;
                while(s--)
                {
                    int x=q1.front();
                    q1.pop();
                    q2.push(x);
                }
                int z=q1.front();
                q1.pop();
                return z;
            }
        }
}

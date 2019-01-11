{
#include<bits/stdc++.h>
using namespace std;
class StackQueue{
private:
    stack<int> s1;
    stack<int> s2;
public:
    void push(int B);
    int pop();
};
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        StackQueue *sq = new StackQueue();
        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }else if(QueryType==2){
            cout<<sq->pop()<<" ";
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
class StackQueue{
private:   
    // These are STL stacks ( http://goo.gl/LxlRZQ )
    stack<int> s1;
    stack<int> s2;
public:
    void push(int);
    int pop();
}; */
/* The method push to push element into the queue */
void StackQueue :: push(int x)
 {
     //if(s1.empty())
     //{
         s1.push(x);
     //}
        // Your Code
    /*    s1.push(x);*/
       /*if(s1.empty()==true)
        {
            s1.push(x);
        }
        else
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
            s1.push(x);
        }*/
    
 }
/*The method pop which return the element poped out of the queue*/
int StackQueue :: pop()
{
        // Your Code
        int x=0;
        if(s1.empty() && s2.empty()){return -1;}
        if(!s2.empty()) 
        { x=s2.top();
            s2.pop();
            return x;
        }
        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        
             x=s2.top();
        s2.pop();
        return x;
        }
       
        
       /*  int x=0;
        if(s1.empty() && s2.empty())
        {
            return -1;
        }
        else if(s2.empty())
        {
            x = s1.top();
            s1.pop();
            return x;
        }
        else if(s2.empty()==false)
        {
            while(!s2.empty())
            {
                s1.push(s2.top());
                s2.pop();
            }
            x = s1.top();
            s1.pop();
            return x;
        }*/
}

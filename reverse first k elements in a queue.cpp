queue<ll> modifyQueue(queue<ll> q, int p)
{
    //add code here.
    
     int x = q.size();
    int y=p;
    int k;
    int a[x];
    k=0;
    while(x--)
    {
        a[k++]=q.front();
        q.pop();
    }
    int e=k;
    k=p-1;
    while(k)
    {
        q.push(a[k]);
        k--;
    }
    int qs=(q.size())-y+1;
    while(qs--)
    {
        q.push(a[y]);
        y++;
    }
    return q;
    
}

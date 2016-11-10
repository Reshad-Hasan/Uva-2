#include<iostream>
#include<cstring>
using namespace std;
main()
{
    int n,x,y,m;
    cin >> n;
    int h[n],v[n];
    n=n*n;
    memset(h,0,sizeof(h));
    memset(v,0,sizeof(v));
    for(int i=1;i<=n;i++)
    {
        m=0;
        cin >> x >>y;
        if(!h[x-1] && !v[y-1])
        {
            h[x-1]=v[y-1]=1;
            m=1;
        }
        if(m)
            cout << i<<" ";
    }
}

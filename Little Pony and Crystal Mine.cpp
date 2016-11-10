#include<iostream>
using namespace std;

main()
{
    int n,d,i,j,x=1;
    cin>>n;
    for(i=0;i<(n>>1)+1;i++)
    {
        d=(n-x)>>1;
        for(j=0;j<d;j++)
            cout<<'*';
        for(j=0;j<x;j++)
            cout<<'D';
        for(j=0;j<d;j++)
            cout<<'*';
        x+=2;
        cout<<endl;
    }
    x-=2;
    for(;i<n;i++)
    {
        x-=2;
        d=(n-x)>>1;
        for(j=0;j<d;j++)
            cout<<'*';
        for(j=0;j<x;j++)
            cout<<'D';
        for(j=0;j<d;j++)
            cout<<'*';
        cout<<endl;
    }
    return 0;
}

#include<iostream>
#include<algorithm>
using namespace std;

main()
{
    int n,k,count=0,i,j,l;
    cin>>n>>k;
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    for(i=0;i<n;i++)
    {
        if(b[i]<=k)
            count++,k-=b[i];
        else
            break;
    }
    cout<<count<<endl;
    for(j=0;j<count;j++)
    {
        for(l=0;l<n;l++)
        {
            if(b[j]==a[l])
            {
                cout<<l+1<<' ',a[l]=0;
                break;
            }
        }
    }
}

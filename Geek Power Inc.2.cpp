#include<iostream>
#include<algorithm>

int t,n,x[100000001],a,b,index,y,mx;

using namespace std;

main()
{
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        index=0;
        for(int j=0;j<n;j++)
        {
            cin>>a>>b;
            for(int k=0;k<a;k++)
            {
                x[index]=b;
                index++;
            }
        }
        sort(x,x+index);
        mx=0;
        for(int j=0,p=index;j<index;j++,p--)
        {
            y=x[j]*p;
            if(mx<y)
                mx=y;
        }
        cout<<"Case "<<i<<": "<<mx<<endl;
    }
    return 0;
}

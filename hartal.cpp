#include<iostream>
using namespace std;

main()
{
    unsigned int t,n,p,a[4000],hartal,party;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        hartal=0;
        cin>>n;
        cin>>p;
        for(int j=0;j<n;j++)
            a[j]=0;
        for(int j=0;j<p;j++)
        {
            cin>>party;
            for(int k=party-1;k<n;k+=party)
                a[k]=1;
        }
        for(int j=5;j<n;)
        {
            a[j]=0;
            j++;
            a[j]=0;
            j+=6;
        }
        hartal=0;
        for(int j=0;j<n;j++)
        {
            if(a[j])
                hartal++;
        }
        cout<<hartal<<endl;
    }
}

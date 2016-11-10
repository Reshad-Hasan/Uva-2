#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdlib>
#include<string>
#include<cmath>

typedef unsigned int ui;
typedef unsigned long int ul;
typedef unsigned long long int ull;
typedef long int li;
typedef long long int lli;

using namespace std;

main()
{
    int t,n,h,l;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        h=l=0;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
            if(j!=0)
            {
                if(a[j]>a[j-1])
                    h++;
                else if(a[j]<a[j-1])
                    l++;
            }
        }
        cout<<"Case "<<i<<": "<<h<<' '<<l<<endl;
    }
}





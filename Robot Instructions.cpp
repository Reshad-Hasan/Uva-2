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
    int t,n,x,sum=0,m;
    string s;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int a[n];
        getchar();
        for(int j=0;j<n;j++)
        {
            cin>>s;
            if(s=="SAME")
            {
                cin>>s>>x;
                a[j]=a[x-1];
                sum+=a[j];
            }
            else if(s=="LEFT")
                a[j]=-1,sum--;
            else
                a[j]=1,sum++;
        }
        cout<<sum;
    }
}





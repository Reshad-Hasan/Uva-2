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
typedef long double ld;

using namespace std;

main()
{
    ul n,i,j,N;
    ul f[100000];
    while(1)
    {
        j=0;
        cin>>n;
        if(!n)
            break;
        N=n;
        if(n%2==0)
        {
            f[j++]=2;
            n=sqrt(n);
        }
        for(i=3;i<=n;i+=2)
        {
            if(n%i==0)
            {
                f[j++]=i;
                n/=i;
            }
        }
        n=1;
        for(i=0;i<j;i++)
        {
            n*=f[i]-1;
        }
        n*=N;
        for(i=0;i<j;i++)
        {
            n/=f[i];
        }
        cout<<n<<endl;
    }
}


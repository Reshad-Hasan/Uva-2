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
    lli a[10000],l,j=0,k=0;
    for(int i=0;cin>>a[i];)
    {
        i++;
        sort(a,a+i);
        if(i%2)
        {
            cout<<a[i/2]<<endl;
        }
        else
        {
            j=i/2;
            cout<<(a[j]+a[j-1])/2<<endl;
        }

    }
}


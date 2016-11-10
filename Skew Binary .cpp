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
    ull x;
    string n;
    while(1)
    {
        cin>>n;
        if(n=="0")
            break;
        int l=n.length(),m;
        x=0,m=l;
        for(int i=0;i<l;i++,m--)
        {
            if(n[i]!='0')
            {
                x+=(n[i]-'0')*(pow(2,m)-1);
            }
        }
        cout<<x<<endl;
    }
}


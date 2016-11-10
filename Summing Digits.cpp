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
    string s;
    ull sum;
    while(1)
    {
        sum=0;
        cin>>s;
        if(s=="0")
            break;
        for(int i=0;i<s.length();i++)
        {
            sum+=s[i]-'0';
        }
        int x=sum;
        sum=0;
        while(1)
        {
            sum+=x%10;
            x/=10;
            if(x<=0)
            {
                if(sum<=9)
                    break;
                else
                    x=sum,sum=0;
            }
        }
        cout<<sum<<endl;
    }
}





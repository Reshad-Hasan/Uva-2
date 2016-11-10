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
    int count;
    bool w=false;
    while(getline(cin,s))
    {
        count=0;
        w=false;
        int l=s.length();
        for(int i=0;i<l;i++)
        {
            if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')
                w=true;
            else
            {
                if(w)
                {
                    w=false;
                    count++;
                }
            }
        }
        if(w)
            count++;
        cout<<count<<endl;
    }
}



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

int main()
{
    char s[100000];
    li f=0,l,count=0;
    while(gets(s))
    {
        l=strlen(s);
        for(int i=0;i<l;i++)
        {
            if(s[i]=='"')
            {
                count++;
                if(count%2==1)
                    cout<<"``";
                else
                    cout<<"''";
            }
        else cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}





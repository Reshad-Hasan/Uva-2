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


/*int b_d(int *a)
{
    return a[0]*64+a[1]*32+a[2]*16+a[3]*8+a[4]*4+a[5]*2+a[6];
}*/
main()
{
    /*register string s;
    register int a[8];
    cin>>s;
    getchar();
    getline(cin,s);
    while(s!="-----------")
    {
        for(register int i=2,j=0;i<s.length();i++)
        {
            if(s[i]=='o')
                a[j]=1,j++;
            else if(s[i]==' ')
                a[j]=0,j++;
        }
        register int d=b_d(a);
        printf("%c",d);
        getline(cin,s);
    }*/
    string s;
    cin>>s;
    getchar();
    while(cin>>s)
    {
        int d=0;
        if(s=="-----------")
        for(int i=0;i<11;i++)
        {
            if(s[i]==' '||s[i]=='o')
                d<<=1;
            if(s[i]=='o')
                d++;
        }
        printf("%c",d);
    }
}




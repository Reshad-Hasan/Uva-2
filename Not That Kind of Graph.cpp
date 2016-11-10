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

int max(int i,int imax)
{
    if(i>imax)
        imax=i;
    return imax;
}
int min(int i,int imin)
{
    if(i<imin)
        imin=i;
    return imin;
}
int main()
{
    int i,x,y,l,t,j;
    int imax,imin;
    string s;
    char g[200][200];
    cin>>t;
    for(x=1;x<=t;x++)
    {
        imax=100,imin=101;
        cin>>s;
        l=s.length();
        i=100;
        for(j=0;j<l;j++)
        {
            if(s[j]=='R')
            {
                g[i][j]='/';
                i++;
                if(s[j+1]!='F')
                    imax = max(i,imax);
            }
            else if(s[j]=='C')
            {
                g[i][j]='_';
            }
            else
            {
                i--;
                if(s[j+1]!='R')
                    imin=min(i,imin);
                g[i][j]='\\';

            }
        }
        cout<<"Case #"<<x<<":"<<endl;

        for(;imax>=imin;imax--)
        {
            cout<<"| ";
            for(j=0;j<l;j++)
            {
                g[imax][j]==' '?cout<<' ':cout<<g[imax][j];
            }
            cout<<endl;
        }
        cout<<'+';
        for(j=0;j<l+2;j++)
            cout<<'-';
        cout<<endl;
        cout<<endl;
    }
    return 0;
}



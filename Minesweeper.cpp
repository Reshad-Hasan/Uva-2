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
    ui n,m,x=0;

    while(cin>>n>>m)
    {
        char s[200][200];
        ui a[200][200]={0};
        if(!n && !m)
            break;
        if(x)
            cout<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>s[i][j];
                if(s[i][j]=='*')
                {
                    a[i][j+1]++;
                    a[i][j-1]++;
                    a[i+1][j]++;
                    a[i-1][j]++;
                    a[i+1][j+1]++;
                    a[i+1][j-1]++;
                    a[i-1][j+1]++;
                    a[i-1][j-1]++;
                }
            }
        }
        cout<<"Field #"<<++x<<":"<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(s[i][j]=='*')
                    cout<<'*';
                else
                    cout<<a[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}



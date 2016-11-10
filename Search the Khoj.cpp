#include<iostream>
#include<cstring>

using namespace std;

main()
{
    int t,n,ck;
    string a;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        char s[n][11];
        for(int j=0;j<n;j++)
        {
            cin>>s[j];
        }
        cin>>a;
        cout<<"Case "<<i<<":"<<endl;
        for(int j=0;j<n;j++)
        {
            ck=0;
            for(int k=0;k<a.length();k++)
            {
                if(a[k]!=s[j][k])
                {
                    ck++;
                }
                if(ck>1)
                    break;
            }
            if(ck<=1)
                cout<<s[j]<<endl;
        }
    }
    return 0;
}

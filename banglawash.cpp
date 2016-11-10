#include<iostream>
using namespace std;
main()
{
    int t,n;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int b=0,w=0,t=0,a=0;
        char s[20];
        cin>>n;
        cin>>s;
        for(int j=0;j<n;j++)
        {
            if(s[j]=='B')
                b++;
            else if(s[j]=='W')
                w++;
            else if(s[j]=='T')
                t++;
            else
                a++;
        }
        if(b==w && a!=n)
            cout<<"Case "<<i<<": DRAW "<<b<<' '<<t<<endl;
        else if(w==0 && a!=n && t==0)
            cout<<"Case "<<i<<": BANGLAWASH"<<endl;
        else if(b==0 && a!=n && t==0)
            cout<<"Case "<<i<<": WHITEWASH"<<endl;
        else if(b>w)
            cout<<  "Case "<<i<<": BANGLADESH "<<b<<" - "<<w<<endl;
        else if(w>b)
            cout<<"Case "<<i<<": WWW "<<w<<" - "<<b<<endl;
        else
            cout<<"Case "<<i<<": ABANDONED"<<endl;
    }
    return 0;
}

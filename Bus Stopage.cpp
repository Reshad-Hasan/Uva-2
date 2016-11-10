#include<iostream>

using namespace std;

main()
{
    unsigned int t,n,sum,a,b,people;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        sum=people=0;
        cin>>n;
        for(int j=0;j<n-1;j++)
        {
            cin>>a>>b;
            sum+=a;
            sum-=b;
            if(people<sum)
                people=sum;
        }
        cout<<"Case "<<i<<": "<<people<<endl;
    }
    return 0;
}

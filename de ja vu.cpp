#include<stdio.h>
main()
{
    long int t,n,ti[100005],by[100005],i,j,d;
    scanf("%ld",&t);
    for(i=1;i<=t;i++)
    {
        d=0;
        scanf("%ld",&n);
        for(j=0;j<n;j++)
            scanf("%ld",&ti[j]);
        for(j=0;j<n;j++)
        {
            scanf("%ld",&by[j]);
            if(ti[j]-by[j]>=100)
                d++;
        }
        printf("Case %ld: %ld\n",i,d);
    }
    return 0;
}

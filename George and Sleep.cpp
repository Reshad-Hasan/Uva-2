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
    int sh,sm,th,tm;
    cin>>sh;
    getchar();
    cin>>sm;
    cin>>th;
    getchar();
    cin>>tm;
    sm-=tm;
    if(sm<0)sm+=60,th++;
    sh-=th;
    if(sh<0)sh+=24;
    printf("%.2d:%.2d",sh,sm);
}





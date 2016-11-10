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
    while(getline(cin,s))
    {
        for(int i=0;i<s.length();i++)
        {
            printf("%c",s[i]-7);
        }
        cout<<endl;
    }
}





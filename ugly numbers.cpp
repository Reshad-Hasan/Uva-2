#include<iostream>
using namespace std;
main()
{
    register int count=0,i,n;
    for(i=1,n=1;;n++)
    {
        i=n;
        while(1)
        {
            if(i%2==0)
                i/=2;
            else
                break;
        }
        while(1)
        {
            if(i%3==0)
                i/=3;
            else
                break;
        }
        while(1)
        {
            if(i%5==0)
                i/=5;
            else
                break;
        }
        if(i==1)
        {
            count++;
            if(count==1500)
            {
                cout<<"The 1500'th ugly number is "<<n<<"."<<endl;
                break;
            }
        }
    }
}

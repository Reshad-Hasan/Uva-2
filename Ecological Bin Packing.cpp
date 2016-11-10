#include<iostream>

using namespace std;

main()
{
    int b1,b2,b3,g1,g2,g3,c1,c2,c3;
    while(cin>>b1>>g1>>c1>>b2>>g2>>c2>>b3>>g3>>c3)
    {
        string s;
        int bgc,bcg,gbc,gcb,cbg,cgb,min;
        bgc=bcg=gbc=gcb=cbg=cgb=min=0;

        bcg=b2+b3+g1+g2+c1+c3;
        min=bcg,s="BCG";
        bgc=b2+b3+g1+g3+c1+c2;
        if(bgc<min)
            min=bgc,s="BGC";
        cbg=b1+b3+g1+g2+c2+c3;
        if(cbg<min)
            min=cbg,s="CBG";
        cgb=b2+b1+g1+g3+c2+c3;
        if(cgb<min)
            min=cgb,s="CGB";
        gbc=b1+b3+g3+g2+c1+c2;
        if(gbc<min)
            min=gbc,s="GBC";
        gcb=b2+b1+g3+g2+c1+c3;
        if(gcb<min)
            min=gcb,s="GCB";


        cout<<s<<" "<<min<<endl;
    }
}

#include <iostream>
#include <stdio.h>
#include <map>
#include <iomanip>
#include <algorithm>
using namespace std; 
int main()
{
    int num1,num2;
    map<float,float> r;
    cin>>num1;
    float l1[num1][2];
    
    
    for(int i=0;i<num1;i++)
    {
        cin>>l1[i][0];
        cin>>l1[i][1];
    }
    cin>>num2;
    float l2[num2][2];
    for(int i=0;i<num2;i++)
    {
        cin>>l2[i][0];
        cin>>l2[i][1];
    }
    for(int i=0;i<num1;i++)
    {
        for(int j=0;j<num2;j++)
        {
            float co=(l1[i][0]+l2[j][0]);
            float ecc=l1[i][1]*l2[j][1];
            if(r.find(co)==r.end())
                r[co]=ecc;
            else
                r[co]+=ecc;
        //cout<<l1[i][0]<<" "<<l2[j][0]<<" "<<co<<"..."<<l1[j][1]<<" "<<l2[j][1]<<" "<<ecc<<endl;
        }
    }
    cout<<r.size();
    for(map<float,float>::reverse_iterator i=r.rbegin();i!=r.rend();i++)
        //cout<<" "<<i->first<<" "<<fixed<<setprecision(1)<<i->second;
        {
            cout<<" "<<fixed<<setprecision(2)<<i->first;
        	printf(" %.1f",i->second);
        }
    return 0;
}

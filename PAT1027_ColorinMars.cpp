#include <iostream>
using namespace std;
char traslate(int x)
{
    if(x>9)
        x=('A'+x-10);
    else
        x+='0';
    return x;
}
int main()
{
    char Mc[2]={'0','0'};
    int tmp;
    cout<<'#';
    for(int i=0;i<3;i++)
    {
        cin>>tmp;
        if(tmp>12)
        {
            Mc[0]=(tmp/13);
            Mc[0]=traslate(Mc[0]);
        }
        Mc[1]=tmp%13;
        Mc[1]=traslate(Mc[1]);
        cout<<Mc[0]<<Mc[1];
        Mc[0]='0';Mc[1]='0';
    }
}

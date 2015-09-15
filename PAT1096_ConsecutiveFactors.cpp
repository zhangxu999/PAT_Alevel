#include  <iostream>
#include <math.h>
using namespace std;
int main()
{
  int N,longgest=0,start=1;
  cin>>N;
  for(int i=2;i<=sqrt(N);i++)
  {
    if(N%i==0)
    {
      int ti=i,tmpr=i,len=0;
      while(N%tmpr==0)
      {
        len++;
          ti++;
          tmpr*=ti;
      }
      if (len>longgest)
      {
        longgest=len;
        start=i;
      }
   
    }
 
  }
   
  if(longgest==0)
     {
          cout<<1<<"\n"<<N;
     }
  else
  {
    cout<<longgest<<endl;
      cout<<start;
    while(--longgest)
    {
    cout<<"*"<<++start;
    }
  }
    return 0;
}

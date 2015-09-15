#include <deque>
#include <stdio.h>
#include <iostream>
using namespace std;
std::deque<int> v;
int step;
int stepcnt=0;
char r[11];
bool isP(deque<int>* d)
{
//	cout<<"isP"<<*(d->begin())<<endl;
	deque<int>::iterator i=d->begin();
    deque<int>::iterator ri=--(*d).end();
    for(;ri-i>0;i++,ri--)
       if(*ri!=*i)
          return false;
    return true;
}
int main()
{
	char *p=r;
	cin>>r;
	cin>>step;
while(*p!=0)
{	
	v.push_back(*p-48);
	p++;
}
while(!isP(&v) && stepcnt<step)
{
    deque<int>::iterator i=v.begin();
    deque<int>::iterator ri=--v.end();

    int tmpi,tmpri;
    for(;ri-i>0;i++,ri--)
    {
    	tmpi=*i;
	//tmpri=*ri;
    	*i+=*ri;    
    	*ri+=tmpi;
    }
    if(ri-i==0)
       *i+=*ri;
   // cout<<"1"<<" ";
    deque<int>::iterator addi=--v.end();
    for(;addi!=v.begin();--addi)
    {
    	if (*addi>9)
    	    *(addi-1)+=(*addi/10);
    	*addi%=10;
    //	cout<<"in for"<<*addi<<" ";
	
    }
    if(*addi>9)
    {    
        v.push_front(*addi/10);
}
    *addi%=10;
      //  cout<<"stepcnt "<<stepcnt;
    stepcnt++;
}
for(deque<int>::iterator i=v.begin();i!=v.end();i++)
        cout<<*i;
cout<<"\n";
cout<<stepcnt;
}

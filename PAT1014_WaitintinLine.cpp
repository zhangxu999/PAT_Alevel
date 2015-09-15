#include <list>
#include <deque>
#include <iostream>
#include <map>
#include <stdio.h>
using namespace std; 
typedef struct 
{
	int id,window,time,donetime;
}person;
#define LIMIT 60*9
int timer=0;
int Min;
int currpeo;
int num=0;

list<person> Inline;
deque<person> Outline;
map<int,person> donepson;

list<person>::iterator IlIt = Inline.begin();
int main(){
	const int n=0,m=0,k=0,q=0;
	
	scanf("%d%d%d%d",&n,&m,&k,&q);
	int windows[n][2];
	for(int i=0;i<n;i++)
	{	
		windows[i][0]=windows[i][1]=0;
	}
	for(int i=0;i<k;i++)
	{
		person p;
		p.id=i;
		scanf("%d",&(p.time));
		Outline.push_back(p);
	}
	
	while(true)
	{
		if (timer>LIMIT)
			break;
	    Min=0;
		currpeo=windows[0][0];
		while(num<n*m)
		{
		    for(int i=0;i<n;i++)
			    if(windows[i][0]<currpeo)
			    {
			    	Min=i;
			    	currpeo=windows[i][0];
			    }
			num++;
			if (Outline.size()==0)
			    break;
			 person pl=Outline.front();
			
			pl.donetime=currpeo+pl.time;
			pl.window=Min;
			windows[Min][1]+=pl.time;
			windows[Min][0]++;
			list<person>::reverse_iterator ite = Inline.rbegin();
			for (; ite !=Inline.rend(); ++ite)
			{
				if (pl.donetime>ite->donetime)
					break;
			}
			Inline.insert(ite,pl);
			Outline.pop_front();
		}
		if (Inline.size()>0)
		{
		 person lp=*(Inline.begin());
		 Inline.pop_front();
		 num--;
		 donepson[lp.id]=lp;
		 timer=lp.donetime;
	    }
	    else
	    	break;
	}
	for(int i=0;i<q;i++)
	{
		int tmpq;
		int donetime;
		scanf("%d",&tmpq);
		if(donepson.find(tmpq)==donepson.end())
			cout<<"Sorry"<<endl;
		else
		{
			donetime=donepson[tmpq].donetime;
			printf("%02d:%02d\n",8+donetime/60,donetime%60);
		}
	}
}

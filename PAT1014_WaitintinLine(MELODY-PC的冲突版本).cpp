#include <list>
#include <deque>
#include <iostream>
#include <map>
#include <stdio.h>
#include <algorithm>
//#include <iterator>4

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
int main(){
	 int n=0,m=0,k=0,q=0;
	
	scanf("%d%d%d%d",&n,&m,&k,&q);
	cout<<n<<m<<k<<q<<endl;
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
	for(deque<person>::iterator i=Outline.begin();i!=Outline.end();i++)
	{
		cout<<" "<<i->time<<" ";
	}
	cout<<"\n";
	while(true)
	{
		if (timer>LIMIT)
			break;
	
		//入线 
		while(num<n*m)
		{ 
		    Min=0;
		    currpeo=windows[0][0];
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
			windows[Min][1]+=pl.time;
			pl.donetime=windows[Min][1];
			pl.window=Min;
			for(int i=0;i<n;i++)
			{
				cout<<windows[i][0]<<" "<<windows[i][1]<<endl; 
			}
			list<person>::iterator ite = --Inline.end();
			for (; ite !=Inline.begin(); --ite)
			{
				cout<<pl.donetime<<" "<<ite->donetime<<ite->id<<endl; 
				if (pl.donetime>ite->donetime)
					cout<<"looped "<<ite->id<<" ";
					break;
			}
			cout<<"looped2 "<<ite->id<<"\n";
			Inline.insert(ite,pl);
			for (list<person>::iterator it = Inline.begin(); it !=Inline.end(); ++it)
			{
			    cout<<it->time<<"-->";
				//"<<ite->time<<" "<<ite->window<<" "<<ite->donetime<<endl;
			}
			cout<<"\n";
			Outline.pop_front();
		}
		//出线 
		if (Inline.size()>0)
		{
		 person lp=Inline.front();
		 Inline.pop_front();
		 num--;
		 donepson[lp.id]=lp;
		 timer=lp.donetime;
	    }
	    else
	    	break;
	}
	//query 查询 
	for(int i=0;i<q;i++)
	{
		int tmpq;
		int donetime;
		scanf("%d",&tmpq);
		if(donepson.find(tmpq-1)==donepson.end())
			cout<<"Sorry"<<endl;
		else
		{
			donetime=donepson[tmpq-1].donetime;
			printf("%02d:%02d\n",8+donetime/60,donetime%60);
		}
	}
}

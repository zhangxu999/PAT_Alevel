#include <iostream>
#include <map>
#include <vector>
#include <cstdlib>
#include  <string>
using namespace std;
typedef struct node
{
	string address;
	string nextadd;
	int value;
	node *next;
};
int main()
{
	string startadd;
	int num;
	cin>>startadd>>num;
	map<string,node *> Nodes;
	for(int i=0;i<num;i++)
	{
		node *n=new node();
		string address,nextadd;
		int value;
		cin>>address>>value>>nextadd;
		n->address=address;
		n->value=value;
		n->nextadd=nextadd;
		Nodes[address]=n;
	}
	for(map<string,node *>::iterator i=Nodes.begin();i!=Nodes.end();i++)
	{
		if(i->second->nextadd=="-1")
			i->second->next=NULL;
		else
			i->second->next=Nodes[i->second->nextadd];
	}
	node* p;
	node *r,*a,*b,*s;
	a=new node();
	r=a;
	b=new node();
	s=b;
	p=Nodes[startadd];
	map<int,int> exist;
	
	while(p!=NULL)
	{
		if(exist.find(abs(p->value))==exist.end())
		{
			r->next=p;
			r=p;
	        exist[abs(p->value)]=1;
		}
		else
		{
			s->next=p;
			s=p;
	    }
		p=p->next;
	}
	r->next=s->next=NULL;
	r->nextadd=s->nextadd="-1";
	p=a->next;
	while(p!=NULL)
	{
		cout<<p->address<<" "<<p->value<<" ";
		if(p->next!=NULL)
		   cout<<p->next->address<<endl; 
		else
		    cout<<"-1"<<endl;
		p=p->next;
	}
	p=b->next;
	while(p!=NULL)
	{
		cout<<p->address<<" "<<p->value<<" ";
		if(p->next!=NULL)
		   cout<<p->next->address<<endl; 
		else
		    cout<<"-1"<<endl; 
		p=p->next;
	}
	return 0;
}

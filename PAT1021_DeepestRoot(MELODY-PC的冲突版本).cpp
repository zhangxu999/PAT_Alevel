#include <iostream>
#include <vector>
#include <deque>
#define MAX 10005
using namespace std;
vector <int> adj[MAX];
int dist[MAX];
int parent[MAX];
int N;
int bfs(int start)
{
	for(int i=1;i<N+1;++i)
		dist[i]=-1;
	deque<int> d;
	d.push_back(start);
	dist[start]=0;
	int tmp,max=0;
	while(d.size()>0)
	{
		tmp=d.front();
		for(int i=0;i<adj[tmp].size();i++)
			if(dist[adj[tmp][i]]<0)
			{
				d.push_back(adj[tmp][i]);
				dist[adj[tmp][i]]=(dist[tmp]+1);
				//cout<<dist[tmp]+1<<" "<<dist[adj[tmp][i]]<<" \n";
				if(dist[adj[tmp][i]]>max)
					max=dist[adj[tmp][i]];
			}
		//cout<<"tmp:  "<<tmp<<" " ;
		//for(int i=1;i<N+1;i++)
		//cout<<dist[i]<<" ";
		//cout<<"\n";
		d.pop_front();

	}
	return max;
}
int find(int a)
{
	while(a!=parent[a])
		a=parent[a];
	return a;
}
int main()
{

	cin>>N;
	for(int i=1;i<N+1;i++)
		parent[i]=i;
	for (int i =1; i < N; ++i)
	{
		int a,b;
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
		int pa=find(a);
		int pb=find(b);
		if(pa!=pb)
			parent[pb]=pa;
	}
	int cnt=0;
	
	for(int i=1;i<N+1;++i)
	{
		
		if(i==parent[i])
			++cnt;
		//cout<<parent[i]<<cnt<<"\n";
	}
	
	if(cnt>1)
		cout<<"Error: "<<cnt<<" components";
	elif() 
	else
	{
		int max,i;
		max= bfs(1);
		for(i=1;i<N+1;i++)
			if(dist[i]==max)
				break;
		max=bfs(i);
		dist[i]=max;
		for(i=1;i<N+1;i++)
			if(dist[i]==max)
				cout<<i<<"\n";
	}



}

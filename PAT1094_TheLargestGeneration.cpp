#include <iostream>
#include <queue>
#include <map>
#include <vector>
using namespace std;
int main()
{
	int N,M;
	deque<int> par,son;
	cin>>N>>M;
	vector<vector<int> > nodes(N+1);
	int level[N+1];
	for(int i=0;i<M;i++)
	{
		int index,num,tmp;
		cin>>index>>num;
		while(num--)
		{
			cin>>tmp;
			nodes[index].push_back(tmp);
		}
	}
	//map[1]=1;
	par.push_back(1);
	level[1]=1;
	while(!par.empty())
	{
		int tmp=par.front();
		for(int i=0;i<nodes[tmp].size();i++)
		{
			level[nodes[tmp][i]]=level[tmp]+1;
			par.push_back(nodes[tmp][i]);
		}
		par.pop_front();
	}
	map<int,int> levelcnt;
	for(int i=1;i<N+1;i++)
	{
		if(levelcnt.find(level[i])==levelcnt.end())
			levelcnt[level[i]]=1;
		else
			levelcnt[level[i]]++;
	}
	int maxlevel ,maxnum=0;
	for(map<int,int>::iterator i=levelcnt.begin();i!=levelcnt.end();i++)
	{
		if(i->second>maxnum)
		{
			maxnum=i->second;
			maxlevel=i->first;
		}
	}
	cout<<maxnum<<" "<<maxlevel;
	return 0;
}

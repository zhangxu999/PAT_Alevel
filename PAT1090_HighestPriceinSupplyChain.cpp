#include <iostream>
#include <stack>
#include <stdio.h>
#include <math.h>
using namespace std;
int N;
const double eps = 1.e-8;
float P,r;
int main()
{
	cin>>N>>P>>r;
	int maxLevel=0,maxNum;
	int network[N],dist[N];
	stack<int> st;
	for(int i=0;i<N;i++)
	{
		cin>>network[i];
		dist[i]=-1;
		if (network[i]<0)
			dist[i]=0;
	}
	for(int i=0;i<N;i++)
	{   
	    int tmp=i,p=network[tmp];
	    if (dist[tmp]<0)
	    {
	    	if(dist[p]>=0)
	    	    dist[tmp]=dist[p]+1;
	    	else
	    	{
	    		while(dist[tmp]<0)
	    		{
	    			st.push(tmp);
	    			tmp=p;
	    			p=network[p];
	    		}
	    		int level=dist[tmp];
	    		while(!st.empty())
	    		{
	    			level++;
	    			dist[st.top()]=level;
	    			st.pop();
	    		}
	    	}
	    }
	  
	}
	int max=0,cnt=0;
	for(int j=0;j<N;j++)
	{
		if(dist[j]>max)
		{
			max=dist[j];
		    cnt=1;
		    continue;
		}
		if(dist[j]==max)
			cnt+=1;
//	cout<<dist[j]<<" "<<max<<" "<<cnt<<"..";
	}
	//cout<<P*pow(1+r/100,max)<<" ";
	printf("%.2f %d",P*pow(1+r/100,max)+eps,cnt);
	return 0;
}

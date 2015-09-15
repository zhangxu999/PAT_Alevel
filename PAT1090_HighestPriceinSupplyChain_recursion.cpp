#include <iostream>
#include <stack>
#include <stdio.h>
#include <math.h>
using namespace std;
int N;
double P,r;
int level(int a,int *nw,int *dist)
{
	//cout<<"level"<<" "<<nw[a]<<" "<<dist[a]<<endl;
    if (dist[a]>=0)
        return dist[a];
    else
    {
        dist[a]=level(nw[a],nw,dist)+1;
        return dist[a];
    }
}
int main()
{
    cin>>N>>P>>r;
    int maxLevel=0,maxNum;
    int network[N],dist[N];
    stack<int> st;
    for(int i=0;i<N;i++)
    {
        cin>>network[i];
        if (network[i]>0)
            dist[i]=-1;
        else
            dist[i]=0;
    }
    for(int i=0;i<N;i++)
    {   if(dist[i]<0)
           dist[i]=level(i,network,dist);
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
    // cout<<dist[j]<<" "<<max<<" "<<cnt<<"..";
    }
    printf("%.2lf %d",P*pow(1+r/100,max),cnt);
    return 0;
}

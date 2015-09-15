#include <iostream>
using namespace std;
int N;
void Dijkstra(MGraph g,int v)
{
    int dist[N],path[N];
    int s[N];
    int minis,i,j,u;
    for(i=0;i<g.n;i++)
    {
        dist[i]=g.edge[v][i];//距离初始化
        s[i]=0;
        if(g.edge[v][i]<INF)//路径初始化
            path[i]=v;//顶点V到顶点有边时，置顶点i的前一个顶点为V
        else
            path[i]=-1;//顶点V到顶点i没边时，置顶点i的前一个顶点为-1.
    }
    s[v]=1;path[v]=0;//源点编号v放入s中。
    for(i=0;i<g.n;i++)//循环直到所有顶点的最短路径都求出
    {
        minis=INF;//置最小长度的初值
        for(j=0;j<g.n;j++)
        {
            if(s==0 && dist[j]<minis)//选取不在s中且距离最小的顶点u
            {
                u=j;
                minis=dist[j];
            }
        }
    s[u]=1;//顶点u加入到s中
    for(j=0;j<g.n;j++)//修改不在s中顶点的距离。
    {
        if(s[j]==0)
            if(g.edge[u][j]==0 && dist[u]+g.edge[u][j]<dist[j])
            {
                dist[j]=dist[u]+g.edge[u][j];
                path[j]=u;
            }
    }
    int r[N];
    if 
    }
}
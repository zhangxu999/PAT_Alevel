#include <cstdio>
#include <vector>
#include <string>
#include <map>
#include <iostream>
using namespace std; 
map<string,int> id;

int n,m;

void dijstra(int[] edge,int v){
    int happys[n],costs[n].finded[n];
    for(int i=0;i<n;i++)
    {
        finded[i]=-1;
        happys[i]=0;
        costs[i]=INF;
    }
    finded[v]=1;
    for(i=0;i<n;i++)
    {
        costs[i]=
    }

    



}
int main()
{
    int n,m;
    string start;
    cin>>n>>m>>start;
    int cities[n];
    int[n][n] edge;
    id[start]=0;
    cities[0]=new City;
    cities[0].happiness=0;
    for(int i=1;i<n;i++
    {
        int name,happy;
        cin>>name>>happy;
        id[name]=i;
        cities[i]=happy;
    }
    for(int i=0;i<m;i++)
    {
        string c1,c2;
        int cost;
        cin>>c1>>c2>>cost;
        edge[id[c1]][id[c2]]=edge[id[c2]][id[c1]]=cost;
    }

    return 0;
}
#include <iostream>
#define MAX 1005

typedef struct {
    int data;
    int rank;
    int parent;
} Node;

int N,M,K;
int cnt=0;
Node nodes[MAX+1];
bool visited[MAX+1];
int[] highway[M];
int[2] check[K];


Node make_set(int N,int m){
    for(i=;i<N+1;i++) 
    {
        nodes[i].data=i;
        nodes[i].rank=0;
        nodes[i].parent=i;
    }
    return Node
}

int Find_set(Node[] *nodes,int x){
    if (x !=nodes[x].parent)
        return Find_set(nodes,nodes[x].parent);
    else
        return x;
}
void Union(int i, int j){
    int x=Find_set(nodes,i);
    int y=Find_set(nodes,j);
    if (nodes[x].rank>nodes[y].rank)
        nodes[y].parent=x;
    else
    {
        nodes[x].parent=y;
        if (nodes[x].rank==nodes[y].rank){
            nodes[y].rank++;
        }
    }
}
int main(){
    scanf("%d%d%d",&N,&M,&K);
    int[K] highway[2];
    for (int i = 0; i < K; ++i)
        visited[i]=0
    for (int i = 0; i < K; ++i)
    {
        scanf("%d%d",&highway[i][0],&highway[i][1]);
    }
    for (int i = 0; i < K; ++i)
    {
        /* code */

    }
    for(i=0;i<K;i++)
    {Tree=make_set(N,check[i])
        for(j=0;j<N;j++)
            visited[j]=0;
       if(highway[i][0]!=check[i] && highway[i][1]!=check[i])
        Union(Tree,highway[i][0],highway[i][1],visited)
    for(i=0i<N;i++)
    {
        if Tree[i]!="" && 
    }
    }
}
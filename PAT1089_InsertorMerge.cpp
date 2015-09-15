#include <iostream>
#include <algorithm>
#include <cstdio>
#include <fstream> 
#include <memory.h>
using namespace std;
int a[105],b[105],c[105];
void print(int *a,int n){
    for(int i=0;i<n;i++){
        if(i){
            cout<<" ";            
        }
        cout<<a[i];
    }
}
bool same(int *a,int *b,int n){
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}
bool insertion(int *c,int *b,int n){
    bool mark=false;
    for(int i=2;i<=n;i++){
        sort(c,c+i);
    if(same(c,b,n)){
        mark=true;
    }
    if(mark &&(!same(c,b,n)))
    {
        cout<<"Insertion Sort\n";
        print(c,n);
        return true;
    }
}
    return false;
}
bool merge(int *c,int *b,int n){
    bool mark=false;
    for(int i=2;i<=n;i<<=1)
    {
        int j;
        for(j = 0;j+i<=n;j+=i){
            sort(c+j,c+j+i);

        }
        sort(c+j,c+n);
        if(same(c,b,n)){
            mark=true;
        }
        if(mark &&(!same(c,b,n))){
            cout<<"Merge Sort\n";
            print(c,n);
            return true;
        }
    }
    return false;
}
int main(){
        #ifndef ONLINE_JUDGE
        ifstream cin("test");
        //ofstream cout("o.txt");
        //freopen("i.txt", "r", stdin);
        //freopen("o.txt", "w", stdout);
        #endif
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    memcpy(c,a,sizeof(a));
    if(!insertion(c,b,n)){
        merge(a,b,n);
    }
    return 0;
}

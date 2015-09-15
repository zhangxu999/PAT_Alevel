#include <iostream>
#include <fstream>
#include <map>
#include <deque>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
    ifstream cin("test");
    #endif
    int M,N,L,T,cnt=-1;
    cin>>M>>N>>L>>T;
    int a[L+2][M+2][N+2];
    for (int i=0; i<L+2; ++i) {
        for (int j=0; j<M+2; ++j) {
            for(int k=0; k<N+2; ++k) {
                 if (i==0|| i==L+1 || j==M+1 || j==0 || k==0 ||k== N+1 ) {
                    a[i][j][k]=0;
                }
                else {
                    cin>>a[i][j][k];
                }
                //cout<<a[i][j][k]<<" ";
            }
            //cout<<endl;
        }
        //cout<<endl;
    }
    //开始遍历
    deque<int> d;
    map<int,int> r;
    for(int i=1;i<L+1;++i) {
        for (int j=1; j<M+1; ++j) {
            for( int k=1; k<N+1; ++k) {
                if(a[i][j][k]>0) {
                    d.push_back(i);
                    d.push_back(j);
                    d.push_back(k);
                    a[i][j][k]=cnt;
                    r[cnt]=1;
                    --cnt;
                    while(!d.empty()) {
                        int x=d.front();
                        d.pop_front();
                        int y=d.front();
                        d.pop_front();
                        int z=d.front();
                        d.pop_front();
                        if(a[x-1][y][z]>0) {
                            d.push_back(x);
                            d.push_back(y);
                            d.push_back(z);
                            a[x-1][y][z]=a[x][y][z];
                            ++r[a[x-1][y][z]];
                        }
                        if(a[x+1][y][z]>0) {
                            d.push_back(x);
                            d.push_back(y);
                            d.push_back(z);
                            a[x+1][y][z]=a[x][y][z];
                            ++r[a[x+1][y][z]];
                        }
                        if(a[x][y-1][z]>0) {
                            d.push_back(x);
                            d.push_back(y);
                            d.push_back(z);
                            a[x][y-1][z]=a[x][y][z];
                            ++r[a[x][y-1][z]];
                        }
                        if(a[x][y+1][z]>0) {
                            d.push_back(x);
                            d.push_back(y);
                            d.push_back(z);
                            a[x][y+1][z]=a[x][y][z];
                            ++r[a[x][y+1][z]];
                        }
                        if(a[x][y][z-1]>0) {
                            d.push_back(x);
                            d.push_back(y);
                            d.push_back(z);
                            a[x][y][z-1]=a[x][y][z];
                            ++r[a[x][y][z-1]];
                        }
                        if(a[x][y][z+1]>0) {
                            d.push_back(x);
                            d.push_back(y);
                            d.push_back(z);
                            a[x][y][z+1]=a[x][y][z];
                            ++r[a[x][y][z+1]];
                        }
                    }
                }
                }
            }
        }
    int total=0;
    for(map<int,int>::iterator p=r.begin();p!=r.end();p++) {
        //cout<<p->first<<" "<<p->second<<endl;
        if(p->second>=2) {
            total+=p->second;
        }
    }
    cout<<total<<endl;
    return 0;
    }

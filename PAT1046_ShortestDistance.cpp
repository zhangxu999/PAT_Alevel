#include <iostream>
#include <fstream>
using namespace std;
int shun[100005],ni[100005],a[100005];
int main() {
    #ifndef ONLINE_JUDGE
    ifstream cin("test");
    #endif
    int n,tn;
    cin>>n;
    tn=n;
    for(int i=1; i<n+1; i++ ) {
        cin>>a[i];
    }
    shun[1]=0; ni[n]=a[n],ni[1]=0;
    for (int i=2; i<=n; ++i) {
        shun[i]=shun[i-1]+a[i-1];
    }
    
    for (int i=n-1; i > 1; --i) {
        ni[i]=ni[i+1]+a[i];
    }
    int m,s,t;
    cin>>m;
    for(int i=0; i < m; ++i) {
        cin>>s>>t;
        int su,nii;
        if(t>s) {
            int tmp;
            tmp=t;
            t=s;
            s=tmp;
        }
        su=shun[s]-shun[t];
        nii=shun[t]+ni[s];
        cout<< ((su<nii)?su:nii) <<endl;
    }
    return 0;
}

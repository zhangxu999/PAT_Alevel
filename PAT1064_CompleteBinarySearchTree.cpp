#include <iostream>
#include <algorithm> 
#include <fstream>
using namespace std;
int a[1005],b[1005],n;
void inorder(int i,int &pos) {
    if(i>n) return;
    inorder(i<<1,pos);
    a[i]=b[pos++];
    inorder((i<<1)+1,pos);
}

int main() {
//	ifstream cin("test"); 
    cin>>n;
    for (int i = 0;i < n; i++) {
        cin>>b[i];
    }
    sort(b, b+n);
    int x=0;
    inorder(1, x);
    for(int i = 1;i < n+1; ++i) {
        if (i>1) {
            cout<<" ";
        }
        cout<<a[i];
    }
    return 0;
}

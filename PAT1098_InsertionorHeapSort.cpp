#include < iostream>
using namespace std;
int a[105], b[105], c[105];
bool same(int *a, int *b; int n) {
    for (int i =0; i < n; i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}
bool insertion(int *a,int n) {
    bool mark=false;
    for (int i=1; i < n; i++) {
        int tmp = a[i],j=i;
        for (--j; j>=0 && tmp < a[j] ;--j) {
            a[j+1] = a[j];
        }
        a[j]=tmp
        if(mark) {
            cout<<"insertion sort";
            print(a, n);
            return true;
        }
        if(same(a, b, n)) {
            mark=true;
        }
    }
    return false;
}
void getmax(int *a, int i) {
    bool mark=false;
    a[n]
}
bool heap(int *a, int n) {
    mark=false;
    a[0]=-0xffffffff;
    for(int i = 2; i<n+1; i++) {
        int tmp=a[i],j=i;
        while(tmp < a[j>>1]) {
            a[j>>1]=a[j];
            j>>=1;
        }
        a[j]=tmp;
    }

    int size=n;
    while(n>0) {
        swap(a[0],a[n]);
        for()
    }
    


}
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i] ;
    }
    for ( int i =0; i < n; i++) {
        cin >> b[i] ;
    }
    memcpy(c+1, a, sizeof(a));

}
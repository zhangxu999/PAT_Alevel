#include <cstdio>
#include <string>
#include <algorithm>
#include <iostream>
#include <fstream>
using namespace std;
string a[10002];
bool cmp(const string &a, const string &b) {
    return (a+b)<(b+a);
}
int main() {
	//ifstream cin("test");
    int n,q;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        //q=a[i][a[i].size()-1];
        //cout<<a[i]<<" ";
    }
    sort(a, a + n, cmp);
    bool have=false;
    for(int i=0;i<n; ++i) {
    	for(int j=0;j<a[i].size(); ++j) {
            if(a[i][j] !='0' || have) {
            	have=true;
                cout<<a[i][j];
            }
        }
    }
    return 0;
}

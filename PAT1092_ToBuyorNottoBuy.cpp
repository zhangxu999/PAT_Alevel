#include <iostream>
#include <map>
#include <string>
#include <fstream>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
    ifstream cin("test");
    #endif
    string s,t;
    map<char,int> r;

    cin>>s;
    cin>>t;
    int less=0,s_cnt=s.size();
    for(int i=0; i<s.size(); ++i) {
        if (r.find(s[i])==r.end()) {
            r[s[i]]=1;
        }
        else {
            ++r[s[i]];
        }
    }
    for (int i=0; i<t.size(); ++i) {
        if (r.find(t[i]) == r.end() || (r.find(t[i]))->second == 0 ) {
            ++less;
        }
        else {
            --s_cnt;
            --r[t[i]];
        }
    }
    if (less > 0) {
        cout<<"No"<<" "<<less;
    }
    else {
        cout<<"YES"<<" "<<s_cnt;
    }
    return 0;
}

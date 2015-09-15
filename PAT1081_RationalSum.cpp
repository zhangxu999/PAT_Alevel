#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;



long long gcd(long long x,long long y){
    return y?gcd(y,x%y):x;
}
int main() {
	#ifndef ONLINE_JUDGE
        ifstream cin("test");
        //ofstream cout("o.txt");
      //  freopen("i.txt", "r", stdin);
        //freopen("o.txt", "w", stdout);
#endif
    int n;
    long long a=0,b=1;
    char s[111];
    char *t;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        t=strstr(s,"/");
        if(t){
            *t=' ';
        }
        long long c,d;
        sscanf(s,"%lld%lld",&c,&d);
        long long aa=a*d+b*c;
        long long bb=b*d;
        long long g=gcd(aa>0?aa:(-aa),bb);
        a=aa/g;
        b=bb/g;
    }
    long long x=a/b ,y=a%b;
    if(y==0){
        cout<<x;
    }
    else{
        if(x){
            cout<<x<<" ";
        }
        cout<<y<<"/"<<b;
    }
    return 0;

}

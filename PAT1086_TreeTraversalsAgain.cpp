#include <iostream>
#include <fstream>
#include <map>
using namespace std;
int pre[35],stack[35],in[35],post[35];
int solve(int preL, int inL, int postL, int n) {
	if (n == 0)
		return 0;
	if (n == 1) {
		post[postL]=pre[preL];
		return 0;
	}
	post[postL+n-1]=pre[preL];
	int i,L,R;
	for(i=0;i<n; i++) {
		if (pre[preL] == in[inL+i])
			break;
	}
	L=i,R=n-L-1;
	solve(preL+1,inL,postL,L);
	solve(preL+L+1,inL+L+1,postL+L,R);
}
int main() {
    #ifndef ONLINE_JUDGE
    ifstream cin("test");
    #endif
    int n,top=-1,pretop=-1,intop=-1;
    char p[5];
    cin>>n;
	int i;
    for( i=0; i<n*2; i++) {
    	cin>>p;
    	if(p[1]=='u') {
    		int t;
    		cin>>t;
    		pre[++pretop]=t;
    		
    		stack[++top]=t;
    	}
    	else {
    		in[++intop]=stack[top--];
    	}
    }
    solve(0,0,0,n);
    for( i=0; i<n; ++i) {
    	if(i) {
    		cout<<" ";
    	}
    	cout<<post[i];
    }
    return 0;
}

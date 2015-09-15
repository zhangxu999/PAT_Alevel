#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
int a[10005][10];
int b[10005];
int cmp(int q, int t) {
	int i= q,j= t,c=0;
	int t1[18],t2[18];
	memcpy(t1,a[i]+0,a[i][0]);
	memcpy(t1+a[i][0],a[j]+0,a[j][0]);
	memcpy(t2,a[j]+0,a[j][0]);
	memcpy(t1+a[j][0],a[i]+0,a[i][0]);
	while(c<18 ) {
		if (t1[1]<t2[i])  {
			return 1;
		}
		else if (t1[i]> t2[i])
			return -1;
		}
		c++;
	return 0;
}
int main() {
	#ifndef ONLINE_JUDGE
	ifstream cin("test");
	#endif
    int n;
    cin>>n;
    for(int i=0; i<n; ++i) {
	        int j=1,t=0;    	
    	    char tmp;
    	    string s;
    	    getline(cin,s);
    	    cout<<s;
        	while(s[t]!=' ' && t<s.size()) {
        		
    		    a[i][j++]=s[t++];
    		    
    	}
    	a[i][0]=j-1;
    	    while(j<10) {
    	    	a[i][j++]=-1;
    	    }
    }
    for(int i=0; i<n; ++i) {
    	b[i]=i;
    }
    sort(b,b+n,cmp);
    for(int i=0; i<n;++i) {
    	int j=0;
    	while(j>0)
    	{//if(i==0 && j==0 && a[b[i]][j]==0)
    		cout<<a[b[i]][j];
    	}
    }
    
}

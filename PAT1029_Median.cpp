#include <iostream>
#include <fstream>
using namespace std;
long int a[1000005],b[1000005]; 
int main() {
  #ifndef ONLINE_JUDGE
  ifstream cin("test");
  #endif
  int n,m;
  cin>>n;
  for (int i = 0; i < n; ++i) {
    cin>>a[i];
  }
  cin>>m;
  
  for (int i = 0; i < m; ++i) {
    cin>>b[i];
  }
  int i=0, j=0, k=0, t=n+m;
  //int flag;
  t = (t)%2 ? t/2+1 : t/2;
  
    while(j<n && k<m && (j+k)<t) {
    	if(a[j]<b[k]) {
    		++j;
    		//++i;
    		//flag=1;
    	}
    	else {
    		++k;
    		//++i;
    		//flag=0;
    	}
    }
    if(j<n &&k<m){
    	cout<<(a[j-1]>b[k-1]?a[j-1]:b[k-1])<<endl;
    	return 0;
    }
  if(j < n) {
    	j=t-m;
    	cout<<a[j-1];
    	return 0;
    	/*
    	while((j+k-2)<t) {
    		++j;
    		//++i;
    		//flag=1;
    	}
    	*/
    }
    if (k < m) {
    	k=t-n;
    	cout<<b[k-1];
    	return 0;
    	/*
    	while((j+k-2)<t) {
    	++k;
    	//++i;
    	//flag=0;
    }
    */
    }
   
   return 0;
}

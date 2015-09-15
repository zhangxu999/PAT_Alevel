#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <istream>
using namespace std;
int cnt[256];
int main() {
	#ifndef ONLINE_JUDGE
	ifstream cin("test");
	#endif
	string l1,l2;
	
	//getline(l1,cin);
	getchar();
	getline(l2,cin);
	for (int i=0; i<l2.size(); ++i) {
		++cnt[l2[i]];
	}
	for (int i = 0; i < l1.size(); ++i) {
		if (l1[i] == 32 || cnt[l1[i]] ==0 ) {
			cout<<l1[i];
		}
	}
	return 0;
}

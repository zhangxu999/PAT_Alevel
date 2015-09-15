#include <iostream>
#include <fstream>
using namespace std;
int n;
struct node {
	int val;
	 node *L=NULL;
	 node *R=NULL;
}a[1000];

int main ()  {
	ifstream cin("test");
	cin >> n;
	char tmp;	
	for (int i =0; i < n; ++i) {
		a[i].val = i;
		cin >> tmp;
		if (tmp != '-') {
			a[i].L = &a[tmp-48];
		}
		cin >> tmp;
		if (tmp != '-') {
			a[i].L = &a[tmp];
		}
	}
	
}

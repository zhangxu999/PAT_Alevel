#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;
string name[1005],pwd[1005];
int main(){
#ifndef ONLINE_JUDGE
	ifstream cin("test");
#endif

	int n;
	cin >> n;
	int modnum=0;
	vector<int> r;
	for(int i=0;i<n;i++) {
		cin>>name[i];
		cin>>pwd[i];
		for(int j=0;j < pwd[i].size();i++) {
			bool mark=false;
			if (pwd[j]=='1') {
				pwd[j]='@';
				mark=true;
			}
			if (pwd[j]=='0') {
				pwd[j]='%';
				mark=true;
			}
			if (pwd[j]=='l') {
				pwd[j]='L';
				mark=true;
			}
			if (pwd[j]=='O') {
				pwd[j]='o';
				mark=true;
			}
			if(mark) {
				r.push_back(i);
			}
		}
	}
	if(r.size()==0 && n==1) {
		cout<<"";
	}
	else if (r.size()==0) {
		cout<<"";
	}
	else {
		cout<<r.size()<<"\n";
		for(int i=0;i<r.size(); i++) {
			cout<<name[r[i]]<<" "<<pwd[r[i]]<<endl;
		}
	}

}

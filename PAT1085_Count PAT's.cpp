#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int PAT_cnt[100005] ;
int main() {
#ifndef ONLINE_JUDGE
	ifstream cin("test");
#endif
	string s;
//	scanf("%s",&s);
	cin>> s;
	//cout<<s;
	//cout<<s.size()<<" "<<s[0]; 
	int T_cnt=0,A_cnt=0,P_cnt=0;
	for(int i=s.size()-1; i>=0;--i) {
		if(s[i]=='T') {
			++T_cnt;
			//PAT_cnt[i]=T_cnt;
			continue;
		}
		if (s[i] == 'A') {
			A_cnt+=T_cnt;
			//PAT_cnt[i]=A_cnt+T_cnt;
			A_cnt%=10007; 
			continue;
		}
		if( s[i] =='P') {
			P_cnt+=A_cnt;
			P_cnt%=10007;
			
		}
		
	}
	cout<<P_cnt<<endl;
	return 0;
}

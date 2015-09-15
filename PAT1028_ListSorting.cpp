#include <iostream>
#include <string> 
#include <algorithm>
#include <fstream>
using namespace std;
struct node{
	string id;
	string name;
	int grade;
} stu[100005];
int a[100005];
bool cmp1(int a,int b) {
	return stu[a].id<stu[b].id;
}
bool cmp2(int a,int b) {
	return stu[a].name<=stu[b].name;
}
bool cmp3(int a,int b) {
	if (stu[a].grade<stu[b].grade) {
		return true;
	}
	else if (stu[a].grade==stu[b].grade) {
		if (stu[a].id<=stu[b].id) {
			return true;
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
}
int main() {
	//ifstream cin("test");
	int n,c;
	cin>>n>>c;
	for(int i=0;i<n; i++) {
		a[i]=i;
		cin>>stu[i].id>>stu[i].name>>stu[i].grade;
		//cout<<stu[i].id<<stu[i].name<<stu[i].grade;
	}
	switch (c) {
		case 1:
			sort(a,a+n,cmp1);
			break;
		case 2:
			sort(a,a+n,cmp2);
			break;
		case 3:
			sort(a,a+n,cmp3);
			break;
	}
	for(int i=0;i<n; i++) {
		cout<<stu[a[i]].id<<" "<<stu[a[i]].name<<" "<<stu[a[i]].grade<<endl;
	}
	return 0;
	
} 

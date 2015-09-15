#include <map>
using namespace std;
int Num[100005];
map<int,bool> r;
int main()
{
	int N;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		int tmp;
		cin>>tmp;
		Num[i]=tmp;
		if(r.find(tmp)==r.end())
			r[tmp]=true;
		else
			r[tmp]=false;
	}
	for(int i=0;i<N;i++)
	{
		if(r[Num[i]])
		{
			cout<<Num[i];
			return 0;
		}
	}
	cout<<"None";
	return 0;

}

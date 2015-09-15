#include <iostream>
using namespace std;
int main()
{
	int n,tmp;
	char spcdj[5]={'S','H','C','D','J'}; 
	int poke[55],shuu[55];
	cin>>n;
	for(int i=1;i<55;i++)
	{
		cin>>tmp;
		poke[i]=tmp;
	}
	for(int i=1;i<55;i++)
	{
		int tmp=poke[i];
		int cnt=n;
		while(cnt--)
			tmp=poke[tmp];
		shuu[tmp]=poke[i];

	}
	for(int i=1;i<55;i++)
	{
		if(i!=1)
			cout<<" ";
		cout<<spcdj[(shuu[i]-1)/13]<<(shuu[i]-1)%13+1;
	}
	return 0;

}

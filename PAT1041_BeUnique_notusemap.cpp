#include <iostream>
using namespace std;
int Num[30];
int have[15];
int main()
{
	int N;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		
		cin>>Num[i];
		++have[Num[i]];
		cout<< have[Num[i]];
	}
	int j=-1;
	for(int i=0;i<N;i++)
	{
		if(have[Num[i]]==1)
		{
			j=i;
		    break;
		}
	}
	if(j>=0)
		cout<<Num[j];
	else
	    cout<<"None";
	return 0;
}

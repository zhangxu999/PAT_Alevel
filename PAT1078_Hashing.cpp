#include <iostream>
using namespace std;

bool isPrime(int a)
{
	if(a<2)
	  return false;
	for(int i=2;i*i<=a;i++)
		if(a%i==0)
			return false;
	return true;
}
int main()
{
	int Msize,N;
	cin>>Msize>>N;
	while(!isPrime(Msize))
		Msize++;
	int hash[Msize];
	for(int i=0;i<Msize;i++)
		hash[i]=-1;
	int tmp;
	cin>>tmp;
	tmp%=Msize;
	hash[tmp]=0;
	cout<<tmp;
	for(int i=0;i<N-1;i++)
	{
		cin>>tmp;
		tmp%=Msize;
		int j;
		for(j=0;j<Msize;j++)
		{
			int key=(tmp+j*j)%Msize;
			if(hash[key]<0)
			{
			    hash[key]=0;
			    cout<<" "<<key;
			    break;
			}
		}
		if(j>=Msize)
			cout<<" -";
		   
	}
	return 0;
}

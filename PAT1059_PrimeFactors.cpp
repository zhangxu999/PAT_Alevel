//思路：首先，没有必要计算质数表
//。当分解质因数时，会慢慢八较小的质因数约掉，故N之后所包含的质因数，不可能有合数。
//所含质数可以仅仅计算到sqrt(N)即可 （同求质数遍历一个思想，）故在sqrt（N)内，N的较小的质因数约掉后，
//N的值要么是1，要么是 一个大于sqrt(N),<=N的质数。 
#include <iostream>
#include <map>
using namespace std;
int main()
{
	int N;
	bool first=true;
	cin>>N;
	cout<<N<<"="; 
	if(N==1)
	{
		cout<<N;
		return 0;
	}
	for(int i=2;i*i<=N;++i)
	{
		int j;//质因数个数。 
		for(j=0;N%i==0;N/=i,++j)
		    ;
		if(j)
		{
			if(first)
			   first=false;
			else
				cout<<"*";
			cout<<i;
			if(j>1)
			    cout<<"^"<<j;
		}
	}
	if(N>1)
	{
		if (!first)
		    cout<<"*";
		cout<<N;
	}
	return 0;
}

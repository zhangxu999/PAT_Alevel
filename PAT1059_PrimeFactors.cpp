//˼·�����ȣ�û�б�Ҫ����������
//�����ֽ�������ʱ���������˽�С��������Լ������N֮�������������������������к�����
//�����������Խ������㵽sqrt(N)���� ��ͬ����������һ��˼�룬������sqrt��N)�ڣ�N�Ľ�С��������Լ����
//N��ֵҪô��1��Ҫô�� һ������sqrt(N),<=N�������� 
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
		int j;//������������ 
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

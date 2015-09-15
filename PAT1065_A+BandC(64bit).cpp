#include <iostream>
using namespace std;
int main()
{
	int N;
	long long A,B,C,SUM;
	
	cin>>N;
	for(int i=1;i<N+1;i++)
	{
		cin>>A>>B>>C;
		SUM=A+B;
		cout<<"Case #"<<i<<": ";
		if(A>0&&B>0&&SUM<=0)
		    cout<<"true"<<endl;
		else if (A<0&&B<0&&SUM>=0)
		    cout<<"false"<<endl;
		else if(SUM>C)
		    cout<<"true"<<endl;
		else
		    cout<<"false"<<endl;
    }
	return 0;
}

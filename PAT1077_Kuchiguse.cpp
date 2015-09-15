#include <iostream>
#include <fstream>
using namespace std;
#include <string> 
int main()
{
	int num;
	cin>>num;
	getchar();
	string curr,suffex;
	int i,j;
	getline(cin,suffex);
	i=suffex.size()-1;
	if(i<0)
	{
		cout<<"nai";
		return 0;
	}
	while(--num>0)
	{
		getline(cin,curr);
		j=curr.size()-1;
		if (j<0)
		{
			cout<<"nai";
			return 0;
		}
		for(;j>=0 && i>=0;j--,i--)
			if(curr[j]!=suffex[i])
			    break;
		suffex=curr.substr(j+1);
		i=suffex.size()-1;
	}
	if(suffex.size()==0)
		cout<<"nai";
	else
	    cout<<suffex;
}

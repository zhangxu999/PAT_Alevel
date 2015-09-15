#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std; 
int main()
{
	char origin[22];
	int Dorigin[22];
	int hash[10];
	for(int i=0;i<22;i++)
	{
	    origin[i]=0;
		Dorigin[i]=0;
	}
	cin>>origin;
	//for(int i=0;i<22;i++)
    	//cout<<origin[i]<<" .";
    //	printf("%d ",origin[i]);
	for(int i=0;i<10;i++)
	    hash[i]=0;
	int f=22,j=0;
	for(;origin[f]==0;f--)
	    ;
	cout<<"2 ";
	for(;f>=0;f--,j++)
	{
		int tmpi=origin[f]-48;
		hash[tmpi]++;
		Dorigin[j]+=(tmpi*2)%10;
		if(tmpi>4)
		   Dorigin[j+1]+=(tmpi*2)/10;
		hash[Dorigin[j]]--;
		/*
		cout<<Dorigin[j]<<" ";
		for(int z=0;z<10;z++)
		    cout<<hash[z]<<" ";
		cout<<"\n";
		*/
	}
	cout<<"3";
	if(Dorigin[j+1]!=0)
	    hash[Dorigin[j+1]]--;
	/*
	for(int z=0;z<10;z++)
		cout<<hash[z]<<" ";
	cout<<"\n";
	*/
	int flag=true;
	for(int i=0;i<10;i++)
	   if(hash[i]!=0)
	   {
	   	flag=false;
	   	break;
	   }
	if(flag)
	    cout<<"Yes\n";
	else
	    cout<<"No\n";
	cout<<"4 ";
	for(int i=22;i>=0;i--)
	   if(Dorigin[i]!=0)
	       cout<<Dorigin[i];
	return 0;
}

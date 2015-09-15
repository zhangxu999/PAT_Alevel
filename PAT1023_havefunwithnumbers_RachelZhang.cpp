#include "iostream"
#include "string.h"
#include<stdio.h>
#include <algorithm>
#include<functional>
#include<vector>
#include"memory.h"
using namespace std;
#define N 11
int C[N];

char* dd(char* s)
{
	int i,j;
	char *res = (char*) malloc(22);
	for (i=0;i<22;i++)
		res[i]='\0';
	//memset(res,'\0',sizeof(res));
	res[0]='a';
	int l = strlen(s),inc = 0,t;
	for (i=l;i>0;i--)
	{
		t = (s[i-1]-'0')*2+inc;
		inc = t/10;
		res[i] = (t%10)+'0';
	}
	if(inc)
		res[i] = inc+'0';
	return res;
}

int main()
{
	char s[22];
	int i,j;
	int C2[22];
	for(int z=1000000;z<2000000;z++)
	{
	    //scanf("%s",s);
	    sprintf(s,"%d",z);
		memset(C,0,sizeof(C));
		for(i=0;i<strlen(s);i++)
			C[s[i]-'0']++;

		char *res = dd(s);

		memset(C2,0,sizeof(C2));
		i=res[0]=='a'?1:0;
		for (;i<strlen(res);i++)
			C2[res[i]-'0']++;
		for (i=0;i<10;i++)
		{
			if(C[i]!=C2[i])
			{
			//	printf("No\n");
				break;
			}
		}
		if (i==10)
		{
			printf("Yes\n");
			printf("%d    %d\n",z,z*2);
     	}
		if(res[0]=='a')
		{
			for (i=1;i<strlen(res);i++)
			;
			//	printf("%c",res[i]);
			//printf("\n");
		}
		else
		;
			//printf("%s\n",res);
	}
	return 0;
}

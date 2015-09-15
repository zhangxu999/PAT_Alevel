#include <cstdio>
int main()
{
	int x1,x2,x3,y1,y2,y3;
	scanf("%d.%d.%d %d.%d.%d",&x1,&x2,&x3,&y1,&y2,&y3);
	//printf("%d.%d.%d %d.%d.%d",x1,x2,x3,y1,y2,y3);
	x1+=y1;
	x2+=y2;
	x3+=y3;
	if(x3>=29)
	{
		x2+=(x3/29);
		x3%=29;
	}
	if(x2>=17)
	{
		x1+=(x2/17);
		x2%=17;
	}
	printf("%d.%d.%d",x1,x2,x3);

}

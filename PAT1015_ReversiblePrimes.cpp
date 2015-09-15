#include <stdio.h>
#include <iostream>
using namespace std;
bool isP(int number){
    if (number==0 || number==1)
        return false;
    if (number==2)
        return true;
    for (int i =2; i*i<=number; ++i)
    {
        if(number%i==0)
            return false;
    }
    return true;
}
int Revese(int num,int radix){
    int m=0;
    while(num!=0){
        m=m*radix+num%radix;
        num=num/radix;
    }
    return m;
}

int main(){
	int num,radix;
	scanf("%d",&num);
while(num>0){
	scanf("%d",&radix);
    if (isP(num) && isP(Revese(num,radix)))
    	printf("Yes\n");
	else
        printf("No\n");
    scanf("%d",&num);
    }
    return 0;
}

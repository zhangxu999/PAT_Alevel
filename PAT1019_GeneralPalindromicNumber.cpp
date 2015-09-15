#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
void printall(std::vector<int> v)
{
    vector<int>::reverse_iterator p1=v.rbegin();
    cout<<*p1;
    p1++;
	for(;p1!=v.rend();p1++)
        cout<<" "<<*p1;
}
int main(){
    std::vector<int> v;
    int num,radix;
    scanf("%d%d",&num,&radix);
    if (num==0)
    {
        v.push_back(0);
    }
    while(num!=0){
    	v.push_back(num%radix);
    	num=num/radix;
    }
    for(int i=0,j=v.size()-1;i<=j;i++,j--)
    {
        cout<<v[i]<<" ";
    	if(v.at(i)!=v.at(j))
        {
            printf("No\n");
            printall(v);
            return 0;
        }    
    }
    printf("Yes\n");
    printall(v);
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    string s;
    int n,n1,n2,n3,inwidth,tmpn2;
    cin>>s;
    n=s.size();
    n1=(n+2)/3;
    n2=n1+(n+2)%3;
    
    
    for(int i=0;i<n1-1;i++)
    {
        inwidth=n2-2;
        cout<<s[i];
        while(inwidth--)
            cout<<" ";
        cout<<s[n-1-i]<<"\n";
    }
    cout<<s.substr(n1-1,n2);
    return 0;
}

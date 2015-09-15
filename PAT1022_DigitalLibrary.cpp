#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>
using namespace std;
vector<map<string,vector<string> > > maps(6);
int main()
{
    int N;
    cin>>N;
    string s,id,tmp;
    while(N--)
    {
        cin>>id;
        getchar();
        getline(cin,s);
        maps[1][s].push_back(id);
        getline(cin,s);
        maps[2][s].push_back(id);
        getline(cin,s);
        s.append(" ");
        int begin=0,end=s.find(' ',begin);
        while(end!=-1)
        {	
            tmp=s.substr(begin,end-begin);
            maps[3][tmp].push_back(id);
            begin=end+1;
            end=s.find(' ',begin);
        }
        getline(cin,s);
        maps[4][s].push_back(id);
        getline(cin,s);
        maps[5][s].push_back(id);
    }
    int M;
    cin>>M;
    getchar();
    while(M--)
    {

        getline(cin,s);
        cout<<s<<endl;
        int k=s[0]-'0';
        s=s.substr(3);
        if(maps[k].find(s)==maps[k].end())
            cout<<"Not Found"<<endl;
        else
        {
            sort(maps[k][s].begin(),maps[k][s].end());
            for(vector<string>::iterator i=maps[k][s].begin();i!=maps[k][s].end();i++)
                cout<<*i<<endl;
        }
    }

}

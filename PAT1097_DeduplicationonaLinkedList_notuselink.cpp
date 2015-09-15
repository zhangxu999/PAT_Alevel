#include <iostream>
#include <map>
#include <vector>
#include <cstdlib>
#include  <string>
using namespace std;
typedef struct node
{
    string address;
    string nextadd;
    int value;
};
int main()
{
    string startadd;
    int num;
    cin>>startadd>>num;
    map<string,node> Nodes;
    

    for(int i=0;i<num;i++)
    {
        node n;
        string address,nextadd;
        int value;
        cin>>address>>value>>nextadd;
        n.address=address;
        n.value=value;
        n.nextadd=nextadd;
        Nodes[address]=n;
    }
    map<int,int> exist;
	vector<string> left,moved;
	string p=startadd;
    while(p!="-1")
    {
    	if(exist.find(abs(Nodes[p].value))==exist.end())
    	{
    		left.push_back(p);
    		exist[abs(Nodes[p].value)]=1;
    	}
    	else
    	{
    		moved.push_back(p);
    	}
    	p=Nodes[p].nextadd;
    }
   
    for(int i=0;i<left.size();i++)
    {

    	cout<<left[i]<<" "<<(Nodes[left[i]]).value<<" ";
    	if(i==left.size()-1)
    	    cout<<"-1"<<endl;
    	    
    	else
    	    cout<<left[i+1]<<endl;
    }
    for(int i=0;i<moved.size();i++)
    {
    	
    	cout<<moved[i]<<" "<<(Nodes[moved[i]]).value<<" ";
    	if(i==moved.size()-1)
    	    cout<<"-1"<<endl;
    	    
    	else
    	    cout<<moved[i+1]<<endl;
    }
    return 0;
}

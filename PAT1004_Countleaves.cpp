#include <iostream>
#include <vector>
#include <map>
using namespace std;
typedef struct
{
    /* data */
    int id,level;
    vector<int> *child; 
}TreeNode;
TreeNode *nodes[101];
int N,M;
map<int,int> r;
int taggedlevel(int t)
{
   // cout<<"node:"<<t;
    vector<int> Cld=*(nodes[t]->child);
    if(Cld.size()==0)
    {
    //	cout<<"\n";
    	return 0;
    }
        
   // cout<<"  sub: ";
    for(int i=0;i<Cld.size();i++)
    {
        nodes[Cld[i]]->level=nodes[t]->level+1;
    //    cout<<"|"<<Cld[i]<<" "<<nodes[Cld[i]]->level<<"|"<<endl;
        taggedlevel(Cld[i]);
    }
}
int main()
{
	cin>>N>>M;
//	cout<<"N:"<<N<<"  M"<<M<<endl; 
	
	int tmpID,tmpNum;
	for(int i=1;i<N+1;i++)
	{
		//TreeNode tn;
		nodes[i]=new TreeNode;
		//vector<int> v;
		nodes[i]->child=new vector<int>;
	}
	for(int x=0;x<M;x++)
	{
		cin>>tmpID>>tmpNum;
	//	cout<<"tmpID: "<<tmpID<<"  tmpNum:"<<tmpNum<<endl;
		int Cid; 
		for(int j=0;j<tmpNum;j++)
		{
			cin>>Cid;
			(*(nodes[tmpID]->child)).push_back(Cid);
			
		}
	//	cout<<"V:   ";
	/*
		for(int i=0;i<(*(nodes[tmpID]->child)).size();i++)
		{
			cout<<(*(nodes[tmpID]->child))[i]<<" ";
		}
		*/
	//	cout<<"\n";
	};
	nodes[1]->level=0;
    taggedlevel(1);
    for(int i=1;i<N+1;i++)
    {
        map<int,int>::iterator lel=r.find(nodes[i]->level);
        if(lel==r.end())
            r.insert(map<int,int>::value_type(nodes[i]->level,0));
        //vector<int> mm=*(nodes[i]->child);
		if((*(nodes[i]->child)).size()==0)
            (r.find(nodes[i]->level))->second++;
    }
    bool flag=true;
    for(map<int,int>::iterator p=r.begin();p!=r.end();p++)
    {
    	if(flag)
    	{ 
        cout<<p->second;
        flag=false; 
        } 
        else
            cout<<" "<<p->second;
    }

	
}

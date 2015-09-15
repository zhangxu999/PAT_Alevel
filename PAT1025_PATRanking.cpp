//算法主要使用了桶排序的。
//利用map容器内元素自动排序的特性，减轻了排序的负担。但数据的存储结构略微复杂了一点。
#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
//<score,<id,area>>
map<int,map<string,int> > S;

int main()
{
    //pls(palaces 记录地点数目);total，记录学生数目;
    int pls,total=0;
    cin>>pls;
    //base 用于localrank计算。结构为<area,<score,the number of students who have the score> >
    vector<map<int,int> > base(pls);
    for(int i=0;i<pls;i++)
    {
        int stuNums;
        cin>>stuNums;
        total+=stuNums;
        while(stuNums>0)
        {
            string id;
			int score;
            cin>>id>>score;
        //判断local中是否存在此分数，如果不存在，记有此分数的人数为1，否则将人数加1
            if(base[i].find(score)==base[i].end())
                base[i][score]=1;
            else
                base[i][score]++;
            //记录所属area.
            S[score][id]=i+1;
        //    cout<<" .. "<<base[i][score];
        //    cout<<"  SS"<<S[score][id]<<"  "<<endl;
            stuNums--;
        }
    }
    
    for(int j=pls-1;j>=0;j--)
    {
        map<int,int>::reverse_iterator i=base[j].rbegin();
        int lr=0,pre=0;//lr记录前面已经有了多少人，pre起暂存作用。
        for(;i!=base[j].rend();i++)
        {xc
        	pre+=i->second;
            (i->second)=lr+1;
            lr=pre;
        }
    }
    cout<<total<<endl;
    int rank=0;
    for(map<int,map<string,int> >::reverse_iterator i=S.rbegin();i!=S.rend();i++)
    {
        for(map<string,int>::iterator j=(i->second).begin();j!=(i->second).end();j++)
            cout<<j->first<<" "<<rank+1<<" " <<j->second<<" "<<base[j->second-1][i->first]<<endl;
        rank+=(i->second).size();

    }
}

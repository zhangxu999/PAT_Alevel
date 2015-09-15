#include <iostream>
#include <fstream>
using namespace std;

int main(){
	char ipt[3];
	char max[20];
    char min[20];
    char avg[20];
	while(true)
	{
	
	cout<<"ÇëÊäÈë max,min »òavg:"<<endl;
	cin>>ipt;
    ifstream input;
    input.open("analysis.txt");
    input>>max>>min>>avg;
    switch(ipt[1])
    {
    	case 'a':
    		cout<<max<<"\n";
    		break;
    	case 'i':
    		cout<<min<<"\n";
    		break;
    	case 'v':
    		cout<<avg<<"\n";
    		break;
    	default:
    		cout<<"not found"<<"\n";
    }
    input.close();
    
    }
    return 0;
}

#include <iostream>
#include <fstream>
#include <stack>
using namespace std;
struct node
{
    int val;
    int next;
    /* data */
}a[100005];
int main() {
    ifstream cin("test");
    int start, n, k;
    cin>> start >> n >> k;
    for (int i = 0; i < n; ++i) {
        int curr, val;
        cin >> curr;
        //cout<<curr;
		cin >> a[curr].val;
		//cout<<a[curr];
		cin >> a[curr].next;
		//cout<<next[curr];
    }
    int head=start;
  
    int pre=-1, curr = start, cnt = k, next = a[curr].next;
    while(cnt--) {
        next = a[curr].next;
        a[curr].next = pre;
        pre = curr;
        curr = next;
    }
    a[start].next = next;
    head = pre;
    for(int i=0; i < n; ++i) {
    	if(head >= 0 ) {
    		printf("%05d", head);
    	}
    	else {
        	printf("%d", head);
        }
        printf(" %d ", a[head].val);
        if (a[head].next >= 0 ) {
        	printf("%05d\n", a[head].next);
        }
        else {
        	printf("%d\n", a[head].next);
        }
        head=a[head].next;
    }
    puts("");
    return 0;
}

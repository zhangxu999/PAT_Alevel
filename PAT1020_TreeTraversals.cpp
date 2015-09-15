#include <iostream>
#include <stdio.h>
using namespace std;
typedef struct node
{
    int data;
    struct node *lchild=NULL;
    struct node *rchild=NULL;
}BTNode;
BTNode * CreateBT1(char *pre,char *in,int n)
{
    BTNode *b;
    char *p;
    int k;
    if(n<=0)
        return NULL;
    b=new BTNode();
    b->data=*pre;
    for(p=in;p<in+n;p++)
        if(*p==*pre)
            break;
    k=p-in;
    b->lchild=CreateBT1(pre+1,in,k);
    b->rchild=CreateBT1(pre+k+1,p+1,n-k-1);
    return b;
}
BTNode * CreateBT2(int *post,int *in,int n)
{
    BTNode *b;
    int r,*p;
    int k;
    if(n<=0)
        return NULL;
    b=new BTNode();
    r=*(post+n-1);
    b->data=r;
    for(p=in;p<in+n;p++)
    {
        if(*p==r)
            break;
    }
    k=p-in;
    b->lchild=CreateBT2(post,in,k);
    b->rchild=CreateBT2(post+k,p+1,n-k-1);
    return b;
}
void Preorder(BTNode *b)
{
    if(b!=NULL)
    {
        
        Preorder(b->lchild);
        printf("%c ",b->data);
        Preorder(b->rchild);
    }
}
void levelorder(BTNode *b,int n)
{
    BTNode *p;
    BTNode *qu[n];
    int front,rear;
    bool first=true;
    front=rear=-1;
    rear++;
    qu[rear]=b;
    
    while(front!=rear)
    {
        front=(front+1)%n;
        p=qu[front];
        if (first) 
        {
		    printf("%d", p->data);
		    first=false;
		}
		else
		    printf(" %d", p->data);
        if(p->lchild!=NULL)
        {
            rear=(rear+1)%n;
            qu[rear]=p->lchild;
        }
        if(p->rchild!=NULL)
        {
            rear=(rear+1)%n;
            qu[rear]=p->rchild;
        }
    }
}
int main()
{    
    int n;
    cin>>n;
    int inorder[n];
    int postorder[n];
    for(int i=0;i<n;i++)
    	cin>>postorder[i];
    for(int i=0;i<n;i++)
    	cin>>inorder[i];
   // BTNode *NEWB=CreateBT1(preorder,inorder,13);
    BTNode *NEWB2=CreateBT2(postorder,inorder,n);
    levelorder(NEWB2,n);
    //Preorder(NEWB2);
    return 0;
}

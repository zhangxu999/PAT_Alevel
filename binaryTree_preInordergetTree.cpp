#include <iostream>
#include <stdio.h>
#tydedef Maxsize 13
using namespace std;
typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
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
BTNode * CreateBT2(char *post,char *in,int n)
{
    BTNode *b;
    char r,*p;
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
void levelorder(BTNode *b)
{
    BTNode *p;
    BTNode *qu[Maxsize];
    int front,rear;
    front=rear=-1;
    rear++;
    qu[rear]=b;
    while(front!=rear)
    {
        front=(front+1)%Maxsize;
        p=qu[front];
        printf("%c", p->data);
        if(p->lchild!=NULL)
        {
            rear=(rear+1)%Maxsize;
            qu[rear]=p->lchild;
        }
        if(p->rchild!=NULL)
        {
            rear=(rear+1)%Maxsize;
            qu[rear]=p->rchild;
        }
    }
}
int main()
{
    char preorder[]= "XACED23B9GH85";
    char inorder[]=  "ECA2D3XG9HB58";
    char postorder[]="EC23DAGH958BX";
    BTNode *NEWB=CreateBT1(preorder,inorder,13);
    BTNode *NEWB2=CreateBT2(postorder,inorder,13);
    Preorder(NEWB);
    printf("\n");
    levelorder(NEWB2)
    //Preorder(NEWB2);



}

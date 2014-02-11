#include<iostream.h>
class linkl
{
public:
int data;
linkl *link;
}
main()
{
linkl *f;
int n,temp;
cout<<"enter the number\n";
cin>>n;
temp=n;
linkl *p;
f=NULL;
while(n!=0)
{
p=new linkl();
p->data=n%10;
p->link=f;
f=p;
n=n/10;
}
p=f;
while(p!=NULL)
{
cout<<p->data<<"->";
p=p->link;
}
}
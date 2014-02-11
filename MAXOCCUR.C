#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int n,*a,*b,max,i,p;
a=(int*)malloc(n*sizeof(int));
b=(int*)malloc(n*sizeof(int));
printf("enter the no of elements\n");
scanf("%d",&n);
for(i=0;i<n;i++)
b[i]=0;
printf("enter the numbers\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
b[a[i]]++;
}
max=a[0];
for(i=1;i<n;i++)
if(b[i]>max)
{
max=b[i];
p=i;
}
printf("the element which occured mostly is %d",p);
getch();
}



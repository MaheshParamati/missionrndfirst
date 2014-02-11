#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int *a,*b,*c,m,n,i,j,h,z,l;
float p;
clrscr();
printf("enter the size of first array\n");
scanf("%d",&m);
printf("enter the size of second array\n");
scanf("%d",&n);
z=m+n;
a=(int*)malloc(m*sizeof(int));
b=(int*)malloc(n*sizeof(int));
c=(int*)malloc(z*sizeof(int));
for(i=0;i<m;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
scanf("%d",&b[i]);
h=0;
j=0;
i=0;
while((h<m)&&(j<n))
{
 if(a[h]<b[j])
 {
 c[i]=a[h];
 h=h+1;
 }
 else
 {
 c[i]=b[j];
 j=j+1;
 }
 i=i+1;
}
if(h>=m)
{
while(j<n)
{
c[i]=b[j];
j++;
i++;
}
}
if(j>=n)
{
while(h<m)
{
c[i]=a[h];
h++;
i++;
}
}
for(i=0;i<z;i++)
printf("%d ",c[i]);
l=z/2;
if((z%2)==0)
{
p=((c[l]/2)+(c[l-1])/2);
printf("\nmedian is%f",p);
}
else
printf("\nmedian is %d",c[z/2]);
getch();
}






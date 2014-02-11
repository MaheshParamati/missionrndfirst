#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,c,d,e,f;
float x,y,z;
clrscr();
printf("enter the coordinates\n");
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
x=sqrt((c-a)*(c-a)+(d-b)*(d-b));
printf("side1 %f\n",x);
y=sqrt((c-e)*(c-e)+(d-f)*(d-f));
printf("side2 %f\n",y);
z=sqrt((e-a)*(e-a)+(f-b)*(f-b));
printf("side3 %f\n",z);
if((x+y>z)&&(y+z>x)&&(x+z>y))
{
printf("it forms a triangle\n");
if((x==y)&&(y==z))
printf("eqilateral triangle\n");
else if(x==y||y==z||x==z)
printf("isosceles triangle\n");
else if((x*x+y*y==z*z)||(x*x+z*z==y*y)||(y*y+z*z==x*x))
printf("right angled traingle\n");
else
printf("scalene triangle \n");
}
else
printf("we cannot form a triangle with the given vertices\n");
getch();
}


#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
float s,peri,area;

printf("enter the first side of triangle :");
scanf("%d",&a);
printf("enter the first side of triangle :");
scanf("%d",&b);
printf("enter the first side of triangle :");
scanf("%d",&c);
s=(a+b+c)/2;
peri=a+b+c*a+b+c;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("the perimeter of triangle : %.2f\n ",peri);
printf("the area of triangle : %.2f\n ",area);


return 0;
}



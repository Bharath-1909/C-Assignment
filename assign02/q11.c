#include<stdio.h>
int main()
{
int x,y;
printf("enter the value of X:");
scanf("%d",&x);
printf("enter the value of y:");
scanf("%d",&y);
if(x>0&&y>0)
printf(" point lies in Quadrent 1:\n");
else if(x<0&&y>0)
printf(" point lies in Quadrent 2:\n");
else if(x<0&&y<0)
printf(" point lies in Quadrent 3:\n");
else if(x>0&&y<0)
printf(" point lies in Quadrent 4:\n");
else if(x==0&&y==0)
printf(" point lies at orgin:\n");
else
printf("point line on the axis: \n");
return 0;
}

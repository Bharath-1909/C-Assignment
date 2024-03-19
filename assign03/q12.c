#include<stdio.h>
int main()
{
int base,index,i=1;
printf("enter the base number :");
scanf("%d",&base);
printf("enter the index number :");
scanf("%d",&index);
for(int j=1;j<=index;j++)
{
i*=base;
}
printf("%d\n",i);
return 0;
}


#include<stdio.h>
#include"header.h"
int main()
{
int i,index,base;
printf("enter the number :");
scanf("%d",&i);
printf("enter the base and index:");
scanf("%d%d",&base,&index);
printf("the fact of 5 is :%d \n",fact(i));
printf("power :%d\n",power1(index,base));
}

#include<stdio.h>
int main()
{
int i,num;
printf("enter the num");
scanf("%d",&num);
i=1;
while(i<=num/2)
{
if(num%i==0)
printf("%d\t",i);
i++;
}
return 0;
}










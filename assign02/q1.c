#include<stdio.h>
int main()
{
int n1,n2,ans;
printf("enter the first num");
scanf("%d",&n1);
printf("enter the sec num");
scanf("%d",&n2);
if(n2==0)
printf("you can't division by Zero");
else
{ans=n1/n2;
printf("ans : %d ",ans);
}return 0;
}



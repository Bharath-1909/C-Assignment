#include<stdio.h>
int main()
{
int n1=0,n2=1,n;
printf("enter the no of terms you want to printf");
scanf("%d",&n);
if(n==1)
printf("%d\n",n1);
else 
{
printf("%-4d",n1);
printf("%-4d",n2);
for(int j=0;j<=n-3;j++)
{
int temp=n1+n2;
n1=n2;
n2=temp;
printf("%-4d",temp);

}
}
printf("\n");
return 0;
}



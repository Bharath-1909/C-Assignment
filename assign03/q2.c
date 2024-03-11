#include<stdio.h>
int main()
{
int n,i;
printf("enter the number that  you want to print the table");
scanf("%d",&n);
i=1;
while(i<11)
{

printf("%d*%d=%d\n",n,i,n*i);
i++;

}


return 0;
}

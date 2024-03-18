#include<stdio.h>
int main()
{
int i;
printf("entre the number u want to print the table: ");
scanf("%d",&i);
for(int j=1;j<=10;j++)
{
printf("%d*%d=%d \n",i,j,i*j);
}
return 0;
}


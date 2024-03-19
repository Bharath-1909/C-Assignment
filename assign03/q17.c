#include<stdio.h>
int main()
{
int row,coloum;
printf("enter the number of rows");
scanf("%d",&row);
printf("enter the number of coloum");
scanf("%d",&coloum);
for(int i=0;i<row;i++)
{ 
 for(int j=0;j<coloum;j++)
 {
 	printf(" * ");
 }
 printf("\n");
} 
}

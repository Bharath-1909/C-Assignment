#include<stdio.h>
int sum(int marks[ ],int len);
int avg(int marks[ ],int len);
int main()
{
int marks[5],i;
char c;
do
{
printf("enter the 5 subjects marks : \n");
for(int i=0;i<=4;i++)
scanf("%d",&marks[i]);


printf("what do you want to calculate 1.total 2.average : \n");
scanf("%d",&i);
switch(i)
{
case 1:printf("the sum of array :%d\n",sum(marks,5));
	break;
case 2:printf("the average of array :%d\n",avg(marks,5));
	break;
default :printf("enter the valid num\n");

}
printf("do you want to contiune? y/n");
scanf("%*c%c",&c);
}while(c!='n');

return 0;
}
int sum(int arr[ ],int length)
{
	int i=0;
	for(int j=0;j<length;j++)
	{
	i=i+arr[j];
	}
return i;
}

int avg(int arr[],int length)
{
	int i=0;
	for(int j=0;j<length;j++)
	{
	i=i+arr[j];
	}
   return i/length;




}






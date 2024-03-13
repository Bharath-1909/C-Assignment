#include<stdio.h>
int swap(int*,int*);
int main()
{
int num1,num2,res;
printf("enter num1 and num2 :");
scanf("%d %d",&num1,&num2);
swap(&num1,&num2);
printf("the num1 and num2 are: %d %d \n",num1,num2);
return 0;
}
int swap(int* x ,int* y)
{
int temp;
 temp= *x;
 *x=*y;
 *y=temp;
 return 0;
 }



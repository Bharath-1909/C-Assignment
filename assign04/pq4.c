#include<stdio.h>
int cal(int,int,int*);
int main()
{
int num1,num2,diff,sum;
printf("enter the num1 &num2 :");
scanf("%d%d",&num1,&num2);
sum=cal(num1,num2,&diff);
printf("the sum and diff: %d %d\n",sum,diff);
return 0;
}

int cal(int num1,int num2, int* diff)
{  int sum;
	sum=num1+num2;
	*diff=num1-num2;
return sum;
}

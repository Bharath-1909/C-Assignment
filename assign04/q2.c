#include<stdio.h>
int power(long int,long int);

int main()
{
long int n1,n2,res;
printf("enter the number");
scanf("%ld",&n1);
printf("enter the power of the number");
scanf("%ld",&n2);
res=power(n1,n2);
printf("the %ld times of given number is %ld : %ld",n2,n1,res);
return 0;
} 
 int power(long int n1,long int n2)
 {
 long int res=1;
 while(n2!=0)
 {
 res*=n1;
 n2--;
 }
 return res;

}

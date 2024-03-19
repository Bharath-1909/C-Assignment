#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
int Random_number,upper=1000,lower=1;
srand(time(NULL));

Random_number=(rand()%(upper-lower+1))+lower;

int count=0,gussed_number,flag=0;
while(count<10&&flag==0)
{
printf("enter the gussed number :");
scanf("%d",&gussed_number);
if(gussed_number==Random_number)
{
printf("Congrats! you won\n");
flag=1;
}
else if(gussed_number>Random_number)
printf("* * left * *\n");
else if(gussed_number<Random_number)
printf("* *right* *\n");
count++;
}

printf("%d\n",Random_number);
return 0;


}





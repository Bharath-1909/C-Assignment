#include<stdio.h>
int main()
{
int month,year;
    printf("Enter the month : ");
    scanf("%d",&month);
    printf("Enter the year : ");
    scanf("%d",&year);
   if((year%100!=0&&year%4==0)||year%400==0)
   {
   printf("the given year is a leap year\n");
   switch(month)
   {
   case 1:printf("31 days");
         break;
   case 2:printf("29 days");
         break;
   case 3:printf("31 days");
         break;
   case 4:printf("30 days");
         break;
   case 5:printf("31 days");
         break;
   case 6:printf("30 days");
         break;
   case 7:printf("31 days");
         break;
   case 8:printf("31 days");
         break;
   case 9:printf("30 days");
         break;
   case 10:printf("31 days");
         break;
   case 11:printf("30 days");
         break;
   case 12:printf("31 days");
         break;
   }
   }
else
   {
   printf("the given year is not a  leap year\n");
   switch(month)
   {
   case 1:printf("31 days");
         break;
   case 2:printf("28 days");
         break;
   case 3:printf("31 days");
         break;
   case 4:printf("30 days");
         break;
   case 5:printf("31 days");
         break;
   case 6:printf("30 days");
         break;
   case 7:printf("31 days");
         break;
   case 8:printf("31 days");
         break;
   case 9:printf("30 days");
         break;
   case 10:printf("31 days");
         break;
   case 11:printf("30 days");
         break;
   case 12:printf("31 days");
         break;
   }
   }
   return 0;
}

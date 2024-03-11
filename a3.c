#include<stdio.h>
int main()
{
int s1,s2,s3,s4,s5;
float t;
printf("enter the subject 1 marks");
scanf("%d",&s1);
printf("enter the subject 2 marks");
scanf("%d",&s2);
printf("enter the subject 3 marks");
scanf("%d",&s3);
printf("enter the subject 4 marks");
scanf("%d",&s4);
printf("enter the subject 5 marks");
scanf("%d",&s5);
if(s1>20 || s2>20 || s3>20|| s4>20|| s5>20)
{
printf("enter the user to reenter the marks");
}
t=(s1+s2+s3+s4+s5);

if(t>=90){
printf("grade:Ex");
}
else if (90>t && t >=80)
{
printf("grade : A");
}

else if (80>t&&t>=70)
{
printf("grade : B");
}
else if (70>t&&t>=60)
{
printf("grade : c");
}
else
{
printf("grade : F");
}
}

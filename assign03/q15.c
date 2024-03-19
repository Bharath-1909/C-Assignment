#include<stdio.h>
int main()
{
	int opd1,opd2;
	char opr;
	do
	{
		printf("enter the operand1,operand2 :");
		scanf("%d",&opd1);
		scanf("%d",&opd2);
	//	printf("what operation you want to perform +:add,-:sub,*:mul,/:div,E:exit   ");
		printf("enter what opr you want to perform ");
		scanf("%*c%c",&opr);
		switch(opr)
		{
			case '+':printf("%d\n",opd1+opd2);
					 break;
			case '-':printf("%d\n",opd1-opd2);
					 break;
			case '*':printf("%d\n",opd1*opd2);
					 break;
			case '/':if(opd2==0)
					printf("operand 2 cannot be zero");
					else
					printf("%d\n",opd1/opd2);
					 break;
			case 'E':
					 break;
			defualt :
					 printf("valid operator\n");
		}
	}while(opr!='E');

	return 0;
}




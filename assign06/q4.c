#include<stdio.h>
int main()
{
	char str[30] ="i am student of desd";
	char substr[5]="emt";
	printf("%s\n",&str);
	int z=0,i=0,j;
	for(;substr[i]!='\0';i++)
	{
		//substr[i];
		for(j=0;str[j]!='\0';j++)
		{
			if(str[j]==substr[i])
			{
				for(z=j;str[z]!='\0';z++)
				{
					str[z]=str[z+1];
				}
			}
		}
	}
	printf("%s\n",str);
}

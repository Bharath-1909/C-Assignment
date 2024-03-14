#include<stdio.h>
#include"header.h"

int *linear_search(int arr[],int len);

int main()
{
int arr[6];
unsigned int *res;
accept_array(arr,6);
print_array(arr,6);
printf("address of array :%lu\n",arr);
res=linear_search(arr,6);
printf("the address of the element is:%lu \n",res);

}

int *linear_search(int arr[],int len)
{
	int element;
	printf("enter the element  :");
	scanf("%d",&element);
	for(int i=0;i<len;i++)
	{
	if(arr[i]==element)
	{
	return arr+i;
	}
	}
return NULL;
}





	

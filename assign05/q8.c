#include<stdio.h>
#include"header.h"

int linear_search(int arr[],int len);

int main()
{
int arr[6],res;
accept_array(arr,6);
print_array(arr,6);

res=linear_search(arr,6);
printf("the index of the element is:%d \n",res);

}

int linear_search(int arr[],int len)
{
	int element;
	printf("enter the element  :");
	scanf("%d",&element);
	for(int i=0;i<len;i++)
	{
	if(arr[i]==element)
	{
	return i;
	}
	}
return -1;
}





	

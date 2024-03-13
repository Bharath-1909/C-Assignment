#include<stdio.h>
#include"header.h"
int maxi_ele(int arr[],int len);
int main()
{
int arr[6];
accept_array(arr,6);
print_array(arr,6);

maxi_ele(arr,6);

printf("the maxi element is :%d\n",maxi_ele(arr,6)); 

}

int  maxi_ele(int arr[],int len)
{
	int max=0;
	for(int i=0;i<len;i++)
	{
		if(max<arr[i])
		max=arr[i];
	}
return max;
}






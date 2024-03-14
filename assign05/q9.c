#include<stdio.h>
#include"header.h"
#include"sorted.h"
int binary_search(int arr[],int len);
int main()
{
int arr[6],res;
accept_array(arr,6);
print_array(arr,6);
selection_sort(arr,6);
res=binary_search(arr,6);
printf("the index of the element : %d \n",res);

}

int binary_search(int arr[],int len)
{
	int s=0,e=len,mid,key;
	printf("enter the elemnet to be searched");
	scanf("%d",&key);

	for(int i=0;i<len;i++)
	 { 
	 	mid=(e+s)/2;
	 if(arr[mid]>key)
	 {
	 	e=mid;
		}
	else if(arr[mid]<key)
	{
		s=mid;
	}
	else if(arr[mid]==key)
	return mid;
	}
return -1;
}


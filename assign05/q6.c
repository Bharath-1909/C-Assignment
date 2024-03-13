#include<stdio.h>
#include"header.h"
void dup_array(int arr[],int len);
int main()
{
int arr[6];
accept_array(arr,6);
print_array(arr,6);

dup_array(arr,6);
print_array(arr,6);

}

void dup_array(int arr[],int len)
{
	int i,j,count=0;
	for(i=0;i<len-1;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(arr[i]==arr[j])	
			{
			count++;
			for(j;j<len;j++)
			{		
			arr[j]=arr[j+1];
			 arr[len-1]=0;
			//len--;
			 }
			 }

		}
	}

/*while(count!=0)
{
j=len-1;
arr[j]=0;
count--;
j--;
//return 0;
}*/

//len=len-count;
}

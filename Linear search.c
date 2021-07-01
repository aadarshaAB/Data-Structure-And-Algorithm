#include<stdio.h>
int main()
{
	int a[50],n,i,key,flag=0;
	printf("\nEnter vlue of n:");
	scanf("%d",&n);
	printf("\nEnter elements in array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter search key:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			flag++;
			break;
		}
		else
		{
			flag=0;
		}
	}
	if(flag==1)
	{
		printf("\nThe search is successful");
		printf("\nThe %d key searched for is in position %d",key,i+1);
	}
	else
	{
		printf("\nSorry! search is Unsuccessful");	
	}
}

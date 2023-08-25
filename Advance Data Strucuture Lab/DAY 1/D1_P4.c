#include<stdio.h>
int main()
{
	int arr[30],i,j,n,k,temp;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the elements of the array \n");
	for(k=0;k<n;k++)
	{
			scanf("%d",&arr[k]);
	}
	for(i=0;i<n;i++)
	{
		for(j = i + 1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("The numbers in the order are: \n");
	for(i=0;i<n;i++)
	{
		printf("%d \n",arr[i]);}
	
	return 0;
	
}

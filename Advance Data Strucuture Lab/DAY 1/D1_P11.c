#include<stdio.h>
int main()
	{
		int arr[100], i,j,k,n;
		printf("Enter the size of the array \n");
		scanf("%d",&n);
		printf("Enter the elements of the array \n");
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=i + 1;j<n;j++)
			{
				if(arr[i]==arr[j])
				{
					printf("Duplicate number = %d \n",arr[j]);
				}
			}
		}
		return 0;
	}

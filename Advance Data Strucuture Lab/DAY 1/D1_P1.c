#include<stdio.h>
int main()
{
	int arr[100],i,j,n;
	printf("Enter the size of the array: \n");
	scanf("%d",&n);
	printf("Enter elements in the array: \n");
	for(i = 0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Elements in the array are:\n");
	for(j=0;j<n;j++)
	{
		printf("%d \n",arr[j]);
	}
	return 0;
}

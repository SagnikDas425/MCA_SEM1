#include<stdio.h>
int main()
{
	int arr[100],i,j,n,s=0;
	printf("Enter size of array \n");
	scanf("%d",&n);
	printf("Enter elements in the array \n");
	for(i = 0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		s = s + arr[i];
	}
	printf("Sum of the array is = % d",s);
	return 0;
}

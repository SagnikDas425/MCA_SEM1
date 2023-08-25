#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,i,n,n2;
	printf("Enter the size of array \n");
	scanf("%d",&n);
	ptr = (int*) calloc(n,sizeof(int));
	if(ptr==NULL)
	{
		printf("Memory not allocated");
	}
	else
	{
	printf("Enter the elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("Enter a number to be searched");
	scanf("%d",&n2);
	for(i=0;i<n;i++)
	{
		if(n2==ptr[i])
		{
			printf("Element found at %d position",*(ptr+i));
		}
	}
	
}
return 0;
}
	

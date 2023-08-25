#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,i,n;
	printf("Enter n number of elements \n");
	scanf("%d",&n);
	ptr = (int*)malloc(n * sizeof(int));
	if(ptr==NULL)
	{
		printf("Memory cannot be allocated");
	}
	else
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",(ptr+i));
		}
		printf("Elements are \n");
		for(i=0;i<n;i++)
		{
			printf("%d \n",*(ptr+i));
		}
	}
	return 0;
}

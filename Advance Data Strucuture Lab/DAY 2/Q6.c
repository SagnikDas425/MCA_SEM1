#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,i,n,n2;
	printf("Enter the size \n");
	scanf("%d",&n);
	ptr = (int*) malloc(n * sizeof(int));
	for(i=0;i<n;i++)
	{
	printf("%pc \n",ptr+i);
	}
	printf("Enter the size for allocating new memory\n");
	scanf("%d",&n2);
		ptr = realloc(ptr, n2);	
		for(i=0;i<n2;i++)
		{
		printf("%pc \n",ptr+i);
		}
	return 0;
	}
	


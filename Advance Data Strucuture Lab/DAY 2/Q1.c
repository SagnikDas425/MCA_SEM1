#include<stdio.h>
#include<stdlib.h>
int main()
	{
		int arr[10][10],a,b,i,r,j,c,co=0;
		printf("Enter the no of rows of a matrix\n");
		scanf("%d",&r);
		printf("Enter the no of columns of a matrix\n");
		scanf("%d",&c);
		printf("Enter Element of Matrix1 \n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				scanf("%d",&arr[i][j]);
			}
		}
		printf("Elements are:\n");
		
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					printf("%d\t",arr[i][j]);
				}
			}
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(arr[i][j]==0)
				{
					co++;
				}
			}
		}
		if(co>((r*c)/2))
		{
			printf("Sparse Matrix");
		}
		else
		{
			printf("Not a sparse matrix");
		}
		return 0;
	}

#include<stdio.h>
int main()
{
	int n,i,j,c=0,s=0,m;
	printf("Enter a number ");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			c = 0;
			for(j=2;j<=i/2;j++)
			{
				if(i%j==0)
				{
					c=1;
					break;
				}
			}
		if(c==0)
		{
			printf("%d is a prime factor \n",i);
		}
	}
	}
	return 0;
}

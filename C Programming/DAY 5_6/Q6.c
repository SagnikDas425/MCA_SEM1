#include<stdio.h>
int main()
{
	int n,i,j,c=0,s=0,m;
	printf("Enter a number ");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		c=0;
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
			s = s + i;		
		}		
	}
	printf("Sum = %d",s);
	return 0;
}

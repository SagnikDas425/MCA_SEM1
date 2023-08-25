#include <stdio.h>
int main()
{
	int i,c=0,n,j;
	printf("Enter range upto n");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++)
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
		if(c == 0)
		{
			printf("%d \n",i);
		}
	}
	return 0;
}

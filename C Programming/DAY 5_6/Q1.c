#include<stdio.h>
int main()
{
	int i,n,p;
	int k = 1;
	printf("Enter the number ");
	scanf("%d",&n);
	printf("Enter power of the number");
	scanf("%d",&p);
	for(i = 1;i<=p;i++)
	{
		k = k * n;		
	}
	printf("Power of the number = %d",k);
	return 0;
}


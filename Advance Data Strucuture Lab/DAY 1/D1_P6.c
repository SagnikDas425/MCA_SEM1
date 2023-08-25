#include<stdio.h>
int main()
{
	int a = 0, b = 1,c,i;
	printf("Fibonacci Series");
	printf(" \n%d \n%d",a,b);
	for(i=2;i<10;i++)
	{
		c = a + b;
		printf("\n%d",c);
		a = b;
		b = c;
		
	}
	
	return 0;
}

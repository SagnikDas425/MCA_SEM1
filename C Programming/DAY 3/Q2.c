/* Write a C program to check whether a no is odd or even */
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number \n");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("%d is an even no.",n);
	}
	else
	{
		printf("%d is an odd no.",n);
	}
	return 0;
}

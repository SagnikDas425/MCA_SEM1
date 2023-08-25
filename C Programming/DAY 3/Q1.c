/* Write a C program to display a number if it is negative or positive */
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number \n");
	scanf("%d",&n);
	if(n>0)
	{
		printf("%d is a positive number",n);
	}
	else if(n==0)
	{
		printf("%d is neither positive nor negative number",n);
	}
	else
	{
		printf("%d is a negative number",n);
	}
	return 0;
}

/*Write a C program to calculate the sum of first n natural numbers*/
#include<stdio.h>
int main()
{
	int n,i,s=0;
	printf("Enter upto n terms\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
			s = s + i;	
		}
	printf("Sum of natural numbers = %d",s);
	return 0;
}

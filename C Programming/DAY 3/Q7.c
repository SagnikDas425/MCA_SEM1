/*Write a C program to enter the multiplication table of a given integer */
#include<stdio.h>
int main()
{
	int d,i,n;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("Multiplication table of %d\n",n);
	for(i=0;i<=12;i++)
	{
		d = n * i;
		printf("%d * %d = % d \n",n,i,d);
	}
	return 0;
}

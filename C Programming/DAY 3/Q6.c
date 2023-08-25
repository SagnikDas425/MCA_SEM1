/*Write a C program to add numbers until the user enters 0*/
#include<stdio.h>
int main()
{
	int n,s=0;
	while(n!=0)
	{
		printf("Enter the number:\n");
		scanf("%d",&n);
		s = s + n;	
	}
	printf("You entered 0 , Hence Sum = %d",s);
	return 0;
}

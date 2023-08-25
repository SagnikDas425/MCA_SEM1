/* Write a C program to relate two integer no.s using =,>,< */
#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Enter two numbers \n");
	scanf("%d %d",&n1,&n2);
	if(n1==n2)
	{
		printf("The numbers are equal");
	}
	else if(n1>n2)
	{
		printf("%d is greater than %d",n1,n2);
	}
	else
	{
		printf("%d is smaller than %d",n1,n2);
	}
	return 0;
}

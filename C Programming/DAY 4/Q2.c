/*Eligibiity for voting*/
#include<stdio.h>
int main()
{
	int age;
	printf("Enter the age for voting\n");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("You are eligible for voting");
	}
	else
	{
		printf("You are not eligible for voting");
	}
	return 0;
}

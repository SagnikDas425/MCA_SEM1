/*A C program to check whether a character is alphabet or not*/
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a alphabet:");
	scanf(" %c",&ch);
	if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
	{
		printf("%c is an alphabet",ch);
	}
	else
	{
		printf("%c is not an alphabet",ch);
	}
	return 0;
}

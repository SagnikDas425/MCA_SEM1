#include<stdio.h>
int main()
{
	char ch[100];
	int l,i,flag;
	printf("Enter a string:\n");
	scanf("%s",&ch);
	l = strlen(ch);
	for(i=0;i<l;i++)
	{
		if(ch[i] != ch[l - i - 1])
		{
			flag = 0;
			break;
		}
	}
	if(flag == 1)
	{
		printf("Its a palindrome");
	}
	else
	{
		printf("Its not a palindrome");
	}
	return 0;
	
}

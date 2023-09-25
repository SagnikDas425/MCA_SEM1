/*Program to find largest no among 3 no.s*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("%d is the largest",a);
	}
	else if(b>c&&b>a)
	{
		printf("%d is the largest",b);
	}
	else
	{
		printf("%d is the largest",c);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int m,n,i,hcf=1,lcm=1;
	printf("Enter two numbers ");
	scanf("%d %d",&m,&n);
	for(i=1;i<n;i++)
	{
		if(m%i==0 && n%i==0)
		{
			hcf = i;
		}
	}
	lcm = (m*n)/hcf;
	printf("LCM of the number = %d",lcm);
	return 0;
}
	

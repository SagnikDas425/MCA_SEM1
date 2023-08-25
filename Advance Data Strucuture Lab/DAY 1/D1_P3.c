#include<stdio.h>
int main()
{	int c;
	double f;
	printf("Enter degree in centigrade: ");
	scanf("%d",&c);
	f = (c*1.8)+32;
	printf("Temperature in farenheit = %lf",f);
	return 0;
}

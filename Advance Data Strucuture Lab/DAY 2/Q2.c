#include<stdio.h>
void callbyvalue(int x)
{
	x = x * 2;

printf("Printing the modified value of the first array element in the called function = %d \n", x);
}
int main()
{
	int n,a[n],i;
	printf("Enter the size of the array \n");
	scanf("%d",&n);
	printf("Enter array elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	callbyvalue(a[0]);
	printf("Printing the first array element in the original calling function = %d \n", a[0]);
	return 0;
}

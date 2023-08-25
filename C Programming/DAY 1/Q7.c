#include <stdio.h>
int main()
{
	int arr[30],total=0;
	float percent;
	int i;
	printf("Enter marks of 5 subjects obtained by the student\n");
	for(i = 0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		total = total + arr[i];
	}
	printf("Total marks obtained by the student is = %d", total);
	percent = total/500.0 * 100;
	printf("\nPercentage of the student is  = %f",percent);
	return 0;
}
	

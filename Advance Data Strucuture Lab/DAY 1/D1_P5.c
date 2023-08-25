#include<stdio.h>
int main()
	{
	int arr[100],i,n,k,max1,max2;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the elements of the array \n");
	for(k=0;k<n;k++)
		{
			scanf("%d",&arr[k]);
		}
	max1=max2=arr[0];
    for(i=0;i<n;i++)
    	{   
		   if(max1<arr[i])
		    {
			max2=max1;
		    max1=arr[i];
			}
			else if(arr[i]<max1 && arr[i]>max2)
			{
				max2=arr[i];
			}
    	}
          printf("Largest number of the array = %d \n",max1);
          printf("Second Largest number of the array = %d ",max2);
   		  return 0;
	}

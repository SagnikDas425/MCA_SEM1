#include <stdio.h>
int main()
{ 
	int i,j,k,m,n,x,y;
    int A[i][j],B[i][j],C[i][j] ;
    printf("Enter the no. of rows in 1st matrix\n");
    scanf("%d",&m);
    printf("Enter the no. of columns in 1st matrix\n");
    scanf("%d",&n);
    printf("Enter the no. of rows in 2nd matrix\n");
    scanf("%d",&x);
    printf("Enter the no. of columns in 2nd matrix\n");
    scanf("%d",&y);
    if(n!= x)
        {
           	printf("Matrix multplication not possible");
		}
	else{
	printf("Enter first matrix\n");
    {
	for(i=0;i<m;i++)
        {
		for(j=0;j<n;j++)
           {
		   scanf("%d",&A[i][j]);
		   }
		}
	}
 printf("Enter second matrix\n");
    {
		for(i=0;i<x;i++)
    	{
        	for(j=0;j<y;j++)
        	{
           scanf("%d",&B[i][j]);
        	}
    	}
	}
		for(i=0;i<m;i++) 
    	{
        	for(j=0;j<y;j++)
        		{
            	C[i][j]=0;
            	for(k=0;k<y;k++)
            	{
               		C[i][j]=A[i][j]*B[i][j]+C[i][j];
            	}
        	}
    	}
	
        printf("the result is \n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<y;j++)
                printf("%d \n",C[i][j]);
                printf("\n");
        }
        return 0;
    
}
}


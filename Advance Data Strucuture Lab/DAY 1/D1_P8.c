#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, j, r, c, count = 0;
 
    printf("Enter no. of rows and columns \n");
    scanf("%d %d", &i, &j);
 	if(i!=j)
    {
        printf("Non-Symmetric matrix");
        exit(0);
    }
    int a[i][j], b[i][j];
 printf("\nEnter the Matrix Elements \n");
    for(r = 0; r < i; r++)
    {
        for(c = 0;c < j;c++)
        {
            scanf("%d", &a[r][c]);
        }
    }
    for(r = 0; r < i; r++)
    {
        for(c = 0;c < j; c++)
        {
            b[c][r] = a[r][c];
        }
    }
    for(r = 0; r < i; r++)
    {
        for(c = 0; c < j; c++)
        {
            if(a[r][c] != b[r][c])
            {
                count++;
                break;
            }
        }
    }
    if(count == 0)
    {
        printf("\nThis is a Symmetric Matrix ");
    }
    else
    {
        printf("\nThis is not a Symmetric Matrix ");
    }
 
    return 0;
}

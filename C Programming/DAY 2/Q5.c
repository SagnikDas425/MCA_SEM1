#include <stdio.h>
int main()
{
    long num, n;
    int i, ld;
    int f[10];
	printf("Enter a number: \n");
    scanf("%ld", &num);
    for(i=0; i<10; i++)
    {
        f[i] = 0;
    }
    n = num; 
    while(n != 0)
    {
     
        ld = n % 10;

      
        n /= 10;

      
        f[ld]++;
    }
    printf("frequency of each digit in %ld is: \n", num);
    for(i=0; i<10; i++)
    {
        printf("frequency of %d = %d\n", i, f[i]);
    }
    return 0;
}

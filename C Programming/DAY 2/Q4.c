#include <stdio.h>
#include <math.h>
 
int main()
{
  	int n, fd, c, ld, a, b, temp;
 
  	printf("Enter a number \n");
  	scanf("%d", & n);
  	
  	c = log10(n); 	
  	fd = n / pow(10, c);
  	
  	ld = n % 10;
  	
  	a = fd * (pow(10, c));
  	b = n % a;
  	n = b / 10;
  	
  	temp = ld * (pow(10, c)) + (n * 10 + fd);
	    
	printf("After Swapping First and Last Digit =  %d", temp);
 
  	return 0;
}

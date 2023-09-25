#include <stdio.h>
#include <math.h>
int main() {
   int n, m, d,c=0,temp;
   int s = 0;
   printf("Enter an integer: ");
   scanf("%d", &n);
   temp = m = n;
   while(n!=0)
   {
   	c++;
   	n=n/10;
   }
   for(temp=m;m!=0;m=m/10)
   {
   	d = m % 10;
   	s = s + pow(d,c);
   }
   if(s==temp)
   {
   	printf("Armstrong no.");
   }
   else
   {
   	printf("Not Armsrong no.");
   }
   return 0;
}

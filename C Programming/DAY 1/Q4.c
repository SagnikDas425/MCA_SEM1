#include <stdio.h>

    int main()
    {
    	int km,b = 0;
    	double c, d;
    	printf("Enter distance travelled in kilometers:\n");
    	scanf("%d",&km);
    	b = km * 1000;//meters
    	c = km * 3280.84;//feet
    	d = km * 39370.1;//inches
    	printf("Distance in meters = %d\n",b);
    	printf("Distance in feet = %lf\n",c);
    	printf("Distance in inches = %lf\n",d);
    	return 0;
    }
    	
    	

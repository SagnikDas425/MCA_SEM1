#include <stdio.h>

    int main()
    {
		float sal,da,hra,gross;
    	printf("Enter Ramesh's basic salary \n");
    	scanf("%f", &sal);
    	da = sal * 0.4;
    	hra = sal * 0.2;
    	gross = da + hra + sal;
    	printf("Gross Salary of Ramesh = %f ", gross);
    	return 0;
    }
    	

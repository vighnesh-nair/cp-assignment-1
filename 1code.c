/* to calculate the simple interest*/

#include<stdio.h>

void main()
	{
  
		float interest,principal,rate,time;

		printf("\n Enter the Principal amount, interest rate, and time in years:" );
		scanf("%f%f%f", &principal, &rate, &time);

		interest=principal*rate*time;

		printf("\n The calculated Simple Interest for the entered details = %f", interest);
    
	}

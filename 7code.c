/* to find HCF of a given number */

#include<stdio.h>

void main()
	{
		int n1,n2,hcf;

		printf("\n Enter two integers: ");
		scanf(" %d%d", &n1, &n2);

		for(int =1;i<=n1 || i<=n2;i++)
			{
				if(n1%i==0 && n2%i==0)
					hcf=i;
			}

		printf("\n HCF= %d", hcf);

	}

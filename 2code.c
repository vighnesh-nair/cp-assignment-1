/* to find out the roots of a quadratic equation*/

#include<stdio.h>
#include<math.h>

void main()
	{
		float a,b,c,disc,root1,root2,realp,imagp;
		//disc-> discriminant, realp-> real part, imagp-> imaginary part
		
		printf("\n Enter co-efficients a,b and c: ");
		scanf("%f%f%f", &a, &b, &c);

		disc=b*b-4*a*c;

		//condition for real and distinct roots
		
    if(disc>0)
			{
				root1=(-b+sqrt(disc))/(2*a);
				root2=(-b-sqrt(disc))/(2*a);

				printf(" Root 1=%.2f and Root 2= %.2f ", root1, root2);
			}

		//condition for real and equal roots
		else if(disc==0)
			{
				root1=root2=-b/(2*a);

				printf("/n Root 1 = Root 2 = %.2f", root1);
			}


		//if roots are not real
		else
			{
				realp=-b/(2*a);
				imagp=sqrt(-disc)/(2*a);

				printf(" Root 1 = %.2f+%.2fi and Root 2 = %.2f-%.2fi", realp, imagp, realp, imagp);
			}

	}

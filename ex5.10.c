/* Program for exercise 5.10*/
/* It needs to round input values using expression y = floor(x + .5) */

#include <stdio.h>
#include <math.h>

main()
{
	double x;
	
	printf ("%s\n" , "Enter value");
	scanf ("%lf" , &x);
	
	printf ("Original: %.2lf \tRounded: %.2lf\n" , x , floor(x + .5));
	
	
} // End of main
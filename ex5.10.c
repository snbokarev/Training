/* Program for exercise 5.10*/
/* It needs to round input values using expression y = floor(x + .5) */

#include <stdio.h>
#include <math.h>

main()
{
	double x;
	
	printf ("%s\n" , "Enter value");
	scanf ("%lf" , &x);
	
	while (x != -1) {	
	
   	printf ("Original: %.2lf \tRounded: %.2lf\n\n" , x , floor(x + .5));
   	
   	printf ("%s\n" , "Enter value");
	   scanf ("%lf" , &x);
	   
	} // End of while
	
} // End of main
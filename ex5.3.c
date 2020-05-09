/* Program for exercise 5.3 */
/* It needs to output math functions */

#include <stdio.h>
#include <math.h>

main() {
	float x , y;
	printf ("%s\n" , "Enter argument x");
	scanf ("%f" , &x);
	printf ("%s\n" , "Enter argument y");
	scanf ("%f" , &y);
	
	
	printf ("sqrt(x) = %.2f\n" , sqrt(x));
	printf ("exp(x) = %.2f\n" , exp(x));
	printf ("ln(x) = %.2f\n" , log(x));
	printf ("log10(x) = %.2f\n" , log10(x));
	printf ("fabs(x) = %.2f\n" , fabs(x));
	printf ("ceil(x) = %.2f\n" , ceil (x));
	printf ("floor(x) = %.2f\n" , floor(x));
	printf ("pow(x , y) = %.2f\n" , pow(x,y));
	printf ("fmod(x , y) = %.2f\n" , fmod (x , y));
	printf ("sin(x) = %.2f\n" , sin (x));
	printf ("cos(x) = %.2f\n" , cos (x));
	printf ("tan(x) = %.2f\n" , tan (x));
	
	
} // End of main
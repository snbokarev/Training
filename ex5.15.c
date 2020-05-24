/* Program for exercise 5.15 */
/* It needs to calculate hypotenuse using function */

#include <stdio.h>
#include <math.h>

double hypotenuse (double,double);  // Prototype

main () 
{
	double side1 , side2;
	
	for (int i = 1; i <=3; ++i)
	{
   	printf ("%s\n" , "Enter first side of triangle");
   	scanf ("%lf" , &side1);
   	printf ("%s\n" , "Enter second side of triangle");
   	scanf ("%lf" , &side2);
	   printf ("The hypotenuse is: %.1lf\n" ,hypotenuse(side1 , side2));
	} // End of for
	
	return 0;
} // End of main

double hypotenuse (double a,double b) // definition
{
	return sqrt(a*a + b*b);
}
/* Program for exercise 5.37 */

/* It needs to create exponential function using recursion */

#include <stdio.h>

int power (int , int); // prototype of power

main ()
{
	int userBase , userExp;

	printf ("%s\n" , "Enter base and exponent");
	scanf ("%d%d" , &userBase , &userExp);
	
	printf ("The result of exponentiation of %d to %d is %d\n" , userBase , userExp , power (userBase , userExp));
	
	return 0;
	
} // End of main

int power (int base , int exp)
{
	if (exp == 0)
	   return 1;
	else
	   return base * power (base , exp - 1);
	
} // End of power
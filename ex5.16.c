/* Program for 5.16 */
/* It needs to create function calculating power */

#include <stdio.h>

int integerPower(int, unsigned int); // Prototype

main () 
{
	int base;
	unsigned int exp;
	
	printf ("%s\n" , "Enter base");
	scanf ("%d" , &base);
	printf ("%s\n" , "Enter exponent");
	scanf ("%d" , &exp);
	
	printf ("The power is: %d\n" , integerPower(base , exp));
	
	return 0;
} // End of main

int integerPower(int x, unsigned int y) // definition
{
	int result = 1;
	for (int i = 1; i <= y; ++i)
	{
		result *= x;
	}
	return result;
} // End of definition

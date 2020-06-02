/* Program for exercise 5.25 */
/* Find minimum of 3 float numbers */

#include <stdio.h>

float min(float , float , float); // Prototype

main ()
{
	
	float val1 , val2 , val3;
	printf ("%s\n" , "Enter 3 float values.");
	scanf ("%f%f%f" , &val1 , &val2 , &val3);
	
	printf ("The minimum is: %.3f\n" , min (val1 , val2 , val3));
	
	return 0;
	
} // End of main

float min(float x, float y , float z)
{
	float m;
	m = x;
	if (y <= x)
	   m = y;
	if (z <= x && z <= y)
	   m = z;
	 
	return m;
	
	
} // End of min

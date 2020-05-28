/* Program for exercise 5.19 */
/* It needs to create function which draws quadrate */

#include <stdio.h>

void quad (int); // Prototype

main() 
{
	int side;
	printf ("%s\n" , "Enter the quadrate side size");
	scanf ("%d" , side);
	
	printf ("%s\n" , "The quadrate is:");
	quad(side);
	
	
} // End of main

void quad (int x)
{
	for (int i = 1; i <= x; ++i)
	   for (int j = 1; j <= x; ++j)
	      {
		      if (j == x)
		         printf ("%s\n" , "*");
		      else
		         printf ("%s" , "*");
       	} // end of  for
} // End of definition for quad
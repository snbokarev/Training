/* Program for exercise 5.20 */
/* It needs to create function which draws quadrate using entered symbol */

#include <stdio.h>

void quad (char , int); // Prototype

main() 
{
	int side;
	char symbol;
	
	printf ("%s\n" , "Enter the symbol to fill");
	scanf ("%c" , &symbol);
	printf ("%s\n" , "Enter the quadrate side size");
	scanf ("%d" , &side);
	
	printf ("%s\n" , "The quadrate is:");
	
	quad(symbol , side);
	
	return 0;
} // End of main

void quad (char fillChar , int x)
{
	for (int i = 1; i <= x; ++i)
	   for (int j = 1; j <= x; ++j)
	      {
		      if (j == x)
		         printf ("%c\n" , fillChar);
		      else
		         printf ("%c" , fillChar);
       	} // end of  for
} // End of definition for quad
/* Program for exercise 5.21 */
/* It needs to create functions which draws figures using entered symbol */

#include <stdio.h>

void quad (char , int); // Prototype
void quadBorder (char , int); 

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
	puts(" ");
	
	printf ("%s\n" , "The quadrate border is:");
	quadBorder(symbol , side);
	puts(" ");
	
	
	
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

void quadBorder (char fillChar , int x)
{
	for (int i = 1; i <= x; ++i)
	   for (int j = 1; j <= x; ++j)
	      {
	      	if (i == 1 || i == x)
	      	{
	      		if (j == x)
		             printf ("%c\n" , fillChar);
		          else
		             printf ("%c" , fillChar);
	      	} // end of if i=1 or i=x
	      	if (i > 1 && i < x)
	      	{
	      		if (j == x)
		             printf ("%c\n" , fillChar);
	      		else
	      		   if (j == 1)
	      		      printf ("%c" , fillChar);
	      		   else
	      		      printf ("%s" , " ");
	      	} // end of if 1<i<x		      
       	} // end of  for
} // End of definition for quadBorder




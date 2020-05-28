/* Program for exercise 5.18 */
/* It needs to create function which determines if the number is even */

#include <stdio.h>

int even (int); // Prototype

main()
{
	int val = 1;
	while (val != -1)
	{
		printf ("%s\n" , "Enter integer value.");
		scanf ("%d" , &val);
		
		while (val == 0)
		{
			printf ("%s\n\n" , "Zero. Enter again.");
			scanf ("%d" , &val);
		} // End of while to ensure non-zero value
		   
		if (val == -1)
		   printf ("%s\n" , "Exiting...");
		else {
			if (even(val) == 1)
			   printf ("The number %d is even.\n\n" , val);
			else
			   printf ("The number %d is odd.\n\n" , val);
		} // End of if else
	} // End of while
	
} // End of main

int even (int x) // Definition of even
{
	if ( x % 2 == 0)
	   return 1;
	else
	   return 0;
} // End of definition of even


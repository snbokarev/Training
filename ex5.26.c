/* Program for 5.26 */
/* It needs to create function which determines if the number is perfect */

#include <stdio.h>

int perfect (int); // Prototype

main () 
{
	int sum , max = 100;

	for (int i = 1; i <= max; ++i)
	{
		sum = 0;
		printf ("%d" , i);
		for (int j = 1; j < i; ++j)
		{
			if (i % j == 0)
			   sum += j;
		} // end of for j
		if (sum == i)
		   printf ("%s\n" , " is perfect");
		else
		   printf ("%s\n" , " is not perfect");
		
	} // end of for i
	
	
} // End of main
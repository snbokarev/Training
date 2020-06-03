/* Program for 5.26 */
/* It needs to create function which determines if the number is perfect */

#include <stdio.h>

int perfect (int); // Prototype

main () 
{
	int max;
	
	printf ("%s\n" , "Enter maximum value");
	scanf ("%d" , &max);

	for (int i = 1; i <= max; ++i)
	{
		if (perfect(i) == 1) {
		   printf ("%d is perfect number. Dividers are: " , i);	
		   for (int k = 1; k < i; ++k)
		   {
		   	if (i % k == 0)
		   	   printf ("%d " , k);  	
		   } // end of for k
		puts ("");
		} // end of if
	} // end of for i
	
	printf ("%s\n" , "Done!");
	
	return 0;
} // End of main


int perfect (int val) // Definition of perfect
{
	int sum = 0;
	for (int j = 1; j < val; ++j)
		{
			if (val % j == 0)
			   sum += j;
		} // end of for j
	if (sum == val)
	   return 1;
	else
	   return 0;
	
} // End of perfect
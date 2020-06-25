/* Program for 5.31 */
/* It needs to simulate coin flipping */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flip (void); // Prototype

main ()
{
	int heads = 0, tails = 0;
	
	printf ("%10s%10s\n" , "Attempt" , "Result");
	
	srand (time(NULL));
	
	for (int i = 1; i <= 100 ; ++i)
	{
		
		if (flip() == 0)
		{
			printf ("%10d%10s\n" , i , "Tails");
			tails += 1;
		} else {
			printf ("%10d%10s\n" , i , "Heads");
			heads += 1;	
		} // end of if else
		
	} // end of for
	
	printf ("Heads total: %d\nTails total: %d\n" , heads , tails);
	
	return 0;
	
} // End of main

int flip (void)
{
	return rand()%2;
} // End of flip
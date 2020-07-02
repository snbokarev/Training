/* Program for exercise 5.35 */
/* It needs to generate random number between 1 and 1000 and to let user guess the number */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main ()
{
	int number , userNumber , attempt = 1;
	
	srand (time(NULL));
	
	number = 1 + rand() % 1000;
	
	printf ("%s\n" , "I thought up the number in range between 1 and 1000, try to guess it");
	scanf ("%d" , &userNumber);
	
	while (userNumber != number)
	{
		if (userNumber > number)
		   printf ("%s\n" , "Too much. Try farther.");
		else
		   printf ("%s\n" , "Too few. Try farther.");
		
		scanf ("%d" , &userNumber);
		++attempt;
	} // end of while user number is not equal number
	
	printf ("Great! You have guessed it after %d attempts.\n" , attempt);
	
	
	
	return 0;
	
} // End of main
/* Program for exercise 5.32 */
/* It needs to create multiplication table training program. Generate 2 positive 1-bit numbers, ask user for the multiplication result and verify the entered value with the correct one */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main ()
{
	int val1 , val2 , userResult;
	int flag = 1;
	
	srand(time(NULL));
	
	while (flag == 1)
	{
		val1 = 1 + rand() % 9;
		val2 = 1 + rand() % 9;
		
		printf ("The result of multiplication %d and %d is:\n" , val1 , val2);
		scanf("%d" , &userResult);
		
		while (userResult != val1*val2)
		{
			printf ("%s\n" , "Incorrect, try again");
			printf ("The result of multiplication %d and %d is:\n" , val1 , val2);
	    	scanf("%d" , &userResult);
		}
		
		printf ("%s\n" , "Correct! Want to try again? Enter 1 to try again or 0 to quit");
		scanf ("%d" , &flag);
	} // end of while flag=1
	
	puts ("Finishing program");
	
	return 0;
	
} // End of main
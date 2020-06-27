/* Program for exercise 5.32 */
/* It needs to create multiplication table training program. Generate 2 positive 1-bit numbers, ask user for the multiplication result and verify the entered value with the correct one */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main ()
{
	int val1 , val2 , userResult , answer;
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
			answer = 1 + rand() % 4;
			switch (answer)
			{
				case 1:
				printf ("%s\n" , "Incorrect, try again");
				break;
				
				case 2:
				printf ("%s\n" , "Oops, on more time please");
				break;
				
				case 3:
				printf ("%s\n" , "That's wrong");
				break;
				
				case 4:
				printf ("%s\n" , "Nope, try again");
				break;
				
			} // end of switch
			
			printf ("The result of multiplication %d and %d is:\n" , val1 , val2);
	    	scanf("%d" , &userResult);
		} // end of while incorrect user result
		
		answer = 1 + rand() % 4;
			switch (answer)
			{
				case 1:
				printf ("%s\n" , "Correct!");
				break;
				
				case 2:
				printf ("%s\n" , "Perfect!");
				break;
				
				case 3:
				printf ("%s\n" , "That's right.");
				break;
				
				case 4:
				printf ("%s\n" , "Good job!");
				break;
				
			} // end of switch
		
		printf ("%s\n" , "Want to try again? Enter 1 to try again or 0 to quit");
		scanf ("%d" , &flag);
	} // end of while flag=1
	
	puts ("Finishing program");
	
	return 0;
	
} // End of main
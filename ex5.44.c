/* Program for exercise 5.44 */
/* It needs to create multiplication table training program. Generate 2 positive 1-bit numbers, ask user for the multiplication result and verify the entered value with the correct one. It needs to take 10 inputs and calculate percentage of correct answers (description from 5.34 */
/* Now it needs to select bitness and type of operation */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int powInt(int, int); // Standard pow works strange with integers, creating our own function

main ()
{
	int val1 , val2 , userResult , answer,  incorrect = 0, total = 0;
	int bitness;
	
	printf("%s\n", "Enter the bitness you want to try:");
	scanf("%d", &bitness);
	
	srand(time(NULL));
	
	while (total != 10)
	{
		//Generating random values according to bitness. For 1 bit values it generates from 1 to 9, for 2 bit - from 1 to 99 etc.
		val1 = 1 + rand() % (powInt(10, bitness) - 1);
		val2 = 1 + rand() % (powInt(10, bitness) - 1);
		
		printf ("The result of multiplication %d and %d is:\n" , val1 , val2);
		scanf("%d" , &userResult);
		
		if (userResult != val1*val2)
		{
			++incorrect;
			++total;
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
			
		}  else {// end of if incorrect user result
		
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
			
			++total;
			
		} // end of else - correct result		
		
		
	} // end of while total != 10
	
	if (100 * (total - incorrect)/total < 75)
	{
		printf ("You have to train more, just %d%% of answers are correct\n" , 100 * (total - incorrect)/total);
	} else {
		printf ("You passed the test, %d%% answers are correct\n" , 100 * (total - incorrect)/total);
	};
	
	puts ("Finishing program");
	
	return 0;
	
} // End of main

int powInt(int base, int power)
{
	for (int i = 1; i < power; i++) {
		base *= base;
	} // end of for
	
	return base;
	
} // End of powInt
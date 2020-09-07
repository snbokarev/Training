/* Program for exercise 5.44 */
/* It needs to create multiplication table training program. Generate 2 positive 1-bit numbers, ask user for the multiplication result and verify the entered value with the correct one. It needs to take 10 inputs and calculate percentage of correct answers (description from 5.34 */
/* Now it needs to select bitness and type of operation */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int powInt(int, int); // Standard pow works strange with integers, creating our own function

void answer(int); // Prints random answer for correct and wrong user inputs

double roundToTenth(double ); // Round to tens, using it for option 4 - Division

main ()
{
	int val1, val2, userResult, incorrect = 0, total = 0;
	int bitness, option, optionActive;
	
	double userResult_float, compResult_float;
	
	printf("%s\n", "Enter the bitness you want to try:");
	scanf("%d", &bitness);
	printf("%s\n", "Enter the operation you want to try:");
	printf("%s\n%s\n", "1 - Addition", "2 - Substraction");
	printf("%s\n%s\n", "3 - Multiplication", "4 - Division");
	printf("%s\n", "5 - Misc");
	
	scanf("%d", &option);
	
	// Checking incorrect input
	while (option < 1 || option > 5) {
		printf("%s\n", "Incorrect input, try again");
		scanf("%d", &option);
	} // end of while
	
	srand(time(NULL));
	
	while (total != 10)
	{
		//Generating random values according to bitness. For 1 bit values it generates from 1 to 9, for 2 bit - from 1 to 99 etc.
		val1 = 1 + rand() % (powInt(10, bitness) - 1);
		val2 = 1 + rand() % (powInt(10, bitness) - 1);
		
		if (option > 0 && option < 5) 
			// Options 1 - 4
			optionActive = option;	
		else 
		    // 5 - Mics
		    optionActive = 1 + rand() % 4;
		    
		    switch(optionActive) {
		    	
		        case 1: // Addition 	
		        printf ("The result of addition %d and %d is:\n" , val1 , val2);
		        scanf("%d" , &userResult);	
	        	if (userResult != val1 + val2)
	        	{
		        	++incorrect;
	 	       	++total;
		        	answer(0);
	 	       	// end of if incorrect user result
	         	}  else {
	 	        // correct user result
		        	++total;
	 	       	answer(1);		
		         } // end of else - correct result
	         	break; // end of case 1: Addition
	         	
	         	case 2: // Substraction
		        printf ("The result of substraction %d and %d is:\n" , val1 , val2);
		        scanf("%d" , &userResult);	
	        	if (userResult != val1 - val2)
	        	{
		        	++incorrect;
	 	       	++total;
		        	answer(0);
	 	       	// end of if incorrect user result
	         	}  else {
	 	        // correct user result
		        	++total;
	 	       	answer(1);		
		         } // end of else - correct result
	         	break; // end of case 2: Subsraction
	         	
	         	case 3: // Multiplication
		        printf ("The result of multiplication %d and %d is:\n" , val1 , val2);
		        scanf("%d" , &userResult);	
	        	if (userResult != val1*val2)
	        	{
		        	++incorrect;
	 	       	++total;
		        	answer(0);
	 	       	// end of if incorrect user result
	         	}  else {
	 	        // correct user result
		        	++total;
	 	       	answer(1);		
		         } // end of else - correct result
	         	break; // end of case 3: Multiplication
	         	
	         	case 4: // Division
		        printf ("The result of division %d and %d is (answer in x.x format):\n" , val1 , val2);
		        scanf("%lf" , &userResult_float);
		        compResult_float = roundToTenth((double)val1 / val2);
	        	if (!(fabs(userResult_float - compResult_float) < 0.0000000001))
	        	{
		        	++incorrect;
	 	       	++total;
		        	answer(0);
	 	       	// end of if incorrect user result
	         	}  else {
	 	        // correct user result
		        	++total;
	 	       	answer(1);		
		         } // end of else - correct result
	         	break; // end of case 4: Division		
		
		    } // end of switch optionActive
		    
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

void answer(int res)
{
	int ans;
	if (res == 0) // incorrect user result
		{
			ans = 1 + rand() % 4;
			switch (ans)
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
		
		// correct user result
		ans = 1 + rand() % 4;
			switch (ans)
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
		} // end of correct user result
	
} // End of answer

double roundToTenth(double arg)
{
	return floor(arg*10+ .5)/10;
} // End of roundToTenth
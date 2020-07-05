/* Program for exercise 5.36 */
/* It needs to generate random number between 1 and 1000 and to let user guess the number, it needs to count attempts and print phrase according to result */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main ()
{
	int number , userNumber , attempt = 1;
	int roboNumber , roboAttempt = 1;
	int left = 0, right = 1024;
	
	srand (time(NULL));
	
	number = 1 + rand() % 1000;
	
	printf ("%s\n" , "I thought up the number between 1 and 1000, try to guess it");
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
	
	if (attempt <= 10)	
   	printf ("Great! You have guessed it after %d attempts.\n" , attempt);
    else
       printf ("Good, but you could take less than %d attempts.\n" , attempt);
       
    // Let's create algorithm to find the number
       
    roboNumber = (right - left) / 2;
       
    while (roboNumber != number)
    {
    	if (roboNumber > number)
    	{
    	   right = roboNumber;
    	   roboNumber -= (right - left) / 2;
    	} 
        else
    	if (roboNumber < number)
    	{
    	   left = roboNumber;
           roboNumber += (right - left) / 2;
    	}
    	
    	++roboAttempt;
    	
    } // end of while robonumber is not equal number
    
    printf ("Machine have guessed the value %d after %d attempts.\n" , roboNumber , roboAttempt);
	
	
	return 0;
	
} // End of main
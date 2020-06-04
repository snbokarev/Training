/* Program for exercise 5.27 */
/* Function to check if the number is simple */

#include <stdio.h>
#include <math.h>

int isSimple (int); // Prototype

main () 
{
	int max;
	
	printf ("%s\n" , "Enter maximum value");
	scanf ("%d" , &max);

    printf ("\n%s\n" ,"The prime numbers are: ");
    
    if (max >= 2)
       printf ("%d\n" , 2);
    else
       printf ("%s\n" , "None");

	for (int j = 1; j <= max; j +=2)
	{
		if (isSimple(j) == 1)
		   printf ("%d\n" , j);
		
	} // end of for
	
} // End of main

int isSimple (int val)
{
	int s = 0;
	
	for (int i = 1; i <= val/2; ++i)
//	for (int i = 1; i < val; ++i)
//	for (int i = 1; i <= sqrt(i); ++i)
	{
		if (val % i == 0)
		   s += 1;
	} // end of for
	if (s == 1)
	   return 1;
	else
	   return 0;
	   
	
} // End of isSimple
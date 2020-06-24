/* Program for 5.30 */
/* It needs to create function returning proper notes according to points */

#include <stdio.h>

int qualityPoints (int); //Prototype

main()
{
	int points;
	
	printf ("%s\n" , "Enter points value (0 - 100");
	scanf ("%d" , &points);
	
	while (points < 0 || points > 100)
	{
		printf ("%s\n" , "Enter points value (0 - 100)");
	    scanf ("%d" , &points);
	} // end of while
	
	printf ("The grade is: %d\n" , qualityPoints(points));
	
	
	return 0;
	
} // End of main

int qualityPoints (int x)
{
	if (x >= 90 && x <= 100)
	   return 3;
	else
	   if (x >= 80 && x <= 89)
	      return 2;
	   else
	      if (x >= 70 && x <= 79)
	         return 1;
	      else
	         return 0;
	
} // End of definition
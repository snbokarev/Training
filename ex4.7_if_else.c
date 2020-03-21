/* Program for 4.7 with switch */
/* It needs to calculate letter grades */

#include <stdio.h>

int main () {
	int grade = 0;
	int aCount = 0 , bCount = 0 , cCount = 0 , dCount = 0 , eCount = 0 , fCount = 0;
	
	printf("%s\n" , "Enter the letter grades. ");
	printf ("%s\n" , "Enter EOF to end input. ");
	
	while (grade != '1') {
		scanf ("%1s" , &grade);
		if (grade  != '1')   {
		
	   	if (grade == 'A' || grade == 'a')
	   	   ++aCount;
		   else
   	   	if (grade == 'B' || grade == 'b')
	   	      ++bCount;
		      else
	         	if (grade == 'C' || grade == 'c')
   	      	   ++cCount;
		         else
   	         	if (grade == 'D' || grade == 'd')
	         	       ++dCount;
	         	   else
               		if (grade == 'E' || grade == 'e')
		                  ++eCount;
		               else
	                  	if (grade == 'F' || grade == 'f')
   		                  ++fCount;
   		               else {
   		                   printf ("%s\n" , "Incorrect input.");
	                          printf ("%s\n" , "Enter again.");
	                       }
   		                  
		} // End of if check for 1
		
	} // End of while
	
	printf ("\n%s\n" , "Totals for each grade letters are: ");
	printf ("A: %d\n" , aCount);
	printf ("B: %d\n" , bCount);
	printf ("C: %d\n" , cCount);
	printf ("D: %d\n" , dCount);
	printf ("E: %d\n" , eCount);
	printf ("F: %d\n" , fCount);
	
	return 0;
	
} // End of main
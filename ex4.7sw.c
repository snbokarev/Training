/* Program for 4.7 with switch */
/* It needs to calculate letter grades */

#include <stdio.h>

int main () {
	int grade = 0;
	int aCount = 0 , bCount = 0 , cCount = 0 , dCount = 0 , eCount = 0 , fCount = 0;
	
	printf("%s\n" , "Enter the letter grades. ");
	printf ("%s\n" , "Enter EOF to end input. ");
	
	
	while (grade != '1') {
		scanf ("%c" , &grade);
		switch (grade) {
		   
		   case '1':
		      break;
		   
		   case 'A': case 'a':
		      ++aCount;
		      break;
		      
		   case 'B': case 'b':
		      ++bCount;
		      break;
		      
		   case 'C': case 'c':
		      ++cCount;
		      break;
		      
		   case 'D': case 'd':
		      ++dCount;
		      break;
		      
		   case 'E': case 'e':
		      ++eCount;
		      break;
		      
		   case 'F': case 'f':
		      ++fCount;
		      break;
		    
		   case '\n': case  ' ':
		      break;
		      
		   default:
		      printf ("%s\n" , "Incorrect input.");
		      printf ("%s\n" , "Enter again.");
		      break;
			
		} // End of switch
		
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
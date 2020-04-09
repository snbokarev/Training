/* Program for 4.7 with switch */
/* It needs to calculate letter grades */

#include <stdio.h>

int main () {
	int grade = 0;
	int aCount = 0 , bCount = 0 , cCount = 0 , dCount = 0 , eCount = 0 , fCount = 0;
	
	printf("%s\n" , "Enter the letter grades. ");
	printf ("%s\n" , "Enter EOF to end input. ");
	
		
	while (grade != '1') {
		//printf("%s\n" , "Enter the letter grades. ");
	 //   printf ("%s\n" , "Enter EOF to end input. ");
		
		scanf (" %c" , &grade);
		printf ("YOU entered %c\n" , grade);
		
		if (grade == 'A' || grade == 'a' || grade == 'B' || grade == 'b' || grade == 'C' || grade == 'c' || grade == 'D' || grade == 'd' || grade == 'E' || grade == 'e' || grade == 'F' || grade == 'f') { //Check for grades
		
		switch (grade) { 
		   case 'A': case 'a':
		      ++aCount;
		}   
		switch (grade) {
		   case 'B': case 'b':
		      ++bCount;
		}
		     
	    switch (grade) {
		   case 'C': case 'c':
		      ++cCount;
	    }
		
		 switch (grade) { 
		   case 'D': case 'd':
		      ++dCount;
		 }
		 
		 switch (grade) {
		   case 'E': case 'e':
		      ++eCount;
		 }
		 
		 switch (grade) {
		   case 'F': case 'f':
		      ++fCount;
		 }
		 
		} else {
			if (grade == '1') {
			 switch (grade)  {
				case '1':
				//printf ("%d\n" , grade);
				printf ("%s\n" , "Exiting...");
	 		}
    		} else {
    		  printf (" VALUE IS %d\n" , grade);
    		  printf ("%s\n" , "Incorrect input.");
		      printf ("%s\n" , "Enter again.");
    		}
	}	
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
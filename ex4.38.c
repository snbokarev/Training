/* Program for 4.38 */

/* It needs just to check what the statement do */

#include <stdio.h>

int i , j , k;

int main () {
	for (i = 1 ; i <= 5 ; ++i) { // For 1
		for (j = 1 ; j <= 3 ; ++j) {// For 2
			for (k = 1 ; k <= 4 ; ++k) // For 3
			   printf ("*"); // End of For 3
			printf ("\n");
			
		} // End of for 2
		
		printf ("\n");
	}// End of for 1
	
   return 0;	
} // End of main
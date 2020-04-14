/* Program from figure 5.3 */

/* It need to calculate squares of numbers from 1 till 10*/

#include <stdio.h>

int square(int); // Declare prototype


int main () { // Main function

   for (int i = 1; i <= 10 ; i++) {
   	printf (" %d\n" , square (i));
   } // End of for
   
   return 0;
		
} // End of main

/* Definition of function */
int square (int y) {
	return y*y;
	
} // End of square
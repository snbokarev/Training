/* Program for 4.7 */

#include <stdio.h>

int main () {
	// block a
	for (int i = 1; i <= 7 ; i++) {
		if (i == 7)
	       printf ("%d \n" , i );
	    else
	       printf ("%d, " , i);
	} // End of for
	
	// block b
	for (int i = 3; i <= 23; i += 5) {
		if (i == 23)
	       printf ("%d \n" , i );
	    else
	       printf ("%d, " , i);
	} // End of for
	
	// block c
	for (int i = 20; i >= -10; i -= 6) {
		if (i == -10)
	       printf ("%d \n" , i );
	    else
	       printf ("%d, " , i);
	} // End of for
	
	// block d
	for (int i = 19; i <= 51; i += 8) {
		if (i == 51)
	       printf ("%d \n" , i );
	    else
	       printf ("%d, " , i);
	} // End of for
	
	
	
} // End of main
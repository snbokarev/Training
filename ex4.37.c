/* Program for 4.37 */

/* It needs to replace break with standard structure */

#include <stdio.h>

int main () {
	
	int x , y;
	
	for (x = 1 ; x <= 10 ; ++x) {
		if (x == 5)
		   break;
		printf ("%d" , x);		
	} // End of for
	
	printf ("\nThe loop is broken at %d\n" , x);
	
	for (x = 1 ; x <= 10 ; x++) {
		if (x != 5)
	   	printf ("%d" , x);
	    else {
	       y = x;
	       x = 11;	       
		}		
	} // End of for
	
	printf ("\nThe loop is broken at %d\n" , y);
	
	
	
	return 0;
	
} // End of main
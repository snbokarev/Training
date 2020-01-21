/* Program for 4.3.d */
/* It needs to output numbers from 1 to 20 by 5 per row */

#include <stdio.h>

int main () {
	int x;
	
	// Block 1
	x = 1;
	while ( x <= 20 ) {
		printf ("%d" , x );
		if ( x % 5 == 0 ) {
			printf ("\n");
		} else {
			printf ("\t");
		}		
		x++;	
	} // End of while
	
	// End of block1
	
	printf ("\n\n");
	
	// Block2
	x = 0;
	while (++x <= 20) {
	   if ( x % 5  == 0) 
	      printf ("%d\n" , x);
	      else
	      printf ("%d\t" , x);		
	}
	// End of block2
	
	printf ("\n\n");
	
	//Block3
	x = 1;
	while (x <= 20 ) {
		if ( x % 5  == 0 ) 
		   printf ( "%d\n" , x++ );
		else
		   printf ("%d\t" , x++ );
	} // End of while
	// End of block3
	
} // End of main
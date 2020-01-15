/* Program for 4.3.a */
/* It needs to sum all even numbers between 1 and 99 using "for" operator */

#include <stdio.h>

int main () {
	
	int sum = 0;
	
	for (int i = 1 ; i <= 99 ; ++i) {
		if ( i % 2 == 0 ) {
			
			sum += i;
		   //printf ("%d\n" , i);	
		}
	
	}  // End of for
	
	printf ("Sum of even numbers is: %d\n" , sum);
		
	
	
} // End of main
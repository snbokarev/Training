/* The program for the exercise 5.40 */
/* Lets solve the Hanoi task iteratively */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main () {
	/* Lets try to solve it using the cheat: 1-3, 1-2 , 2-3 for odd numbers of disks and 1-3, 1-2, 2-3 for even numbers of disks */
	
	int q, steps, step = 0;
	printf ("%s\n" , "Enter numbers of disks");
	scanf ( "%d" , &q);
	
	steps = pow(2, q) - 1;
	
	if (q%2 != 0) {
		
		for (int i = 1; i <= steps ; i+=3) {
			printf ("Step %d: %s\n" , ++step, "Move from 1 to 3");
			
			if (i < steps) {
				printf ("Step %d: %s\n" , ++step, "Move from 1 to 2");
				printf ("Step %d: %s\n" , ++step, "Move from 2 to 3");
				
			} // end of if
			  
			
		}
		
		
		
	} // end of if
	
	
	
	
} // End of main
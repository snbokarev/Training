/* Program for exercise 3.26 */

/* Output string in cycle to get a table */

#include <stdio.h>
int main () {
	int i = 0;
	while (i <= 15 ) {
		if ( i == 0 ) 
		printf ("A\tA+2\tA+4\tA+6\n");
		else
		printf ("%d\t%d\t%d\t%d\n" , i , i+2 , i+4 , i+6);
		i+=3;
		
	} // End of While
	
	

   return 0;	
	
} // End of main
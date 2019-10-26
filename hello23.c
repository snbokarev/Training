/* Program for exercise 3.19 */

/* It needs to obtain sales value and calculate
employee's salary */
#include <stdio.h>


int main () {
	
	float sales ;
	
	printf ("Enter sales value ( -1 to quit )\n") ;
	scanf ("%f" , &sales);
	
	if ( sales >= 0 )  {
	
	   while ( sales >= 0 ) {
	   	sales=sales * 0.09 + 200;
	   	printf ("\nEmployee's salary is: %.2f\n\n" , sales);
	   	puts ("Enter sales value ( -1 to quit )") ;
	       scanf ("%f" , &sales);
		
	   } // End of while
		
		
 	} //  End of if
	 else
	 puts ("No values");
	 
	 puts ("Program is over");
	
} // End of main
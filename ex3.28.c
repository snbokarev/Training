/* Program for exercise 3.28 */

/* It needs to check input values until correct enter */

#include <stdio.h>

int main () {
	int res , st = 1, ps = 0 , fl = 0;
	
	while (st <= 10 ) {
	   printf ("Enter result for %d student\n" , st);
	   scanf ("%d" , &res);
	   
	      if (res != 1 || res != 2) {
	         while ( res != 1 || res != 2) {
	            printf ("Wrong input! Use 1 or 2 numbers. Enter result for %d student\n" , st);
	            scanf ("%d" , &res);    		      	
	         } // End of while	
	      } // End if
	   
	   if ( res == 1 )
	      ps += 1;
	   else
	      fl += 1;
	      
	   st += 1;
	   	
		
		
		
	} // End of While
	
	printf ("Passes: %d\n" , ps);
	printf ("Failures: %d\n" , fl);
	
	
	
	
   return 0;	
} // End of Main
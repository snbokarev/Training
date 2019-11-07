/* Program for exercise 3.38 */

/* It needs to output 100 stars, one by one, 10 per row */

#include <stdio.h>
int main () {
   int count = 1;
   
   while ( count <= 100) { // While
      if ( count % 10 == 0 )
         printf  ("\n");
      else
         printf ("*");
      ++count;
   	
   	
   } // End of while
   
	
	
	
	
   return 0;	
} // End of Main
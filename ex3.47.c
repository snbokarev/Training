/* Program for exercise 3.47 */

/* It needs to calculate factorial of positive integer value */

#include <stdio.h>

int main () {
   int val , fact = 1, n;
   
   printf ("Enter your value\n");
   scanf ("%d" , &val);
   
   // Check if the value is correct
   while ( val < 0 ) {
      printf ("It needs positive value. Enter your value\n");
      scanf ("%d" , &val); 	
   	
   } // End of while
	
   if (val == 0) {
      printf ("Factorial is: 1\n");
      printf ("");
   }
   else   {
      n = val;	
      while ( n > 0 )   { // While 2
      	fact *= n;
      	e = e
      	--n;    	
      } // End of While 2
      printf ("Factorial is: %d\n", fact);
   	
   } // End of if
    
	
	
	
} // End of main
/* Program for exercise 3.47 */

/* It needs to calculate factorial of positive integer value */

#include <stdio.h>

int main () {
   int val , fact = 1, n;
   float e = 1;
   
   printf ("Enter your value\n");
   scanf ("%d" , &val);
   
   // Check if the value is correct
   while ( val < 0 ) {
      printf ("It needs positive value. Enter your value\n");
      scanf ("%d" , &val); 	
   	
   } // End of while
	
   if (val == 0) {
      printf ("Factorial is: 1\n");
    }
   else   {
      n = val;	
      while ( n > 0 )   { // While 3
        while ( n > 0 )   { // While 2
         	fact *= n;
         	--n;    	
          } // End of While 2
         printf ("Factorial is: %d\n", fact);
         e += (double) 1/fact;
         --val;
         n = val;
         fact = 1;
        } // End of While 3
        
        printf ("E is %.4f\n" , e);
        
   } // End of if
    
	
	
	
} // End of main
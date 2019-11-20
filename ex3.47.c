/* Program for exercise 3.47 */

/* It needs to calculate factorial of positive integer value */

#include <stdio.h>

int main () {
   int val , val2 , fact = 1, k, n, p, x = 1;
   float e = 1, epow = 1;
   
   printf ("Enter your value\n");
   scanf ("%d" , &val);
   
    printf ("Enter power of e\n");
    scanf ("%d" , &val2);
   
   // Check if the value is correct
   while ( val < 0 ) {
      printf ("It needs positive value. Enter your value\n");
      scanf ("%d" , &val); 	
   	
   } // End of while
	
   if (val == 0) {
      printf ("Factorial is: 1\n");
    }
   else   {
      k = val;
      n = k;	
      p = val2;
      while ( n > 0 )   { // While 3
        while ( n > 0 )   { // While 2
         	fact *= n;
         	x *= p;
         	--n;    	
          } // End of While 2
         printf ("Factorial is: %d\n", fact); // DEBUG
         printf ("%d power of %d is: %d\n" , k, val2, x);
         e += (double) 1/fact;
         epow += (double) x/fact;
         --k;
         n = k;
         fact = 1;
         x = 1;
        } // End of While 3
        
        printf ("\nE is %.9f\n" , e );
        printf ("%d power of E is: %.9f\n" , val2, epow);
        
   } // End of if
    
	
	
	
} // End of main
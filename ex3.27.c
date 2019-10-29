/* Program for exercise 3.27 */

/* Find maximum from 10 vales input */

/* Input value, assign it to largest, use cycle to input values and compare it to largest. If current value is greater than largest, then assign the value to largest. Output largest. */

#include <stdio.h>

int main () {
   int counter , current , init1 , init2 , largest1 , largest2;
   
   puts ("Enter 1 value: ");
   scanf ("%d" , &init1);
   puts ("Enter 2 value: ");
   scanf ("%d" , &init2);
   
   if (init1 > init2) {
      largest1 = init1;
      largest2 = init2;
   }

   if (init1 < init2) {
      largest1 = init2;
      largest2 = init1;
   }   
   else {
      largest1 = init1;
      largest2 = init1;
   }
        
   counter = 3;
   
   while ( counter <= 10 ) {
   	  printf ("Enter %d value: \n" , counter);
   	  scanf ("%d" , &current);
   	                                
      if ( largest1 == largest2 && current < largest1)
         largest2 = current;
      
      if ( current > largest1 ) {
         largest2 = largest1;
         largest1 = current;
      }

      if ( current < largest1 && current > largest2)
         largest2 = current;

   	  ++counter;
   } // End of While

   printf ("\nThe 1st maximum value is: %d" , largest1);
   printf ("\nThe 2nd maximum value is: %d" , largest2);
	
   return 0;
} // End of main
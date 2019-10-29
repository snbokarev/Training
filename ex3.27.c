/* Program for exercise 3.27 */

/* Find maximum from 10 vales input */

/* Input value, assign it to largest, use cycle to input values and compare it to largest. If current value is greater than largest, then addign the value to largest. Output largest. */

#include <stdio.h>

int main () {
   int counter , current , largest1 , largest2;
   
   puts ("Enter 1 value: ");
   scanf ("%d" , &largest1);
   puts ("Enter 2 value: ");
   scanf ("%d" , &largest2);
   counter = 3;
   
   while ( counter <= 10 ) {
   	  printf ("Enter %d value: \n" , counter);
   	  scanf ("%d" , &current);
   	  if ( current > largest1 )
         largest1 = current;
      if ( current < largest1 && current > largest2)
         largest2 = current;
   	  ++counter;
   } // End of While

   printf ("\nThe 1st maximum value is: %d" , largest1);
   printf ("\nThe 2ns maximum value is: %d" , largest2);
	
   return 0;
} // End of main
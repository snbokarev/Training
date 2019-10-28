/* Program for exercise 3.24 */

/* Find maximum from 10 vales input */

/* Input value, assign it to largest, use cycle to input values and compare it to largest. If current value is greater than largest, then addign the value to largest. Output largest. */

#include <stdio.h>

int main () {
   int counter , current , largest;
   puts ("Enter 1 value: ");
   scanf ("%d" , &largest);
   counter = 2;
   while ( counter <= 10 ) {
   	printf ("Enter %d value: \n" , counter);
   	scanf ("%d" , &current);
   	if ( current > largest )
   	largest = current;
   	++counter;
   } // End of While

   printf ("\nThe maximum value is: %d" , largest);
	
	
   return 0;
} // End of main
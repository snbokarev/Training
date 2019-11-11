/* Program for exercise 3.44 */

/* It needs to input values and determine if they may be a triangle sides.

To resolve it lets use triangle property that any two sides in sum is greater then other third  side */

#include <stdio.h>

int main () {
	float a , b , c;
	
	printf ("Enter non-zero value of A\n");
	scanf ("%f" , &a);
	while ( a <= 0 ) { // While 1
	   printf (" You entered incorrect value. Enter non-zero value of A\n");
	   scanf ("%f" , &a);
	} // End of while 1
	
	printf ("Enter non-zero value of B\n");
	scanf ("%f" , &b);
	while ( b <=0 ) { // While 2
	   printf (" You entered incorrect value. Enter non-zero value of B\n");
	   scanf ("%f" , &b);
	} // End of while 2
	
	printf ("Enter non-zero value of C\n");
	scanf ("%f" , &c);
	while ( c <= 0 ) { // While 3
	   printf (" You entered incorrect value. Enter non-zero value of C\n");
	   scanf ("%f" , &c);
	} // End of while 3
	
	if ( a + b > c) {
	   if (a + c > b)
	      if (b + c > a)
	         printf ("This is triangle\n");
	}
	else
	   printf ("This is not a trianyle\n");
	
	
	   
	
	
	
	
   return 0;	
}
/* Program from figure 5.14 */
/* Recursion example for factorial  */

#include <stdio.h>

long factorial (long); // Prototype of factorial

main () {
	
	for (int i = 1; i <= 10; ++i) {
	
	   printf ("%2d! is %ld\n" , i , factorial(i));
	   
	} // End of for

	return 0;	
	
} // End of main

/* Definition of factorial */
long factorial (long number) {
	if (number <= 1)
	   return 1;
	else
	   return (number * factorial (number - 1));
} // End of definition of factorial
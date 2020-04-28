/* Program from figure 5.15 */
/* It needs to calculate Fibonacci numbers using recursion */

#include <stdio.h>

long fibonacci (long); // Peototype of fibonacci function

main () {
	int f;
	printf ("%s\n" , "Enter position of Fibonacci number");
	scanf ("%d" , &f);
	printf ("Fibonacci number for %d is %ld\n" , f , fibonacci (f));
	
   return 0;
} // End of main

/* Definition of fibonacci function */
long fibonacci (long number) {
	if (number == 0 || number == 1)
	   return number;
	else
	   return (fibonacci(number - 2) + fibonacci (number - 1));
} // End of fibonacci function definition

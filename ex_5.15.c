/* Program from figure 5.15 */
/* It needs to calculate Fibonacci numbers using recursion */

#include <stdio.h>

long fibonacci (long); // Prototype of fibonacci function
long fibonacci2 (long); // Protorype of fibonacci2 function

main () {
	int f;
	printf ("%s\n" , "Enter position of Fibonacci number, calculating recursively");
	scanf ("%d" , &f);
	printf ("Fibonacci number for %d is %ld\n" , f , fibonacci (f));
	printf ("\n%s\n" , "Enter position of Fibonacci number, calculating iteratively");
	scanf ("%d" , &f);
	printf ("Fibonacci number for %d is %ld\n" , f , fibonacci2 (f));
	
   return 0;
} // End of main

/* Definition of fibonacci function */
long fibonacci (long number) {
	if (number == 0 || number == 1)
	   return number;
	else
	   return (fibonacci(number - 2) + fibonacci (number - 1));
} // End of fibonacci function definition

/* Definition for fibonacci2 function */
long fibonacci2 (long number) {
	int a = 0 , b = 1 , c = 0;
	if (number == 0 || number == 1)
	   return number;
	else {
		for (int i = 1 ; i <= number - 1 ; ++i) {
			c =  a + b;
			a = b;
			b = c;
		} // End of for
		return c;	
	} // End of else
} // End of fibonacci2 function definition
/* Program for exercise 5.38 */
/* Creating non-recursive function caslculating Fibonacci numbers */

#include <stdio.h>

 long  fibonacci (long); // prototype of fibonacci

main ()
{
	long n , i = 0;
    long res = 0;
	printf ("%s\n" , "Enter position No");
	scanf ("%ld" , &n);
	
	while (n <= 0)
	{
		printf ("%s\n" , "Enter non-zero number");
    	scanf ("%ld" , &n);
	} // end of while
	
	printf ("The %ld Fibonacci number is %ld.\n\n" , n , fibonacci (n-1));
	
	while (res >= 0)
	{
		res = fibonacci(i);
		if (res >= 0)
		   printf ("The %ld Fibonacci number is %ld.\n" , i+1, res);
		i++;
	} // end of while
	
	return 0;
	
} // End of main

long  fibonacci (long number) {
	long  a = 0 , b = 1 , c;
	if (number == 0 || number == 1)
	   return number;
	else {
		for (long i = 1 ; i <= number - 1 ; ++i) {
			c =  a + b;
			a = b;
			b = c;
		} // End of for
		return c;	
	} // End of else
} // End of fibonacci function definition
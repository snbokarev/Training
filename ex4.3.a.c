/* Program for 4.3.a */
/* It needs to sum all even numbers between 1 and 99 using "for" operator */

#include <stdio.h>

int main () {
	
	int sum1 = 0 , sum2 = 0 , sumt = 0;
	
	// Sum of odd numbers
	for (int i = 1 ; i <= 99 ; i += 2) {
	   sum1 += i;
	}  // End of for
	
	// Sum of even numbers
	for (int i = 2 ; i <= 99 ; i += 2) {
	   sum2 += i;
	}  // End of for
	
	// Total sum
	for (int i = 1 ; i <= 99 ; ++i) {
	   sumt += i;
	}  // End of for
	
	printf ("Sum of odd numbers is: %d\n" , sum1);
	
	printf ("Sum of even numbers is: %d\n" , sum2);
	printf ("Total sum of numbers is: %d\n" , sumt);	
	
	
} // End of main
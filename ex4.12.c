/* Program for 4.12 */

/* It needs to calculate sum of integers from 2 till 30 */

#include <stdio.h>

int main () {
	int sum = 0;
	for (int i = 2 ; i <= 30 ; i+=2)
	   sum += i;
	   
	printf ("The sum is: %d\n" , sum);
	
	
	
} //End of main
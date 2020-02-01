/* Program for 4.9 */

/* It needs to sum integers */

#include <stdio.h>

int main () {
	int i, q, val, sum = 0;
	
	puts ("Enter your range");
	scanf ("%d" , &q);
	
	for (i = 1; i <= q; i++) {
		scanf ("%d" , &val);
		sum += val;		
	}
	
	printf ("The sum is: %d\n" , sum);
	
} // End of main
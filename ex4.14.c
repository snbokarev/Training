/* Program for 4.14 */

/* It needs to calculate factorial */

#include <stdio.h>

int main () {
	
    int fact = 1 , n;
	puts ("Enter max value of factorial argument");
	scanf ("%d" , &n);
	
	for (int i = 1; i <= n ; i++) {
		fact = 1;
		for (int j = 1 ; j <= i ; j++) {
			fact *= j;	
		} // End of for with j
		printf ("%d ! = %d\n" , i, fact);
	} // End of for with i
	
} // End of main
/* Program for 4.11 */

/* It needs to read n integers and find minimum */

#include <stdio.h>

int main () {
	int n , val , min;
	
	scanf ("%d" , &n);
	if (n>0) {
	   scanf ("%d" , &val);
	   min = val;
	   for (int i = 1; i < n; i++) {
	      scanf ("%d" , &val);
	      if (val < min)
	         min = val;
	   } // End of for
	   printf ("The minimum is: %d\n", min);
	} // End of if
	else
	   printf ("You entered %d as number quantity, how we can read such quantity?\n" , n);
} // End of main
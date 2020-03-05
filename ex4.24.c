/* Program for 4.24 */
/* It needs to check output of commands */

#include <stdio.h>

int main () {
	int i = 1 , j = 2 , k = 3 , m = 2;
	
	printf ("%d\n" , i == 1);
	printf ("%d\n" , j == 3);
	printf ("%d\n" , !m);
	printf ("%d\n" , k + m < j || 3 - j >= k);
	
		
   return 0;	
} //End of main
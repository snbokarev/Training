/* Program for 4.27 */

/* It needs to find "Piphagor's threes" for sides not greater than 500. */

#include <stdio.h>
int main () {
	int a = 0;
	
	for (int i = 1; i <= 500; ++i)
	   for (int j = 1; j <= 500; ++j)
	      for (int k = 1; k <= 500; ++k) 
	      	if (i*i == j*j+ k*k) {
	      		a += 1;
	      		printf("%d three is: %d, %d, %d\n" , a , i , j, k);
	      	}
	
	return 0;
	
} // End of main
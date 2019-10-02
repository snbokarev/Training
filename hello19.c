#include <stdio.h>

/* Calculating sum from 1 to 10 using while */

int main () {
	
	int sum, x;
	x=1;
	sum=0;
	
	while (x < 11) {
	   sum += x;	
	   x += 1;
	}
	
	printf ( "The sum is: %d\n", sum );
	  
	return 0;
	
}
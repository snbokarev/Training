#include <stdio.h>

/* Calculating y-power of x */

int main () {
	
	int x , y , i, power;
	i = 1;
	power = 1;
	
	puts ("Enter value to be powered");
	scanf ("%d" , &x);
	
	puts ("Enter value of power");
	scanf ("%d" , &y);
	
	while ( i <= y ) {
	   power *= x ;
	   ++i;		
	}
	
	printf ("The %d-power of %d is: %d\n" , y , x , power) ;
	
	return 0;
	
	
}
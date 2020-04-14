/* Program from figure 5.4 */
/* It needs to determine maximum usinf function */

#include <stdio.h>

int maximum (int , int , int); // Prototype

main () {
	int a , b , c;
	printf ("%s\n" , "Enter three numbers:");
	scanf ("%d%d%d" , &a , &b , &c);
	printf ("Maximum is: %d\n" , maximum (a , b , c));
	
	return 0;
	
} // End of main

/* Definition of function */
int maximum (int x , int y , int z) {
	int max;
	max = x;
	if (y > max)
	   max = y;
	if (z > max)
	   max = z;
	   
	return max;
	
} // End of maximum

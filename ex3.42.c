/* Program for exercise 3.42 */

/* It needs to calculate circle parameters

2piR, piR2/2 */

#include <stdio.h>

int main () {
	float pi = 3.14159;
	int ra;
	
	printf ("Enter radius\n");
	scanf ("%d" , &ra);
	
	printf ("Diameter is: %d\n" , 2*ra);
	printf ("Length is %.5f\n" , 2*pi*ra);
	printf ("Square is %.5f\n" , pi*ra*ra/2);
	
	
	
	
	
   return 0;	
}
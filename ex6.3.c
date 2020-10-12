/* Program from exercise 6.3 */

#include <stdio.h>
#define SIZE 10

main()
{
	int x;
	float fractions[SIZE] = {0};
	
	fractions[9] = 1.667;
	fractions[6] = 3.333;
	
	printf("%.2f\t%.2f\n", fractions[6], fractions[9]);
	
	for ( x = 0; x <= SIZE - 1; x++)
	    printf("fractions[%d] = %f\n", x, fractions[x]);
	
} // End of main 
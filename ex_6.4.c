/* Program from figure 6.4 */
/* Initializing array using curly braces */

#include <stdio.h>

main()
{
	int n[10] = {12, 32, 54, 56, 68, 71, 85, 87, 91, 98};	    
	printf("%s%13s\n", "Element", "Value");
	for (int i = 0; i <= 9; i++)
	    printf("%7d%13d\n", i, n[i]);
	
	return 0;
	
} // End of main
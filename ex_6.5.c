/* Program from figure 6.5*/
/* Using preprocessor directive with symbolic constant */

#include <stdio.h>
#define SIZE 10

main()
{
	int s[SIZE], j;
	
	printf("%s%13s\n", "Element", "Value");
	for (int j = 0; j <= SIZE - 1; j++) {
	    s[j] = 2 + 2 * j;
	    printf("%7d%13d\n", j, s[j]);
	}
	
	return 0;
	
} // End of main
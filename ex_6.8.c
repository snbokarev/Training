/* Program from figure 6.8 */
/* Printing histogram */

#include <stdio.h>
#define SIZE 10

main()
{
	int n[SIZE] = {15, 1, 23, 8, 5, 10, 11, 9, 17, 2};
	int i, j;
	
	printf("%s%13s%17s\n", "Element", "Value", "Histogram");
	for (i = 0; i <= SIZE - 1; i++) {
		printf("%7d%13d        ", i, n[i]);
		
		for (j = 1; j <= n[i]; j++) 
			printf("%c", '*');
		    
		printf("%s\n", "");
	} // end of for i
	
	return 0;
	
} //End of main
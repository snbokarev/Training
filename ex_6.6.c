/* Program from figure 6.6*/
/* Using preprocessor directive with symbolic constant */

#include <stdio.h>
#define SIZE 12

main()
{
	int a[SIZE] = {1, 3, 4, 5, 6, 8, 10, 11, 12, 14, 15, 17}, i, total = 0;
	
	for (i = 0; i <= SIZE - 1; i++) 
	    total += a[i];
	    
	printf("Total of %d elements is %d\n", SIZE, total);
	
	return 0;
	
} // End of main
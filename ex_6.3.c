/* Program from figure 6.3 */

#include <stdio.h>

main()
{
	int n[10], i;
	for (i = 0; i <= 9; i++)
	    n[i] = 0;
	    
	printf("%s%13s\n", "Element", "Value");
	for (i = 0; i <= 9; i++)
	    printf("%7d%13d\n", i, n[i]);
	
	return 0;
	
} // End of main
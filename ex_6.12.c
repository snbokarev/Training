/* Program from figure 6.12 */
/* Array name points to first array item */

#include <stdio.h>

main()
{
	char array[5];
	printf("array = %p\narray[0] = %p\n", &array, &array[0]);
	
	return 0;
	
} // End of main
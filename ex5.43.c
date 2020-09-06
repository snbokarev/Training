/* Program for exetcise 5.43 */
/* It needs to try recursive call of main() */

#include <stdio.h>

main()
{
	static int count = 0;
	count++;
	
	printf("Step: %d\n", count);
	
	main();
	
	
} // End of main
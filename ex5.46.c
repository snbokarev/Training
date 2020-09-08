/* Exercise for 5.46 */
/* It needs to understand what the program does */

#include <stdio.h>

main()
{
	int c;
	int static count = 0;
	++count;
	printf("Step %d\n", count);
	
	if ((c = getchar()) != '.') {
		main();
		printf("%c\n", c);
		
	} // end of if
	
	return 0;
	
	
} // End of main
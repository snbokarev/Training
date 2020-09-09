/* Exercise for 5.46 */
/* It needs to understand what the program does */

#include <stdio.h>

main()
{
	//char c; // uncomment to use with scanf
	int c; // uncomment to use with getchar
	int static count = 0;
	++count;
	printf("Step %d\n", count);
	
	//scanf(" %c", &c); // uncomment to use with scanf
	
	//if (c  != '.') { // uncomment to use with scanf
	if ((c = getchar()) != '.') { // uncomment to use with getchar
		main();
		printf("%c\n", c);
		
	} // end of if
	
	return 0;
	
	
} // End of main
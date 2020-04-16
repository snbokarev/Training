/* Program from figure 5.9 */

/* It needs to output game bone faces using srand() function */

#include <stdlib.h>
#include <stdio.h>

main () {
	int i;
	unsigned seed;
	
	printf ("%s\n" , "Enter the seed: ");
	scanf ("%u" , &seed);
	srand(seed);
	
	for (i = 1 ; i <= 20 ; i++) {
		printf ("%10d" , 1 + rand() % 6);
		if (i % 5 == 0)
		   puts ("");
		
	} // End of for
	
	
	return 0;
	
} // End of main
/* Program from exetcise 6.4 */

#include <stdio.h>
#define SIZE 3

main()
{
	int table[SIZE][SIZE];
	int x, y;
	
	for (x = 0; x <= SIZE - 1; x++)
	    for (y = 0; y <= SIZE - 1; y++) {
	        table[x][y] = x + y;
	        printf("%3d\n", table[x][y]);
	    }
	
} // End of main 
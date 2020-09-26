/* Program from figure 6.9 */
/* Enhance program from figure 5.8 using arrays */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 7

main()
{
	int face, roll, frequency[SIZE] = {0};
	srand(time(NULL));
	
	for (roll = 1; roll <= 6000; roll++) {
		face = rand()%6 + 1;
		++frequency[face];
	} // end of for roll
	
	printf("%s%17s\n", "Face", "Frequency");
	for(face = 1; face <= SIZE - 1; face++)
	    printf("%4d%17d\n", face, frequency[face]);
	
	return 0;
	
} // End of main
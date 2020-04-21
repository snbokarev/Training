/* Program from figure 5.10 */
/* It needs to model game with 2 cubes */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int rollDice (void);

main () {
	int sum , code, points;
	srand(time(NULL));
	
	sum = rollDice();
	
	switch (sum) {
		case 7: case 11:
		   code = 1;
		   break;
		   
		case 2: case 3: case 12:
		   code = 2;
		   break;
		   
		default:
		   code = 0;
		   points = sum;
		   printf ("Current points are: %d\n" , points);
		
	} // End of switch
	
	while (code == 0) {
		sum = rollDice();
		if (sum == points) { // Start of if
			code = 1;
		} else {
			if (sum == 7) {
				code = 2;
			} else {
				code = 0;
			}
		} // End of if	
		
	} // End of while
	
	if (code == 1)
	   puts ("Player wins");
	else
	   puts ("Player loses");
	   
   return 0;	
	
} // End if main

int rollDice (void) {
	int face1 , face2 , result;
	face1 = 1 + rand() % 6;
	face2 = 1 + rand() % 6;
	result = face1 + face2;
	printf ("Player rolled %d and %d\n" , face1 , face2);
	return result;
	
} // End of rollDice definition
/* Program from figure 5.7 */
/* It needs to imitate game cube using "rand" function */

#include <stdlib.h>
#include <stdio.h>

main () {
	int i;
	for (i = 1 ; i <= 20 ; i++) {
   	printf ("%10d" , 1 + (rand()%6));
   	if (i % 5 == 0)
   	   puts("");
   	
	} // End of for
	
   return 0;	
} // End of main
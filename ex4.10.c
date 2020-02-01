/* Program for 4.10 */

/* It needs to read numbers until 9999 is entered and calculate their average value*/

#include <stdio.h>

int main () {
	int i, val, sum = 0;
	
    for (i = 1; i >= 1; i++) {
    	scanf ("%d" , &val);
    	if (val == 9999)
    	   break;
    	sum += val;
    }
	
	if (i == 1)
	   printf ("No input");
    else
   	printf ("Average is: %.1f\n" , (float) sum/(i-1));
	
	
} // End of main
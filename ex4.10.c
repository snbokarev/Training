/* Program for 4.10 */

/* It needs to read integers untill 9999 is entered, then calculate its average value */

#include <stdio.h>

int main () {
	int val = 0 , sum = 0 , i = 0;
	
	while (val != 9999) {
		scanf ("%d" , &val);
		sum += val;
		i++;
	} // End of while
	
	if (sum != 9999)
	   printf ("Avg is %.2f\n" , (float)(sum-9999)/(i-1));
	else
	   puts ("No input");
	
} // End of main
/* Program for exercise 5.14 */
/* It needs to generate random values */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main() 
{
	int val;
	
	srand(time(NULL));
	
	// 2,4,6,8,10
	val = 1 + rand()%10;
	if (val%2 > 0)
	   val += 1;
	printf("The value is: %d\n" , val);
	
	//3,5,7,9,11
	val = 4 + rand()%9;
	if (val%2 == 0)
	   val -= 1;
	printf("The value is: %d\n" , val);
	
	// 6,10,14,18,22
	val = 6 + rand()%18;
	if (val%2 > 0)
	   val -= 1;
	if (val%2 == 0)
	   if (val/2%2 == 0)
	      val -= 2;
	
	printf("The value is: %d\n" , val);
	
	return 0;
	
} // End of main
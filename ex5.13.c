/* Program for 5.13 */
/* It needs to play with random values */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main() 
{
	int val;
	srand(time(NULL));
	
    // 1<=val<=2
	val = 1 + rand()%2;
	printf("Value is: %d\n" , val);
	
	// 1<=val<=100
	val = 1 + rand()%100;
	printf("Value is: %d\n" , val);
	
	// 0<=val<=9
	val = rand()%10;
	printf("Value is: %d\n" , val); 
	
	srand(time(NULL));
	
	// 1000<=val<=1112
	val = 1000 + rand()%113;
	printf("Value is: %d\n" , val);
	
	// -1<=val<=1
	val = -1 + rand()%3;
	printf("Value is: %d\n" , val);
	
	// -3<=val<=11
	val = -3 + rand()%15;
	printf("Value is: %d\n" , val);
	
	return 0;
	
	
} // End of main
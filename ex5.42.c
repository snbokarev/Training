/* Program for exercise 5.42 */
/* Calculate greatest common devider using recursion */

#include <stdio.h>

int gcd_rec(int, int); // Prototype

main()
{
	int first, second;
	
	printf("%s\n" , "Enter 2 values");
	scanf("%d%d" , &first, &second);
	
   // printf("The greatest common devider for %d and %d  is %d", first, second, gcd_rec(first, second));
    
    gcd_rec(first, second);
	
	
} // End of main

int gcd_rec(int x, int y)
{
	static int count = 0;
	++count;
	printf("Step: %d, x: %d, y: %d\n", count, x ,y);
	if (y == 0)
	    return x;
	else
	    return gcd_rec(y, x % y);
	
	
} // End of gcd_rec
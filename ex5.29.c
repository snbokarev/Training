/* Program for 5.29 */
/* It needs to find grand common devider (create function) for 2 integers */

#include <stdio.h>

int gcd(int, int) ; // Prototype of gcd

main()
{
	int val1, val2;
	printf ("%s\n" , "Enter 2 values");
	scanf ("%d%d" , &val1 , &val2);
	
	printf ("The grand common divider is: %d\n" , gcd (val1 , val2));
	
	return 0;
	
} // End of main

int gcd(int x, int y) // definition of gcd
{
	int great, less , buf;
	   
    if (x >= y)
    {
    	great = x;
    	less = y;
    } else {
    	great = y;
    	less = x;
    }
    
	while (great%less != 0)
    {
	   buf = great;
	   great = less;
	   less = buf % less;
 	} // end of while
	
	return less;
		
} // End of definition
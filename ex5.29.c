/* Program for 5.29 */
/* It needs to find grand common devider (create function) for 2 integers */

#include <stdio.h>

int gcd(int, int) ; // Prototype of gcd

main()
{
	
	
} // End of main

int gcd(int x, int y) // definition of gcd
{
	int great, less;
	   
    if (x >= y)
    {
    	great = x;
    	less = y;
    }
    
    if (y >= x)
    {
    	great = y;
    	less = x;
    }
	
	while (great%less != 0)
	{
		buf = great;
	    great = less;
		less = buf % less;
			
	} // end of while
		
	
} // End of definition
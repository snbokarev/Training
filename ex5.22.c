/* Program for exercise 5.22 */
/* It needs to divide number from range 1 - 32767 into separate digits */

#include <stdio.h>

void extractNumbers (short int); // Prototype

main ()
{
	short int x;
	
	printf ("%s\n" , "Enter the number");
	scanf ("%hi" , &x);
	
	extractNumbers (x);
	
	
	
	return 0;
	
} // End of main

void extractNumbers (short int val)
{
	short int remain;
	int bit = 0 , tens = 1;
	
	remain = val;
	while (remain > 0)
	{
		remain/=10;
		bit+=1;
		if (bit > 1)
	   	tens*=10;
	} // end of while

	for (int i = 1; i <= bit;  i++)
	{
	   remain = val%tens;
	   val/=tens;
	   printf ("%hi  " , val);
	   val = remain;
	   tens/=10;
	}
	
} // End of definition extractNumbers
/* Program for exercise 5.28 */
/* It needs to input value and output its numbers in a reversed sequense */

#include <stdio.h>

void reverseNumbers (int); // Prototype

main ()
{
	int value;
	printf ("%s\n" , "Enter your value");
	scanf ("%d" , &value);
	
	reverseNumbers (value);
	
	return 0;
} // End of main

void reverseNumbers (int val)
{
	int remain , revalue = 0;
	int bit = 0 , revbit = 0 , tens = 1, revtens = 1;
	
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
	   revalue += val * revtens;
	   val = remain;
	   tens/=10;
	   revtens*=10;
	}
	
	remain = revalue; // Counting bitness of reversed value
	while (remain > 0)
	{
		remain/=10;
		revbit+=1;
	} // end of while
	
	//Printing reversed value with the leading zeros , if it is needed
	
	printf ("%s" , "The reversed value is: ");
	for (int i = 1 ; i <= (bit - revbit); ++i)
	   printf ("%d" , 0);
	printf ("%d\n" , revalue);
	
} // End of definition reverseNumbers
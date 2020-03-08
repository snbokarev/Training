/* Program for 4.25 */

/* Input decimal and present it as binary, oct and hex */

#include <stdio.h>

int main () {
   unsigned int maxint = 2147483648;
   int decval, binbit , flag = 0 , pow =32;
   int decval2, binbit2, posval = 1;
   int decvaloct, octbit, octposval = 1;
   int decvalhex, hexbit, hexposval = 1;
   
   printf ("%s\n" , "Enter decimal number");
   scanf ("%d" , &decval);
   decval2 = decval;
   decvaloct = decval;
   decvalhex = decval;
   
   /* Calculating binary, option 1 */
   
   printf ( "\n%s" , "Binary value is: ");
   
   while (--pow >= 0) {
   	binbit = decval/maxint;
   	if (binbit == 1) flag = 1;
   	if (pow == 0 && flag == 1) 
   	   printf ("%d\n" , binbit);
       if (flag == 1&& pow != 0) 
   	   printf ("%d" , binbit);
   
   	if (binbit == 1) {
   		decval -= maxint;
   	} // End of if
   	maxint/=2;
   } //End of while
   
   /* Calculating binary, option 2 */
  
  printf ( "\n%s" , "Binary value is: ");
   while (posval <= decval2) {
   	posval*=2;
   } // End of while 
   
   posval/=2;
	
	while (posval >= 1) {
		binbit2 = decval2/posval;
		printf ("%d" , binbit2);
		decval2%=posval;
		posval/=2;
		
	} // End of while
	
	/* Calculating oct */
	
    printf ( "\n\n%s" , "Oct value is: ");
	while (octposval <= decvaloct) {
   	octposval*=8;
   } // End of while 
   
   octposval/=8;
	
	while (octposval >= 1) {
		octbit = decvaloct/octposval;
		printf ("%d" , octbit);
		decvaloct%=octposval;
		octposval/=8;
		
	} // End of while
	
		/* Calculating hex*/
	
    printf ( "\n\n%s" , "Hex value is: ");
	while (hexposval <= decvalhex) {
   	hexposval*=16;
   } // End of while 
   
   hexposval/=16;
	
	while (hexposval >= 1) {
		hexbit = decvalhex/hexposval;
		
		switch (hexbit) {
			case 10:
			hexbit = 'A';
			printf ("%c" , hexbit);
			break;
			
			case 11:
			hexbit = 'B';
			printf ("%c" , hexbit);
			break;
			
			case 12:
			hexbit = 'C';
			printf ("%c" , hexbit);
			break;
			
			case 13:
			hexbit = 'D';
			printf ("%c" , hexbit);
			break;
			
			case 14:
			hexbit = 'E';
			printf ("%c" , hexbit);
			break;
			
			case 15:
			hexbit = 'F';
			printf ("%c" , hexbit);
			break;
			
			default:
			printf ("%d" , hexbit);
			break;
			
		}
		
		decvalhex%=hexposval;
		hexposval/=16;
		
	} // End of while
	
	return 0;
	
} // End of main
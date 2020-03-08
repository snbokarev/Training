/* Program for 4.25 */

/* Input decimal and present it as binary, oct and hex */

#include <stdio.h>

int main () {
   unsigned int maxint = 2147483648;
   int decval, binbit , flag = 0 , pow =32;
   
   printf ("%s\n" , "Enter decimal number");
   scanf ("%d" , &decval);
   
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
   
   
	
	
	
	
} // End of main
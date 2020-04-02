/* Program for 4.33 */

/* It needs to output roman numbers from 1 to 100 */

#include <stdio.h>

int main () {
	int val , dec , one;
//	printf ("%s\n" , "Enter decimal number");
//	scanf ("%d" , &val);
	
	for (val = 1; val <= 100; ++val) {
	
	dec = val/10;
	one = val%10;
	
	if ( dec <= 3) {
		for (int i = 1 ; i <= dec ; ++i) {
			printf ("%s" , "X");
		} // End of for
	} // End of if
	
	if ( dec >= 4 && dec <= 8) {
		for (int i = 1 ; i <= 5 - dec ; ++i) {
			printf ("%s" , "X");
		} // End of for
		printf ("%s" , "L");
		for (int i = 1 ; i <= dec - 5 ; ++i) {
			printf ("%s" , "X");
		} // End of for
	} // End of if
	
	if (dec == 9)
	   printf ("%s" , "XC");
	
	if (dec == 10)
	   printf ("%s" , "C");
	
	if ( one <= 3) {
		for (int i = 1 ; i <= one; ++i) {
			printf ("%s" , "I");
		} // End of for
	} // End of if
	
		if ( one >= 4 && one <= 8) {
		for (int i = 1 ; i <= 5 - one ; ++i) {
			printf ("%s" , "I");
		} // End of for
		printf ("%s" , "V");
		for (int i = 1 ; i <= one - 5 ; ++i) {
			printf ("%s" , "I");
		} // End of for
	} // End of if
	
	if (one == 9)
	   printf ("%s" , "IX");
	   
	   printf ("%s\n" , "");
	
	} // End of global for
	return 0;
	
} // End of main
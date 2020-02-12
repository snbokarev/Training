/* Program for 4.16 */

/* It needs to output * */

#include <stdio.h>

int main () {
	
	
	// Block A
	for (int i = 1; i <= 10 ; i++) {
	   for (int j = 1 ; j <= i ; j++)
	      printf ("*");
    printf("\n");
	} // End of for with i
	 printf("\n");
	// End of block A
	
	// Block B
	for (int i = 10; i >= 1; i--) {
	   for (int j = 1 ; j <= i ; j++)
	      printf ("*");
    printf("\n");
	} // End of for with i
	 printf("\n");
	// End of block B

		// Block C
	for (int i = 10; i >= 1; i--) {
	   for (int j = 1; j <= (10 - i ); j++)
	      printf ("%s" , " ");
	   for (int k = 1; k <= i; k++)
	      printf ("%s" , "*");
       printf("\n");
	} // End of for with i
	 printf("\n");
	// End of block C 
	
		// Block D
	for (int i = 1; i <= 10; i++) {
	   for (int j = 1; j <= (10 - i ); j++)
	      printf ("%s" , " ");
	   for (int k = 1; k <= i; k++)
	      printf ("%s" , "*");
       printf("\n");
	} // End of for with i
	 printf("\n");
	// End of block D
	
	
} // End of main
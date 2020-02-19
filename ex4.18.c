/* Program for 4.17 */

/* It needs to read 5 numbers between 1 and 30 and then output stars according to numbers */

#include <stdio.h>

int main () {
	int num , i = 0;
	while (++i <= 5) { // Main while
	   scanf ("%d" , &num);
	      
	   while (num < 1 || num> 30) { // Checking while
	      printf ("%d is out of scope, enter again\n" , num);	
	      scanf ("%d" , &num);
	   } // End of checking while
	   
	    printf ("For %d:\t" , num);
	   				
		for (int j = 1; j <= num; ++j) {
		   printf ("%s" , "*");
		}
		printf ("%s\n" , "");
		
	} // End of Main while
	
	printf ("%s\n" , "That's it");
	
   return 0;	
	
} // End of main
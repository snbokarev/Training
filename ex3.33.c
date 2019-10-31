/* Program for ex3.33 */

/* It needs to input square size, check if it is in range from 1 to 20, create two cycles to output square on screen. One cycle fills rows, one - for paragraph (new row) */

#include <stdio.h>

int main () {
	int count1 , count2 , size;
	
	puts ("Enter square size (1-20)");
	scanf ("%d" , &size);
	
	if (size < 1 || size > 20 ) {
	   while (size < 1 || size > 20 ) {
	      
	      puts ("Wrong input! Enter square size (1-20)");
      	scanf ("%d" , &size);
	   	
	   } // End of while
		
	} // End if
	
	count1 = 1;
	
	while ( count1 <= size ) { // While 1
	   count2 = 1;
	   while ( count2 <= size ) { // While 2
	      printf ("*");
	      ++count2;	
	   } // End of while 2
	   
		printf ("\n");
		++count1;
		
	} // End of while 1
	

	
} // End of main
/* The program for exercise 5.39 */
/* It needs to create recursive function to calculate Hanoi tower riddle */

#include <stdio.h>

void hanoi (int , int , int , int); // Prototype of function
main () {
	
	int quantity , source , dest , inter;
	
	printf ("%s\n" , "Enter quantity of discs");
	scanf ("%d" , &quantity);
	
	printf ("%s\n" , "Enter number of the source stalk");
	scanf ("%d" , &source);
	
	printf ("%s\n" , "Enter number of the destination stalk");
	scanf ("%d" , &dest);
	
	printf ("%s\n" , "Enter number of the buffer stalk");
	scanf ("%d" , &inter);
	
	printf ("%s\n" , "To complete the task do the moves:");
	
	hanoi (quantity , source , dest , inter);
	
	
	
	
	return 0;
	
} // End of main

void hanoi (int q , int from , int to , int buf) {
	static int count = 0;
	++count;
	printf ("Step %d q=%d " , count, q);
	if ( q != 0 )
	{
		
		// Move q-1 disks  from source to buffer
		hanoi (q - 1 , from , buf , to );
		
		// Move disk #q from source to destination
		printf ("Move from %d to %d\n",  from , to);
		
		// Move q-1 disks from buffer to destination
		hanoi (q - 1 , buf , to , from);
		
	} // end of if
	
	
} // End of hanoi
#include <stdio.h>

/* Lets show difference between pre- and postdecrement */

int main () {
	
	int i = 10;
	printf ("This is var: %d, predec: %d, after predec: %d\n" , i , --i , i);
	
	i = 10;
	printf ("This is var: %d, postdec: %d, after postdec: %d\n\n" , i , i-- , i);
	
	
	i = 10;
	printf (" This is var: %d\n" , i );
	printf (" This is predec: %d\n" , --i );
	printf (" This is var: %d\n\n" , i );
    i = 10;
	printf (" This is var: %d\n" , i );
	printf (" This is postdec: %d\n" , i--);
	printf (" This is var: %d\n" , i );
	
	
	return 0;
	
	
	
	
	
}
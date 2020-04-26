/* Program from figure 5.12 */
/* It needs to check options for identifiers */

#include <stdio.h>
 
 void a (void);
 void b (void);
 void c (void);
 
 int x = 1; // Global variable
 
 main () {
 	
 	int x = 5; // Local variable for main
 	printf ("Local x for main is %d\n" , x);
 	{ // Sub block for main
 		int x = 7;
 		printf ("Local x for sub block of main is %d\n" , x);
 	} // End of sub block for main
 	
 	printf ("Local x for main is %d\n" , x);
 	
 	a(); // Contains auto local x
 	b(); // Contains static local x
 	c(); // Uses global x
 	a(); // Initialises x again
 	b(); // Uses last value of x
 	c(); // Uses last value of global x
 	
 	
 	printf ("\nLocal x for main is %d\n" , x);
 	
 	
 	
 	return 0;
 	
 } //End of main
 
 void a (void) {
 	
 	int x = 25; /* It is being initiated during each call of a */
 	printf ("\nLocal x from a after calling: %d\n" , x);
 	++x;
 	printf ("Local x from a before exiting: %d\n" , x);
 } // end of void a
 
 void b (void) {
 	
 	static int x = 50; /* It is being initiated during first call of a */
 	printf ("\nLocal static x from b after calling: %d \n" , x);
 	++x;
 	printf ("Local static x from b before exiting: %d \n" , x);
 	
 } // end of void b
 
 void c (void) {
 	
 	printf ("\nGlobal x on entering c: %d\n" , x);
 	x*=10;
 	printf ("Global x on exiting c: %d\n" , x);
 	
 } // end of void c
 
 
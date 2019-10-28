/* Program for exercise 3.25 */

/* Print in cycle string with values as a table */

#include <stdio.h>

int main () {
   int counter = 0;
   while (counter <= 10) {
      if (counter == 0)
      printf ("N\t10*N\t100*N\t1000*N\n");
      else
      printf ("%d\t%d\t%d\t%d\n" , counter , 10*counter , 100*counter , 1000*counter);
      ++counter;
   	
   }  // End of While
	
	
	
   return 0;	
} // End of Main
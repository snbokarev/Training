/* Program for 4.35 */

/* It needs to check difference between do/while and while */

#include <stdio.h>

int main () {
	int i = 1;
	
   do
      printf ("Test do %d\n" , i);
   while (++i <=10);
   
   i = 0;
   puts ("");
   
   while (++i <= 10)
      printf ("Test do %d\n" , i);
	
	
   return 0;	
} // End of main
/* Program for exercise 3.40 */

/* It needs to output chess board using just 3 printf operators: printf ("* ") , printf (" ") , printf ("\n") */

#include <stdio.h>

int main () {
   int i = 1 , j = 1 ;

   while (i <= 72) {
      if (i % 9 == 0) {
         printf ("\n");
         ++j;
      }
      ++i;
      if (i % 10 == 0 && j % 2 == 0) {
         printf (" "); 
      }
      else
         printf ("* ");

      

   }








   return 0;
}
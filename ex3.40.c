/* Program for exercise 3.40 */

/* It needs to output chess board using just 3 printf operators: printf ("* ") , printf (" ") , printf ("\n") 
Space - 9, 11, 29, 31, 49, 51, 69, 71 */

#include <stdio.h>

int main () {
   int i = 1 , j = 1 ;

   while ( i <= 8) { // While 1
      while ( j <= 10) { // While 2
         
         if ((i%2 > 0 && j == 9) || (i%2 == 0 && j == 1))
            printf (" ");
         else
            if (j == 10)
               printf ("\n");
            else
               printf ("* ");
         ++j;
      } // End of while 2
      ++i;
      j = 1;
   } // End of while 1

   return 0;
}
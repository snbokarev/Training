/* Program for exercise 3.37 */
/* We have to count from 1 to 3000000. Every 1000000 we have to output message. */

#include <stdio.h>
int main () {
   int count = 0 ;
   while (count <= 30000000) { // While 1
      count += 1;
      if (count >= 10000000 && count % 10000000 == 0)
         printf ("Current value is: %d\n\n" , count);
   } // End of While 1

   puts ("Program is completed");


   return 0;
}
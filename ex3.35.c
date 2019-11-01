/*Program for exercise 3.35*/

/* It needs to determine if entered five digit value is polyndrom
To resolve it needs to divide entered value as first by 10000. Then remainder is being divided by 1000, next remainder - by 100, then - by 10. Last remainder isn't being divided.
So we have:
n1 - Result of division val by 10000
r1 - Result of modulo val by 10000
n2 - Result of division r1 divided by 1000
r2 - Result of modulo r1 by 1000
n3 - Result of division r2 divided by 100
r3 - Result of modulo r2 by 1000
n4 - Result of division r3 divided by 10
n5 - Result of modulo r3 by 10

If n1 equals to n5 and n2 equals to n4, then entered value is polyndrom (symmetric number)

*/

#include <stdio.h>

int main () {
   int val , n1 , n2 , n3 , n4 , n5 ;
   
   printf ("Enter 5-digit number\n");
   scanf ("%d", &val);

   //Checking if 5-digit number was entered
   if (val/10000 > 9 || val/10000 == 0)   {
      while (val/10000 > 9 || val/10000 == 0)   {
         printf ("%d is not 5-digit number. Enter your value\n", val);
         scanf ("%d", &val);
      } // End of While
   } // End of If

   
   // Counting. Initially we used here r1-r3 variables (as described on top), but then reduced them and icluded their statement to n1-n5
   n1 = val / 10000;  
   n2 = val % 10000 / 1000;  
   n3 = val % 10000 % 1000 / 100;  
   n4 = val % 10000 % 1000 % 100 / 10;
   n5 = val % 10000 % 1000 % 100 % 10;

   //Checking if it is polyndrom
   if (n1 == n5 && n2 == n4)
      printf ("%d is a polyndrom!\n", val);
   else
      printf ("%d is not a polyndrom!\n", val);
    
   
   return 0;
}
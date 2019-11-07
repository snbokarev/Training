/*Program for exercise 3.36*/

/* Resolution is based on 3.35 exercise code*/
/* It needs to convert entered value from binary to decimal
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
   int n1 , n2 , n3 , n4 , n5, dec , div , razr ;
   unsigned int val ; 

   printf ("Enter 5-digit binary number\n");
   scanf ("%d", &val);

   //Checking if 5-digit number was entered
      while (val/10000 > 9 || val/10000 == 0)   { //While 1
         // Counting of digit capacity
         div = val / 10;
         razr = 1;
            while (div > 0) { // While 2
               div /= 10;
               ++razr;
            } // End of While 2

         printf ("%d is %d-digit number. Enter 5-digit value\n", val , razr);
         scanf ("%d", &val);            
      } // End of While 1

   
   // Counting. Initially we used here r1-r3 variables (as described on top), but then reduced them and icluded their statement to n1-n5
   n1 = val / 10000;  
   n2 = val % 10000 / 1000;  
   n3 = val % 10000 % 1000 / 100;  
   n4 = val % 10000 % 1000 % 100 / 10;
   n5 = val % 10000 % 1000 % 100 % 10;

   // Checking if it is binary value
   while (n1 > 1 || n2 > 1 || n3 > 1 || n4 > 1 || n5 > 1) { // While 3
      printf ("%d is not a binary number. Please enter binary.\n" , val);
      scanf ("%d" , &val);
         //  Checking if it is 5 digit number
         while (val/10000 > 9 || val/10000 == 0)   { // While 4
            div = val / 10;
            razr = 1;
            while (div > 0) { //While 5
               div /= 10;
               ++razr;
            } // End of While 5
            printf ("%d is %d-digit number. Enter 5-digit value\n", val , razr);
            scanf ("%d", &val);
         } // End of While 4
       
      n1 = val / 10000;  
      n2 = val % 10000 / 1000;  
      n3 = val % 10000 % 1000 / 100;  
      n4 = val % 10000 % 1000 % 100 / 10;
      n5 = val % 10000 % 1000 % 100 % 10;

   } //End of While 3


   //Checking if it is polyndrom
   if (n1 == n5 && n2 == n4)
      printf ("%d is binary and a polyndrom!\n", val);
   else
      printf ("%d is binary and not a polyndrom!\n", val);

    
   // Converting to decimal
   dec = 1*n5 + 2*n4 + 4*n3 + 8*n2 + 16*n1;
   printf ("\nDecimal value of %d is: %d\n", val , dec);
    
   
   return 0;
}
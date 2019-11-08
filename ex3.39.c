/* Program for exercise 3.39 */

/* It needs to input number and determine how many sevens are included to the number */

/* 1 - Determine digit capacity */
/* 2 - While count is less or equal to digit capacity, calculate value of each bit. On each iteration of while compare the value to 7, if it is equal - increase counter */

#include <stdio.h>
int main () {
   unsigned int val1 , val2 ;  
   int i = 0 , count1 , count2 , pow = 1, razr = 1 ;

   // Input value
   printf ("Enter your value\n");
   scanf ("%d" , &val1);
   
   // Determining digit capacity
   val2 = val1;   
   while ( val2 / 10 > 0) // While
   {  
      val2 /= 10;
      ++razr;
   } // End of While
   
   printf ("\nDigit capacity of %d is %d\n" , val1 , razr);

   // Calculating value of each bit and comparing to 7
   count1 = razr;
   while (count1 > 0) { // While 1

      count2 = count1;
      while (count2 > 1) { // While 2
         pow *= 10;    
         --count2;
      }  // End of While 2 

      // printf ("Current val1: %d\n" , val1); // DEBUG
      // printf ("Current pow: %d\n" , pow); // DEBUG

      if (val1 / pow == 7)
         i += 1;
       
      val1 %= pow;
      pow = 1;

      --count1;

   } // End of While 1

   printf ("\nQuantity of sevens is %d\n" , i);

   return 0;
}  // End of main
/* Program 4.6 */
/*It needs to calculate percentage */

#include <stdio.h>
#include <math.h>

int main () {
    int year;
    double amount, principal = 1000.0, rate = .05;
    double sum = 1000.0;
    int intsum = 100000;
    int amount2 , principal2 = 1000 , rate2 = 5 , val;
    
    
    printf ("%4s%21s\n" , "Year" , "Amount on deposit");

    for (year = 1; year <= 10; year++) {
        amount = principal * pow (1.0 + rate, year);
        printf ("%4d%21.2f\n" , year , amount);

    } // End of for

   puts(" ");
   
   for (year = 1; year <= 10; year++) {
        sum+=sum*.05;
       
        printf ("%4d%21.2f\n" , year , sum);

    } // End of for

    puts(" ");
   
   for (year = 1; year <= 10; year++) {
        intsum = intsum + intsum*5/100;
       
        printf ("%4d%18d.%02d\n" , year , intsum/100, intsum%100);

    } // End of for

    puts (" ");
    
     for (year = 1; year <= 10; year++) {
        amount2 = principal2* pow(100 + rate2 , year);
        val = pow(100 , year);
        printf ("%4d%18ld.%02ld\n" , year , amount2/val , amount2%val);
      //  printf ("val=%d\n" , val);

    } // End of for


    return 0;
} // End of main
/* Program 4.15 */
/*It needs to calculate percentage (modified 4.6 */

#include <stdio.h>
#include <math.h>

int main () {
    int year;
    double amount, principal = 1000.0, rate = .05;
    
    printf ("%4s%21s\n" , "Year" , "Amount on deposit");

    for (year = 1; year <= 10; year++) {
        amount = principal * pow (1.0 + rate, year);
        printf ("%4d%21.2f\n" , year , amount);

    } // End of for
    
    // Block for percentage from 5 till 10
    for (int i = 5; i <= 10 ; i++) {
    	printf ("Data for %d-percent deposit\n", i);
    	printf ("%4s%21s\n" , "Year" , "Amount on deposit");
        rate = (double)i/100;
        for (year = 1; year <= 10; year++) {
           amount = principal * pow (1.0 + rate, year);
           printf ("%4d%21.2f\n" , year , amount);
        } // End of for with year
    	puts (" ");
    	
    } // End of for with i
    puts (" ");
    // End of block for percentage from 5 till 10


    // Another percentage block
    printf ("%s\t" , "Year");
    for (int i = 5 ; i <= 10 ; i++)
       if (i != 10)
          printf ("For %d%%\t", i);
       else
          printf ("For %d%%\n", i); // End of for
          
     for (year = 1; year <= 10; year++) {
    	printf ("%4d\t" , year);
    	for (int i = 5 ; i <= 10; i++) {
     	  rate = (double)i/100;
           amount = principal * pow (1.0 + rate, year);
           printf ("%.2f\t" ,  amount);
    	} // End of for with i
    	puts (" ");
     } // End of for with year
    
    // End of another percentage block




    return 0;
} // End of main
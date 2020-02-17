/* Program for 4.17 */
/* For each company we know account number, credit limit, balance. It needs to calculate and output new credit limit and output clients whos balance exceeds the new limit. */

#include <stdio.h>

int main () {
	int acc1 = 1000 , lim1 = 2500 , bal1 = 1500;
	int acc2 = 2000 , lim2 = 2000 , bal2  = 500;
	int acc3 = 3000 , lim3 = 3000 , bal3 = 2000;
	
	printf ("%s\t%s\t%s\n" , "Acc" , "New lim" , "Balance");
	printf ("%d\t%d\t%d\n" , acc1 , lim1/2 , bal1);
	printf ("%d\t%d\t%d\n" , acc2 , lim2/2 , bal2);
	printf ("%d\t%d\t%d\n" , acc3 , lim3/2 , bal3);
	
	printf ("\n%s\n" , "Limit is exceeded for accounts: ");
	printf ("%s\t%s\n" , "Acc" , "Excess");
	if (bal1 > lim1/2)
	   printf ("%d\t%d\n" , acc1 , bal1 - lim1/2);
	if (bal2 > lim2/2)
	   printf ("%d\t%d\n" , acc2 , bal2 - lim2/2);
    if (bal3 > lim3/2)
	   printf ("%d\t%d\n" , acc3 , bal3 - lim3/2);
	 
   return 0;  
	
} // End of main
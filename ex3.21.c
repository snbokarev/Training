/* Program for exercise 3.21 */

/* It needs to obtain values of hours worked and rate per hour. Then it needs to determine if value of hours exceeds 40. Then we have to multiplicate hours overv 40 on 1.5 and add it to 40. Then we have to multiplicate the value on rate per hour and output it. */

#include <stdio.h>

int main () {
	int hrs , ovr;
	float rate , total;
	
	puts ("Enter hours worked (-1 to quit)");
	scanf ("%d" , &hrs);
	
	if ( hrs >= 0 ) {
	   while ( hrs >= 0 ) {
	   	puts ("Enter rate per hour value ");
	   	scanf ("%f" , &rate);
	   	
	   	// Calculating block
	   	ovr = hrs - 40;
	   	if ( ovr > 0 )
	   	total = rate*(40 + 1.5*ovr);
	   	else
	   	total = rate*hrs;
	   	
	   	//Output result
	   	printf ("Total salary is: %.2f\n\n" , total);
	   	
	   	puts ("Enter hours worked (-1 to quit)");
	       scanf ("%d" , &hrs);
	   	
    	}	// End of While
		
	}
	else
	puts (" No value"); // End of if
	puts (" ");
	puts ("Program is over");
	
	
	
return 0;	
} // End of main
/* Program obtains values of main summ, percent rate and duration , and returns charge rate , for multiple cases */

#include <stdio.h>

int main () {
	
	int dur;
	float msum , rate , charge;
	
	printf ("Enter value of main summ (-1 to quit)\n");
	scanf ("%f" , &msum);
	
	if ( msum >= 0) {
	   while (msum >= 0) {
	   	printf("Enter duration in days\n");
	   	scanf ("%d" , &dur);
	   	printf("Enter rate in percents\n");
	   	scanf ("%f" , &rate);
	   	
	   	charge = msum * rate * dur / 36500;
	   	
	   	printf("Your total charge is %.2f\n" , charge);
	   	printf ("\nEnter value of main summ (-1 to quit)\n");
	scanf ("%f" , &msum);
	   	
	   	
	   	
	   } // End of while	
		
	}
	else
	printf ("No values\n"); // End of if
	
	printf ("Program is over\n");
	
	
	
return 0;	
} // End of main
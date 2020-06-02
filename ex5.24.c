/* Program for exercise 5.24 */
/* Create functions that convert Celsius to Fahrenheit, Fahrenheit to Celsius. Then it needs to print tables 0-100C and 32-212F. */

#include <stdio.h>
#include <math.h>

int fahrenheit (int); // Prototype
int celcius (int);

main () 
{
	int celc, fahr;
	/*scanf ("%d" , &celc);
	printf ("Fahrenheit: %d\n" , fahrenheit (celc));
	
	scanf ("%d" , &fahr);
	printf ("Celcius: %d\n" , celcius (fahr)); */
	
	
	printf ("%10s\t%10s\n" , "Celcius" , "Fahrenheit");
	for (int i = 0; i <= 100; i += 10)
	{
		printf ("%10d\t%10d\n" , i , fahrenheit(i));
		
	} // End of for
	
	puts("");
	
	printf ("%10s\t%10s\n" , "Fahrenheit" , "Celcius");
	for (int i = 32; i <= 212; i += 10)
	{
		printf ("%10d\t%10d\n" , i , celcius(i));
		
	} // End of for
	
	return 0;
} // End of main

int fahrenheit (int cel)

{
	double val;
	val = (double)cel*9/5 + 32;
	return (int)floor(val + .5);
	
} // End of fahrenheit

int celcius (int fah)

{
	double val;
	val = (double)(fah - 32)*5/9;
	return (int)floor(val + .5);
	
} // End if celcius


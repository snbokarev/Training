/* Program for exercise 5.11 */
/* It needs to round input values using expression y = floor(x + .5) . The expression has to be a base to round also to tenth, hundreth, thousanth. Create function for each rounding type */

#include <stdio.h>
#include <math.h>

// Prototypes
double roundToInt(double);
double roundToTenth(double);
double roundToHundreth(double);
double roundToThousanth(double);

// Main function
main()
{
	double x;
	
	printf ("%s\n" , "Enter value");
	scanf ("%lf" , &x);
	
	while (x != -1) {	
	
   	printf ("Original: %lf \nRounded to int: %.2lf\nRounded to tenth: %lf\nRounded to hundreth: %lf\nRounded to thousanth: %lf\n\n" , x , roundToInt(x) , roundToTenth(x) , roundToHundreth(x) , roundToThousanth(x));
   	
   	printf ("%s\n" , "Enter value");
	   scanf ("%lf" , &x);
	   
	} // End of while
	
} // End of main

// Definitions
double roundToInt(double arg)
{
	return floor(arg + .5);
} // End of roundToInt

double roundToTenth(double arg)
{
	return floor(arg*10+ .5)/10;
} // End of roundToTenth

double roundToHundreth(double arg)
{
	return floor(arg*100+ .5)/100;
} // End of roundToTenth

double roundToThousanth(double arg)
{
	return floor(arg*1000+ .5)/1000;
} // End of roundToThousanth





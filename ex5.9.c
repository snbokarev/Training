/* Program for exersise 5.9 */
/* It needs to calculate current charge, $2 per first 3 hrs, $0.5 per next hrs, $10 per 24 hrs */

#include <stdio.h>
#include <math.h>

double calculateCharges (float); //prototype

main ()
{
	float h1, h2, h3;
	printf ("%s\n" , "Enter hours for 1st car");
	scanf ("%f" , &h1);
	printf ("%s\n" , "Enter hours for 2nd car");
	scanf ("%f" , &h2);
	printf ("%s\n" , "Enter hours for 3rd car");
	scanf ("%f" , &h3);
	
	printf("%-5s%5s%10s\n" , "Car" , "Hours" , "Charge");
	
	printf ("%-5s%5.1f%10.2lf\n" , "1" , h1 , calculateCharges(h1));
	printf ("%-5s%5.1f%10.2lf\n" , "2" , h2 , calculateCharges(h2));
	printf ("%-5s%5.1f%10.2lf\n" , "3" , h3 , calculateCharges(h3));
	
	
	return 0;
	
} // End of main

double calculateCharges(float hours)
{
	double result;
	if  (hours <=3)
	   result = 2;
	else
	   if (hours > 23) {
	   	int day;
	   	day = (int)ceil(hours)/24;
	       result = (float)day*10 + (ceil(hours) - 24*day)*0.5;
	   }
	   else
   	result = 2 + ceil((hours - 3))*0.5;
	return result;
} //End of definition
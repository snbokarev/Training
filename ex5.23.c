/* Program for exercise 5.23 */
/* It needs to create function which gets hrs, minutes, seconds and returnes seconds from 12 */

#include <stdio.h>
#include <math.h>

int seconds(int, int , int); // Prototype

main () {
	int h1 , m1 , s1 , h2 , m2 , s2 , delta , hr , mi , se;
	
	printf ("%s\n" , "Enter time of first event n format hh mm ss");
	scanf ("%d%d%d" , &h1 , &m1 , &s1);
	
	printf ("%s\n" , "Enter time of second event n format hh mm ss");
	scanf ("%d%d%d" , &h2 , &m2 , &s2);
	
	if ( (h1 < 12 && h2 >= 12) || (h1 >= 12 && h2 < 12)) {
		printf ("%s\n" , "This is different halfs of day");
	} else {
	
    delta = abs (seconds (h1 , m1 , s1) - seconds (h2 , m2 , s2));
    
    hr = delta/3600;
    mi = delta%3600/60;
    se = delta%3600%60;
    
    printf ("Time between the events: %d hours %d minutes %d seconds\n" , hr , mi , se);
	} // End of else
	
	return 0;
} // End of main

int seconds(int hrs ,  int min , int sec) 
{
	if (hrs >= 12)
	   hrs -= 12;
	   
	return hrs*3600 + min*60 + sec;
	
} // End of definition seconds
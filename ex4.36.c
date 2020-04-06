/* Program for 4.36 */

/* It needs to create calendar for 1994 to 1999 */

#include <stdio.h>

int main () {
	int year , month , day , cent_code , year_code , month_code , year_half2 , week_day , leap;
	char wday;
	
	puts("Enter year");
	scanf ("%d" , &year);
/*	puts("Enter month");
	scanf ("%d" , &month);
	puts("Enter day");
	scanf ("%d" , &day); */
	
	// Check if the year is leap
	if (year % 4 == 0) {
	   if (year % 100 ==0) {
	   	if (year % 400 ==0) {
	   		leap = 1;
	   	} else leap = 0;	
	   } else  leap = 1;
	} else leap = 0;
	
	//Century codes are taken from internet
	switch (year/100) {
		case 19:
		cent_code = 0;
		break;
		
		case 20:
		cent_code = 6;
		break;
		
	} // End of switch year
  
  year_half2 = year%100;
	
	 // Calculate code of year, formula is taken from internet	
	year_code = (cent_code + year_half2 + year_half2/4)%7;
  
 for (month = 1 ; month <= 12 ; ++month) {
  printf ("The month: %d\n" , month);
  printf ("%s%4s%4s%4s%4s%4s%4s\n" , "Mon" , "Tue" , "Wed" , "Thu" , "Fri" , "Sat" , "Sun");
  for (day = 1 ; day <= 31 ; ++day) {
	
	// Below there is codes of months, taken from inernet
	switch (month) {
		case 1:  case 10: // January and October
		month_code = 1;
		break;
		
		case 5: // May
		month_code = 2;
		break;
		
		case 8: // August
		month_code = 3;
		break;
		
		case 2: case 3: case 11: // February, March, November
		month_code = 4;
		break;
		
		case 6: //June
		month_code = 5;
		break;
		
		case 9: case 12: // September, December
		month_code = 6;
		break;
		
		case 4: case 7: // April, July
		month_code = 0;
		break;
		
	} //End of switch
	
	
	// Formula is taken from internet. For leap year we substract 1
	if (leap == 1&& month <= 2) {
   	week_day = (day + month_code + year_code)%7  - 1;
   	if (week_day == -1) week_day = 6;
	} else {
		week_day = (day + month_code + year_code)%7;
	}	
    
    // Excluding specific days
    if (!((month == 4 || month == 6 || month == 9 || month == 11 ) && day > 30))
      if (!(leap == 0 && month == 2 && day > 28))
       if (!(leap == 1 && month == 2 && day > 29)) {
       	
      	printf ("Weekday of %d is %d\n" , day , week_day);
       }
       
       
	
  } // End of for day
 } // End of For month
   return 0;	
} // End of main
/* Program for 4.36 */

/* It needs to create calendar for 1994 to 1999 */

#include <stdio.h>

int main () {
	int year , month , day , cent_code , year_code , month_code , year_half2 , week_day;
	puts("Enter year");
	scanf ("%d" , &year);
	puts("Enter month");
	scanf ("%d" , &month);
	puts("Enter day");
	scanf ("%d" , &day);
	
	year_half2 = year%100;
	
	switch (year/100) {
		case 19:
		cent_code = 0;
		break;
		
		case 20:
		cent_code = 6;
		break;
		
	} // End of switch year
	
	switch (month) {
		case 1:  case 10:
		month_code = 1;
		break;
		
		case 5:
		month_code = 2;
		break;
		
		case 8:
		month_code = 3;
		break;
		
		case 2: case 3: case 11:
		month_code = 4;
		break;
		
		case 6:
		month_code = 5;
		break;
		
		case 9: case 12:
		month_code = 6;
		break;
		
		case 4: case 7:
		month_code = 0;
		break;
		
	} //End of switch
	
	printf ("centcode: %d  monthcode: %d  yhalf2: %d\n" , cent_code , month_code , year_half2);
	
	year_code = (cent_code + year_half2 + year_half2/4)%7;
	week_day = (day + month_code + year_code)%7;
	
	printf ("Weekday is %d\n" , week_day);
	
} // End of main
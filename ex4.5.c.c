/* Program for 4.5.c */

/* It needs to input digit and char, then output them */

#include <stdio.h>

int main () {
	
	int intVal;
	char charVal;
	
	scanf ("%d" , &intVal);
	charVal = getchar ();
	
	printf ("Integer: %d\nChar: %c\n" , intVal , charVal);
	
	
} // End of main
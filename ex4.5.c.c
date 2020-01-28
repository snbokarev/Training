/* Program for 4.5.c */

/* It needs to input digit and char, then output them */

#include <stdio.h>

int main () {
	
	int intVal;
	int charVal;
	
    scanf ("%d" , &intVal);
    
    intVal = getchar();
	charVal = getchar();
	//scanf ("%d" , &charVal);
	
	//scanf ("%d%*c%c" , &intVal, &charVal);
	
	printf ("Integer: %d\nChar: %c\n" , intVal , charVal);
	
	
} // End of main
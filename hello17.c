#include <stdio.h>

/* Lets start */

int main () {
	
	int res;
	int pass = 0;
	int fail = 0;
	int stud = 1;
	
	printf ("Enter values\n");
	
	while (stud <= 10)  {
	
		printf ("Enter %d result (1 or 2): \n ", stud);
		scanf ( "%d",  &res);
		
		if (res ==1) {
			pass = pass + 1;	
		}
		    else         {
		    fail = fail + 1;	
	    }
		    	
		stud = stud + 1;
		
     }
	 
	 printf ("\nPassed: %d\n", pass);
	 printf ("Failed: %d\n\n", fail);
	 
	if (pass > 8) {
	    
	    printf ("Bonus teacher");	
		
	}
	
	


}
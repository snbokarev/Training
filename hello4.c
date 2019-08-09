#include <stdio.h>

int main () {
	
	int i1 , i2 , i3;
	
	printf ( "Enter 3 integer values\n");
	scanf ( "%d%d%d" , &i1 , &i2 , &i3);
	
	printf ( "Average is %d\n" , (i1 + i2 + i3)/3);
	printf ( "Summ is %d\n", i1 + i2 + i3);
	printf ( "Product is %d\n", i1*i2*i3);
	
	if (i1 > i2) {
	   if (i2 > i3) {
	   printf ( "Biggest is %d\n" , i1);	
	   printf ( "Smallest is %d\n" , i3);	
   	}	
	}
	
	if (i2 > i3) {
	   if (i3 > i1) {
	   printf ("Biggest is %d\n" , i2);
	   printf ("Smallest is %d\n" , i1);	
	   }
	}
	 	
	 if (i3 > i1) {
	    if (i1 > i2) {
	    printf ("Biggest is %d\n" , i3);
	    printf ("Smallest is %d\n" , i2);
	    }	
	 }
	 	
	   
		
	
	
} /* End of main */
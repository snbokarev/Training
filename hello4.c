#include <stdio.h>

int main () {
	
	int i1 , i2 , i3;
	
	printf ( "Enter 3 integer values\n");
	scanf ( "%d%d%d" , &i1 , &i2 , &i3);
	
	printf ( "Average is %d\n" , (i1 + i2 + i3)/3);
	printf ( "Summ is %d\n", i1 + i2 + i3);
	printf ( "Product is %d\n", i1*i2*i3);
	
	
	
} /* End of main */
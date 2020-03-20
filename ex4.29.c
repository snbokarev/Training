/* Program for 4.29 */

/* It needs to implement Morgan's rules to logical statements */

#include <stdio.h>

int main () {
	int x = 3 , y = 7, a = 1 , b = 1 , g = 0, Y = 5 , i = 0 , j = 1;
	printf ("x = %d\ny = %d\na = %d\nb = %d\ng = %d\nY = %d\ni = %d\nj = %d\n" , x , y , a , b , g , Y , i , j);
	printf ("The statement: !(x < 5) && !(y >= 7) is %d\n" , !(x < 5) && !(y >= 7) );
	printf ("The statement: !(x < 5 && y >= 7) is %d\n\n" , !(x < 5 && y >= 7));
	printf("The statement: !(a == b) || !(g != 5) is %d\n" , !(a == b) || !(g != 5));
	printf("The statement: !(a == b  && g != 5) is %d\n\n" , !(a == b && g != 5));
	printf("The statement: !(x <= 8 && Y > 4) is %d\n" , !(x <= 8 && Y > 4) );
	printf("The statement: !(x <= 8) || !(Y > 4) is %d\n\n" , !(x <= 8) || !(Y > 4) );
	printf("The statement: !(i > 4) || (j >= 6) is %d\n" , !(i > 4) || (j >= 6));
	printf("The statement: !(i > 4 && !(j >= 6)) is %d\n" , !(i > 4 && !(j >= 6)) );
	
	return 0;	
	
} // End of main
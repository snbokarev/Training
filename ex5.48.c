/* Program for the exercise 5.48 */
/* It needs to change the program from 5.47 to use any integer b */

#include <stdio.h>

int mystery(int, int);

main()
{
	int x, y;
	printf("%s\n", "Enter two integers: ");
	scanf("%d%d", &x, &y);
	
	printf("The result is: %d\n", mystery(x, y));
	
	return 0;
	
} // End of main

// b can be not only positive
int mystery(int a, int b)
{
	if (b < 0) {
		b *= -1;
	    if (b == 1)
	        return -1 * a;
	    else
	        return -1 * (a + mystery(a, b - 1));
	} // end of b<0
	if (b > 0) {
	    if (b == 1)
	        return a;
	    else
	        return a + mystery(a, b - 1);
	} else { // if b = 0
	    return 0;
	} // end of else
	
} // End of mystery
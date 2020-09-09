/* Program for the exercise 5.47 */
/* It needs to understand what the program does */

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

// b can be positive only
int mystery(int a, int b)
{
	if (b == 1)
	    return a;
	else
	    return a + mystery(a, b - 1);
	
} // End of mystery
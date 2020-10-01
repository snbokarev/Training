/* Program fron figure 6.15 */
/* Const demonstration */

#include <stdio.h>

void tryToModifyArray(const int []);

main()
{
	int a[3] = {10, 20, 30};
	tryToModifyArray(a);
	printf("%d %d %d\n", a[0], a[1], a[2]);
	
	return 0;
	
} // End of main

void tryToModifyArray(const int b[])
{
	b[0] /= 2;
	b[1] /= 2;
	b[2] /= 2;
}

/* Program from figure 6.13 */
/* Reflects difference between handling arrays and arrays elements in functions */

#include <stdio.h>
#define SIZE 5

void modifyArray(int [], int);
void modifyElement(int);

main()
{
	int a[SIZE] = {0, 1, 2, 3, 4};
	int i;
	
	printf("Passing of the whole array "
	       "by reference.\nThe values of "
	       "the original array:\n");
	       
	for (i = 0; i <= SIZE - 1; i++)
	    printf("%3d", a[i]);
		
	printf("\n");
	modifyArray(a, SIZE);
	
	printf("The values of the modified array are:\n");
	for (i = 0; i <= SIZE - 1; i++)
	    printf("%3d", a[i]);
	 
	printf("\n\nPassing of the  array element "
	       "by values:\nThe value of a[3] "
	       "is: %d\n", a[3] );
	       
	modifyElement(a[3]);
	
	printf("The value of a[3] is: %d\n", a[3]);
	
	return 0;
	
} // End of main

void modifyArray(int b[], int size)
{
	for (int j = 0; j <= size - 1; j++) {
		b[j] *= 2;		
	} // end of for 
	
} // End of modifyArray

void modifyElement(int e)
{
	printf("The value in modifyElement is: %d\n", e *= 2);
	
	
} // End of modifyElement
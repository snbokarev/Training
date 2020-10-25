/* Program for exercise 6.8 (e, f) */
/* It needs to copy array a to array b and find min and max for array w */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ASIZE 11
#define BSIZE 34
#define WSIZE 99

int makeArray(int); // The function is for tests

int main()
{
	float a[ASIZE], b[BSIZE], w[WSIZE];
	int i, min_index, max_index;
	float min, max;
	
	srand(time(NULL));
	
	// Filling A array
	puts("A array");
	for (i = 0; i <= ASIZE - 1; i++) {
	    a[i] = (float) (100 + rand()%1000) / 100;
	    printf("%d %.2f\n", i + 1, a[i]);
	} // end of for a
	
	// Filling B array
	printf("\n%s\n", "B array");
	for (i = 0; i <= BSIZE - 1; i++) {
	    b[i] = (float) (100 + rand()%1000) / 100;
	    printf("%d %.2f\n", i + 1, b[i]);
	} // end of for b
	
	// Copying A to B array
	for (i = 0; i <= ASIZE - 1; i++) {
	    b[i] = a[i];
	} // end of forbba to b
	
	// Printing B array
	printf("\n%s\n", "Modified B array");
	for (i = 0; i <= BSIZE - 1; i++) {
	    printf("%d %.2f\n", i + 1, b[i]);
	} // end of for b

	// Filling W array
	printf("\n%s\n", "W array");
	for (i = 0; i <= WSIZE - 1; i++) {
	    w[i] = (float) (rand()%1001) / 100;
	    printf("%d %.2f\n", i + 1, w[i]);
	} // end of for w
	
	// Finding min and max of W
	min = w[0];
	for (i = 1; i <= WSIZE - 1; i++)
	    if (w[i] < min) {
	        min = w[i];
	        min_index = i + 1;
	    }
	        
	max = w[0];
	for (i = 1; i <= WSIZE - 1; i++)
	    if (w[i] > max) {
	        max = w[i];
	        max_index = i + 1;
	    }
	        
	printf("\nThe minimum of W is %d element: %.2f\nThe maximum of W is %d element: %.2f\n", min_index, min, max_index, max);
	    
	return 0;
	
} // End of main

int makeArray(int size)
{
	float array[size];
	int i;
	
	for (i = 0; i <= size - 1; i++)
	    array[i] = 1 + rand() % 1000;
	return array;
} // End of makeArray
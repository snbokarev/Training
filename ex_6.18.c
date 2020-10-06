/* Program from figure 6 18 */
/* Linear search */

#include <stdio.h>
#define SIZE 100

int linearSearch(int [], int, int);

main()
{
	int a[SIZE], x, searchKey, element;
	
	for (x = 0; x <= SIZE - 1; x++)
	    a[x] = 2 * x;
	    
	printf("Enter integer search key:\n");
	scanf("%d", &searchKey);
	
	element = linearSearch(a, SIZE, searchKey);
	if (element != -1)
	    printf("Found value on element %d\n", element);
	else
	    printf("Value not found");
	    
	return 0;
	
} // End of main

int linearSearch(int array[], int size, int key)
{
	int n;
	for (n = 0; n <= size - 1; n++)
	    if (array[n] == key)
	        return n;
	        
	return -1;
	
} // End of linearSearch 
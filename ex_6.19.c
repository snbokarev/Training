/* Program from figure 6.19 */
/* Binary search */

#include <stdio.h>
#define SIZE 15

int binarySearch(int [], int, int, int);
void printHeader(void);
void printRow(int [], int, int, int);

main()
{
	int a[SIZE], i, key, result;
	
	for (i = 0; i <= SIZE - 1; i++)
	    a[i] = 2 * i;
	    
	printf("%s \n", "Enter a number between 0 and 28:");
	scanf("%d", &key);
	
	printHeader();
	result = binarySearch(a, key, 0, SIZE - 1);
	
	if (result != -1)
	    printf("%d has been found in array on position %d.\n", key, result);
	else
	    printf("%d not found.\n", key);
	    
	return 0;
	
} //End of main

int binarySearch(int b[], int searchKey, int low, int high)
{
	int middle;
	
	while (low <= high) {
		middle = (low + high) / 2;
		printRow(b, low, middle, high);
		
		if (searchKey == b[middle])
		    return middle;
		else if (searchKey > b[middle])
		    low = middle + 1;
		else
		    high = middle - 1;
	} // end of while
	
	return -1; // Key not found 
	
} // End of binarySearch 

void printHeader(void)
{
	int i;
	
	printf("\n%s\n", "Subscripts:");
	
	for (i = 0; i <= SIZE - 1; i++)
	    printf("%3d ", i);
	    
	printf("%s\n", "");
	
	for (i = 1; i <= SIZE * 4; i++)
	    printf("%s", "-");
	    
	printf("%s\n", "");
	
} // End of printHeader

void printRow(int b[], int low, int mid, int high)
{
	int i;
	
	for (i = 0; i <= SIZE - 1; i++)
	    if (i < low || i > high)
	        printf("%s", "    ");
	    else if (i == mid)
	        printf("%3d*", b[i]);
	    else
	        printf("%3d ", b[i]);
	
	printf("%s\n", "");
	
} // End of printRow


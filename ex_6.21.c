/* Program from figure 6.21 */
/* Multidimensional array initialization */

#include <stdio.h>

void printArray(int [][3]);

main()
{
	int array1[2][3] = {{1, 2, 3}, {4, 5, 6}},
	array2[2][3] = {1, 2, 3, 4, 5},
	array3[2][3] = {{1, 2}, {4}};
	
	printf("%s\n", "Values in array1 by row are:");
	printArray(array1);
	
	printf("%s\n", "Values in array2 by row are:");
	printArray(array2);
	
	printf("%s\n", "Values in array3 by row are:");
	printArray(array3);
	
	return 0;
	
} // End of main

void printArray(int a[][3])
{
	int i, j;
	
	for (i = 0; i <= 1; i++) {
	    for (j = 0; j <= 2; j++)
	        printf("%d ", a[i][j]);
	        
	    printf("%s\n", "");
	}  
	
} // End of printArray

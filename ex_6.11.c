/* Program from figure 6.11 */
/* Difference between static and automatic arrays */

#include <stdio.h>

void staticArrayInit(void);
void automaticArrayInit(void);

main()
{
	printf("%s", "First call to each function:");
	staticArrayInit();
	automaticArrayInit();
	
	printf("\n\n%s", "Second call to each function:");
	staticArrayInit();
	automaticArrayInit();
	
	return 0;
	
} // End of main

void staticArrayInit(void)
{
	int static a[3];
	int i;
	
	printf("\n%s\n", "Values on entering staticArrayInit:");
	for (i = 0; i <= 2; i++)
	    printf("array1[%d] = %d ", i, a[i]);
	
	printf("\n%s\n", "Values on exiting staticArrayInit:");
	for (i = 0; i <= 2; i++)
	    printf("array1[%d] = %d ", i, a[i] += 5);
	
} // End of staticArrayInit 

void automaticArrayInit(void)
{
	int a[3] = {1, 2, 3};
	int i;
	
	printf("\n%s\n", "Values on entering automaticArrayInit:");
	for (i = 0; i <= 2; i++)
	    printf("array1[%d] = %d ", i, a[i]);
	
	printf("\n%s\n", "Values on exiting automaticArrayInit:");
	for (i = 0; i <= 2; i++)
	    printf("array1[%d] = %d ", i, a[i] += 5);
	
} // End of automaticArrayInit 

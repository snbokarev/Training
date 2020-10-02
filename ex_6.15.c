/* Program from figure 6.15 */
/* Array bubble sorting */

#include <stdio.h>
#define SIZE 10

main()
{
    int a[SIZE] = {5, 10, 1, 3, 7, 8, 2, 4, 55, 0};
    int i, pass, hold;
    
    printf("%s\n", "The original array is:");
    for (i = 0; i <= SIZE - 1; i++)
        printf("%4d", a[i]);
        
    // Sorting itself
    for (pass = 1; pass <= SIZE - 1; pass++)
        for (i = 0; i <= SIZE - 2; i++) 
        	if (a[i] > a[i + 1]) {
        		hold = a[i];
        		a[i] = a[i + 1];
        		a[i + 1] = hold;
        	} // end of if
    
    printf("\n%s\n", "The sorted array is:");
    for (i = 0; i <= SIZE - 1; i++)
        printf("%4d", a[i]);
        
    return 0;
        
} // End of main

/* Program for exercise 6.9 */

#include <stdio.h>
#define ROW 2
#define COL 5

main()
{
	int t[ROW][COL];
	int i, j, i_min = 0, j_min = 0, min, sum = 0;
	
	for (i = 0; i <= ROW - 1; i++)
	    for (j = 0; j <= COL - 1; j++)
	    t[i][j] = 0;
	
	printf("%s%10s\n", "Element", "Value");
	for (i = 0; i <= ROW - 1; i++)
	    for (j = 0; j <= COL - 1; j++)
	    printf("t[%d][%d]: %4d\n", i, j, t[i][j]);
	    
	for (i = 0; i <= ROW - 1; i++)
	    for (j = 0; j <= COL - 1; j++) {
	        printf("Enter value for t[%d][%d]:\n", i, j);
	        scanf("%d", &t[i][j]);
	    } // end of for
	    
	min = t[0][0];
	for (i = 0; i <= ROW - 1; i++)
	    for (j = 0; j <= COL - 1; j++)
	    	if (t[i][j] < min) {
	    	    min = t[i][j];
	    	    i_min = i;
	    	    j_min = j;
	    	}
	    	
	 printf("The minimum is t[%d][%d] = %d\n", i_min, j_min, min);
	 
	 printf("%s%10s\n", "Element", "Value");
	 for (j = 0; j <= COL - 1; j++)
	    printf("t[0][%d]: %4d\n", j, t[0][j]);
	    
    for (i = 0; i <= ROW - 1; i++)
        sum += t[i][3];
        
    printf("Sum of 4th column is: %d\n", sum);
    
    for (j = 0; j <= COL - 1; j++)
        printf("\tCol %d", j);
    printf("\n");
        
    for (i = 0; i <= ROW - 1; i++) {
    	printf("Row %d", i);
	    for (j = 0; j <= COL - 1; j++)
	        printf("\t%d", t[i][j]);
	    printf("\n");
    } // end of for i
    
    return 0;
	
} // End of main
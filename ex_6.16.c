/* Program from figure 6.16 */
/* Find Mean, Median and Mode */

#include <stdio.h>
#define SIZE 99

void mean(int []);
void median(int []);
void mode(int [], int []);
void bubbleSort(int []);
void printArray(int[]);

main()
{
	int frequency[10] = {},
	      response[SIZE] = {5, 7, 3, 8, 9, 2, 3, 8, 1, 6,
	                                        7, 6, 1, 3, 5, 9, 1, 7, 8, 3,
	                                        6, 3, 9, 2, 7, 1, 6, 3, 4, 9,
	                                        9, 7, 3, 5, 6, 2, 9, 4, 1, 7,
	                                        7, 9, 1, 7, 2, 4, 8, 9, 5, 1,
	                                        9, 1, 8, 3, 2, 5, 3, 7, 8, 7,
	                                        8, 4, 5, 1, 6, 8, 7, 1, 3, 2,
	                                        3, 5, 2, 8, 6, 5, 1, 9, 5, 7,
	                                        1, 9, 2, 8, 3, 7, 4, 6, 5, 1,
	                                        2, 8, 4, 6, 7, 1, 5, 2, 3}
    mean(response);
    meadian(response);
    mode(frequency, response);
    return 0;
	
} // End of main

void mean(int answer[])
{
	int j , total = 0;
	print("%s\n%s\n%s\n", "********", "**Mean**", "*********");
	
	for (j = 0; j <= SIZE - 1; j++) 
		total = answer[j];
		
    printf("The mean is the average value of the data\n"
           "items. The mean is equal to the toral of\n"
           "all the data items divided by the number\n"
           "of data items (%d). The mean value for \n"
           "this run is: %d / %d = %.4f\n\n", SIZE, total, SIZE, (float)  total / SIZE;
	
} // End of mean

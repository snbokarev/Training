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
	                                        9, 7, 3, 5, 6, 2, 9, 3, 1, 7,
	                                        7, 9, 1, 7, 2, 4, 8, 9, 5, 1,
	                                        9, 1, 8, 3, 2, 5, 3, 7, 8, 7,
	                                        8, 4, 5, 1, 6, 8, 7, 1, 3, 2,
	                                        3, 5, 2, 8, 6, 5, 1, 9, 5, 7,
	                                        1, 9, 2, 8, 3, 7, 4, 6, 5, 1,
	                                        2, 8, 4, 6, 7, 1, 5, 2, 3};
    mean(response);
    median(response);
    mode(frequency, response);
    return 0;
	
} // End of main

void mean(int answer[])
{
	int j , total = 0;
	printf("%s\n%s\n%s\n", "********", "  Mean  ", "*********");
	
	for (j = 0; j <= SIZE - 1; j++) 
		total += answer[j];
		
    printf("The mean is the average value of the data\n"
           "items. The mean is equal to the toral of\n"
           "all the data items divided by the number\n"
           "of data items (%d). The mean value for \n"
           "this run is: %d / %d = %.4f\n\n", SIZE, total, SIZE, (float)  total / SIZE);
	
} // End of mean

void median(int answer[])
{
	printf("\n%s\n%s\n%s\n%s", "********", " Median ", "********", "The unsorted array of responses is");
	printArray(answer);
	bubbleSort(answer);
	printf("\n\nThe sorted array is");
	printArray(answer);
	
	printf("\n\nThe median is element %d of \n"
	       "the sorted %d element array.\n"
	       "For this run the median is %d\n\n",
	       SIZE/2, SIZE, answer[SIZE/2]);
	     
} // End of median

void mode(int freq[], int answer[])
{
	int rating, j, h, largest = 0, modValue = 0;
	
	printf("%s\n%s\n%s\n", "********", "  Mode  ", "********");
	
	for (rating = 1; rating <= 9; rating++)
	    freq[rating] = 0;
	    
	for (j = 0; j <= SIZE - 1; j++)
	    ++freq[answer[j]];
	    
	printf("%s%11s%19s\n\n%54s\n%54s\n\n", "Response", "Frequency", "Histogram", "1   1   2   2", "5   0   5   0   5");
	
	for (rating = 1; rating <= 9; rating++) {
	    printf("%8d%11d          ", rating, freq[rating]);
	    
	    if (freq[rating] > largest) {
	    	largest = freq[rating];
	    	modValue = rating;
	    } // end of if
	    
	    for (h = 1; h <= freq[rating]; h++)
	        printf("*");
	        
	    printf("\n");
	} // end of for
	
	printf("The mode is the most frequent value.\n"
	       "For this run the mode is %d which occured"
	       " %d times.\n", modValue, largest);
	       
} // End of mode

void bubbleSort(int a[])
{
	int pass, j, hold;
	for (pass = 1; pass <= SIZE - 1; pass++)
	    for (j = 0; j <= SIZE - 2; j++) 
	        if (a[j] > a[j+1]) {
	        	hold = a[j];
	        	a[j] = a[j+1];
	        	a[j+1] = hold;
	        } // end of if
} // end of bubbleSort

void printArray(int a[])
{
	int j;
	for (j = 0; j <= SIZE - 1; j++) {
		if (j % 20 == 0)
		    printf("\n");
		
		printf("%2d", a[j]);
		
	} // end of for
	
} // End of printArray


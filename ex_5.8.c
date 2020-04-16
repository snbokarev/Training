/* Program from figure 5.8 */
/* It needs to find quantity of each result of game cube throwing */

#include <stdio.h>
#include <stdlib.h>

main () {
	int count1 = 0, count2 = 0 , count3 = 0 , count4 = 0 , count5 = 0 , count6 = 0 , val;
	
	for (int i = 1 ; i <= 6000 ; i++)  {
		val = 1 + rand() % 6;
		
		switch (val) {
			case 1:
			   ++count1;
			   break;
			   
			case 2:
			   ++count2;
			   break;
			 
			case 3:
			   ++count3;
			   break;  
			   
			case 4:
			   ++count4;
			   break;
			  
			case 5:
			   ++count5;
			   break; 
			
			case 6:
			   ++count6;
			   break;
			
		} // End of switch
	} // End of for
	
	printf ("1: %d\n" , count1);
    printf ("2: %d\n" , count2);
	printf ("3: %d\n" , count3);
	printf ("4: %d\n" , count4);
	printf ("5: %d\n" , count5);
	printf ("6: %d\n" , count6);;
	
	
	return 0;
	
} // End of main